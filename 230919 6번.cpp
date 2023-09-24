#include <iostream>
using namespace std;

void print_D0B(int year = 1990, int month = 1, int day = 1) {

	cout << "생년월일은 " << year << "년 " << month << "월 " << day << "일입니다." << endl;
}

int main() {
	print_D0B();

	int year, month, day;
	cout << "year 입력: ";
	cin >> year;
	cout << "month 입력: ";
	cin >> month;
	cout << "day 입력: ";
	cin >> day;

	print_D0B(year, month, day);
}




