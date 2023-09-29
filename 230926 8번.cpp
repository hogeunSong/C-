#include<iostream>
using namespace std;

int main() {
	int num;

	cout << "number : ";
	cin >> num;

	if (num >= 1) {
		int k = 1, add = 0;
		while (k <= num) {

			add += k;
			k++;
		}
		cout << "Sum of 1 to " << num << " = " << add << endl;
	}
	cout << "계속하려면 아무 키나 누르십시오 . . ." << endl;
}