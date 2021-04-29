#include <iostream>
#include <string>
using namespace std;

class Date{
	int year, month, day;
	string hbd = " ";
public:
	Date(int y, int m, int d);
	Date(string hbd);
	int getYear();
	int getMonth();
	int getDay();
	void show();
};
Date::Date(int y, int m, int d){
	year = y;
	month = m;
	day = d;
}
Date::Date(string hbd){
	year = stoi(hbd.substr(0, 4));
	month = stoi(hbd.substr(5, 2));
	day = stoi(hbd.substr(8, 2));
}
int Date::getYear(){ return year; }
int Date::getMonth(){ return month; }
int Date::getDay(){ return day; }

void Date::show(){
	cout << year << "년" << month << "월" << day << "일" << endl;
}
int main(){
	Date birth(2014, 3, 20);
	Date independenceDay("1945/08/25");
	independenceDay.show();
	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;
}

// ' -> 작은따옴표 문자하나(문자)
// " -> 문자 하나 이상(문자열)