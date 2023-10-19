#include <iostream>
using namespace std;

void print(int *x) {
	*x = *x * *x;
}

int main() {
	int k;
	cout << "input> ";
	cin >> k;
	cout << "제곱값> ";
	print(&k);
	cout << k;

	return 0;
}