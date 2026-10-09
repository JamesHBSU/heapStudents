#include <sstring>
class Address{
	private:
		std::string stree;
		std::string city;
		std::string state;
		std::string zip;
	public:
		Address();
		void init(std::string s, std::string c, std::string st, std::string z);
		void printAddress();
};//end address class
