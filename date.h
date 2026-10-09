#include <sstring>
class Date{
	private:
		int month;
		int day;
		int year;
	public:
		Date();
		void init(std::string dateString);
		void printDate();
};//end Date
