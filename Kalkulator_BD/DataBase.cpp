#include "Database.h"
#include <msclr/marshal_cppstd.h>

namespace KalkulatorBD {

    // Metoda pobieraj�ca �cie�ki do zdj�� z bazy danych
    std::vector<std::string> Database::GetPhotoPaths() {
        std::vector<std::string> photoPaths;

        // Ustawienie po��czenia z baz� danych Access
        OleDbConnection^ connection = gcnew OleDbConnection();
        connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\halin\\Desktop\\EbookPrz\\x64\\Debug\\DaneOsobowe.mdb";

        try {
            connection->Open();

            // Wykonanie zapytania SQL
            OleDbCommand^ command = gcnew OleDbCommand("SELECT PhotoPath FROM Dane", connection);
            OleDbDataReader^ reader = command->ExecuteReader();

            // Odczytanie danych z wyniku zapytania i zapisanie ich do vectora
            while (reader->Read()) {
                std::string photoPath = msclr::interop::marshal_as<std::string>(reader["PhotoPath"]->ToString());
                photoPaths.push_back(photoPath);
            }

            // Zamkni�cie readera i po��czenia
            reader->Close();
            connection->Close();
        }
        catch (OleDbException^ ex) {
            // Obs�uga wyj�tku
        }

        return photoPaths;
    }

    // Metoda pobieraj�ca opisy zdj�� i linki do ksi��ek z bazy danych
    std::vector<std::pair<std::string, std::string>> Database::GetDescriptionsAndLinks() {
        std::vector<std::pair<std::string, std::string>> descriptionsAndLinks;

        // Ustawienie po��czenia z baz� danych Access
        OleDbConnection^ connection = gcnew OleDbConnection();
        connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\halin\\Desktop\\EbookPrz\\x64\\Debug\\DaneOsobowe.mdb";

        try {
            connection->Open();

            // Wykonanie zapytania SQL
            OleDbCommand^ command = gcnew OleDbCommand("SELECT PhotoDescription, LinkBook FROM Dane", connection);
            OleDbDataReader^ reader = command->ExecuteReader();

            // Odczytanie danych z wyniku zapytania i zapisanie ich do vectora
            while (reader->Read()) {
                std::string photoDescription = msclr::interop::marshal_as<std::string>(reader["PhotoDescription"]->ToString());
                std::string linkBook = msclr::interop::marshal_as<std::string>(reader["LinkBook"]->ToString());
                descriptionsAndLinks.push_back(std::make_pair(photoDescription, linkBook));
            }

            // Zamkni�cie readera i po��czenia
            reader->Close();
            connection->Close();
        }
        catch (OleDbException^ ex) {
            // Obs�uga wyj�tku
        }

        return descriptionsAndLinks;
    }

    // Metoda pobieraj�ca zarejestrowane dane u�ytkownik�w z bazy danych
    std::vector<std::tuple<std::string, std::string, std::string, std::string, std::string, std::string>> Database::GetRegistrations() {
        std::vector<std::tuple<std::string, std::string, std::string, std::string, std::string, std::string>> registrations;

        // Ustawienie po��czenia z baz� danych Access
        OleDbConnection^ connection = gcnew OleDbConnection();
        connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\halin\\Desktop\\EbookPrz\\x64\\Debug\\DaneOsobowe.mdb";

        try {
            connection->Open();

            // Wykonanie zapytania SQL
            OleDbCommand^ command = gcnew OleDbCommand("SELECT Login, Haslo, Imie, Nazwisko, Email, NrIndeksu FROM Registration", connection);
            OleDbDataReader^ reader = command->ExecuteReader();

            // Odczytanie danych z wyniku zapytania i zapisanie ich do vectora
            while (reader->Read()) {
                std::string login = msclr::interop::marshal_as<std::string>(reader["Login"]->ToString());
                std::string haslo = msclr::interop::marshal_as<std::string>(reader["Haslo"]->ToString());
                std::string imie = msclr::interop::marshal_as<std::string>(reader["Imie"]->ToString());
                std::string nazwisko = msclr::interop::marshal_as<std::string>(reader["Nazwisko"]->ToString());
                std::string email = msclr::interop::marshal_as<std::string>(reader["Email"]->ToString());
                std::string nrIndeksu = msclr::interop::marshal_as<std::string>(reader["NrIndeksu"]->ToString());
                registrations.push_back(std::make_tuple(login, haslo, imie, nazwisko, email, nrIndeksu));
            }

            // Zamkni�cie readera i po��czenia
            reader->Close();
            connection->Close();
        }
        catch (OleDbException^ ex) {
            // Obs�uga wyj�tku
        }

        return registrations;
    }

    // Metoda aktualizuj�ca dane u�ytkownika w bazie danych
    bool Database::UpdateUserData(std::string login, std::string haslo, std::string imie, std::string nazwisko, std::string email, std::string nrIndeksu) {
        OleDbConnection^ connection = gcnew OleDbConnection();
        connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\halin\\Desktop\\EbookPrz\\x64\\Debug\\DaneOsobowe.mdb";

        try {
            connection->Open();
            OleDbCommand^ command = gcnew OleDbCommand("UPDATE Registration SET Haslo = ?, Imie = ?, Nazwisko = ?, Email = ?, NrIndeksu = ? WHERE Login = ?", connection);
            
            // Ustawienie parametr�w zapytania SQL
            command->Parameters->AddWithValue("@haslo", gcnew String(haslo.c_str()));
            command->Parameters->AddWithValue("@imie", gcnew String(imie.c_str()));
            command->Parameters->AddWithValue("@nazwisko", gcnew String(nazwisko.c_str()));
            command->Parameters->AddWithValue("@email", gcnew String(email.c_str()));
            command->Parameters->AddWithValue("@nrIndeksu", gcnew String(nrIndeksu.c_str()));
            command->Parameters->AddWithValue("@login", gcnew String(login.c_str()));

            command->ExecuteNonQuery();
            connection->Close();
            return true; // Zwracamy true w przypadku powodzenia aktualizacji danych
        }
        catch (OleDbException^ ex) {
            // Obs�uga wyj�tku
            return false; // Zwracamy false w przypadku b��du
        }
    }

    // Metoda usuwaj�ca u�ytkownika z bazy danych
    bool Database::DeleteUser(std::string login) {
        OleDbConnection^ connection = gcnew OleDbConnection();
        connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\halin\\Desktop\\EbookPrz\\x64\\Debug\\DaneOsobowe.mdb";

        try {
            connection->Open();
            OleDbCommand^ command = gcnew OleDbCommand("DELETE FROM Registration WHERE Login = ?", connection);

            // Ustawienie parametr�w zapytania SQL
            command->Parameters->AddWithValue("@login", gcnew String(login.c_str()));

            command->ExecuteNonQuery();
            connection->Close();
            return true; // Zwracamy true w przypadku powodzenia usuwania u�ytkownika
        }
        catch (OleDbException^ ex) {
            // Obs�uga wyj�tku
            return false; // Zwracamy false w przypadku b��du
        }
    }

}
