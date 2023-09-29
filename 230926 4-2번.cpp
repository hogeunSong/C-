#include<iostream>
using namespace std;

int main() {
	int num;
	do {
		cout << "Enter the number (0,10]: ";
		cin >> num;
		if (num <= 0 || num > 10)
			continue;

		else
			break;
	} while (true);
	cout << "Success!" << endl;
	return 0;
}