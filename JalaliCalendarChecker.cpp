/**
*
* @Name : JalaliCalendarChecker.cpp
* @Description : Checking the jalali calendar.
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-29
* @Released under : https://github.com/BaseMax/JalaliCalendarCheckerblob/master/LICENSE
* @Repository : https://github.com/BaseMax/JalaliCalendarChecker
*
**/
#include <iostream>
using namespace std;

bool isLeapYear(int year){
	return year%4==3 ? true : false;
} 
bool date(int year,int month,int day) {
	if(month > 12 || month < 1) {
		return false;
	}
	if(day > 31 || day < 1) {
		return false;
	}
	if(month <= 6 && day > 31) {
		return false;
	}
	if(month <= 11 && month > 6 && day > 30) {
		return false;
	}
	if(month == 12) {
		if(isLeapYear(year) == true) {
			if(day > 30) {
				return false;
			}
		}
		else {
			if(day > 29) {
				return false;
			}
		}
	}
	// if(year > 1400) {
	// 	return false;
	// }
	// if(year < 1300) {
	// 	return false;
	// }
	return true;
}
int main() {
	cout << "\\n\t______      _         _____ _               _    \n";
	cout << "\t|  _  \\    | |       /  __ \\ |             | |   \n";
	cout << "\t| | | |__ _| |_ ___  | /  \\/ |__   ___  ___| | __\n";
	cout << "\t| | | / _` | __/ _ \\ | |   | '_ \\ / _ \\/ __| |/ /\n";
	cout << "\t| |/ / (_| | ||  __/ | \\__/\\ | | |  __/ (__|   < \n";
	cout << "\t|___/ \\__,_|\\__\\___|  \\____/_| |_|\\___|\\___|_|\\_\\\n";
	cout << "                               |_Programmer: Max\n\n";
	string accept;
	while(true) {
		cout << "Do you want to enter the date, yes or no? ";
		cin >> accept;
		int year,month,day;
		for(char &character : accept){
			character = tolower(character);
		}
  		if(accept == "yes") {
			cout << "Year> ";
			cin >> year;
			cout << "Month> ";
			cin >> month;
			cout << "Day> ";
			cin >> day;
			cout << "--> " << (date(year,month,day) == true ? "Correct" : "Incorrect") << "\n";
		}
		// else {
		// 	// ;
		// }
	}
	return 0;
}
