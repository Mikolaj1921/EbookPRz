#include <string>           // Biblioteka do obs³ugi typu std::string
#include <vector>           // Biblioteka do obs³ugi kontenera std::vector
#include <utility>          // Biblioteka do obs³ugi std::pair
#include <OleDb.h>          // Biblioteka do obs³ugi dostêpu do bazy danych
#include <tuple>            // Biblioteka do obs³ugi std::tuple

namespace KalkulatorBD {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	class Database {
	public:
		static bool UpdateUserData(std::string login, std::string haslo, std::string imie, std::string nazwisko, std::string email, std::string nrIndeksu);
		bool DeleteUser(std::string login);

		static std::vector<std::string> GetPhotoPaths();
		static std::vector<std::pair<std::string, std::string>> GetDescriptionsAndLinks();
		static std::vector<std::tuple<std::string, std::string, std::string>> GetPhotosAndLinks();
		static std::vector<std::tuple<std::string, std::string, std::string, std::string, std::string, std::string>> GetRegistrations();
	};
}