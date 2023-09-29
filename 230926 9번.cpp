#include <iostream>
using namespace std;

int main() {
	int num, k = 1, add=0;
	cout << "number : ";
	cin >> num;
		while (k <= num) {
			if (k % 2 == 0 || k % 3 == 0) {
				k++;
				continue;
			}
			else {
				add += k;
				k++;
			}
		}
		cout << "sum: " << add << endl;
	return 0;
}