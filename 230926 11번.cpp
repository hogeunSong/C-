#include <iostream>
using namespace std;
int gcd(int a, int b);
int main() {
	int x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	cout << "gcd(" << x << "," << y << ")" << " = " << gcd(x, y);
	return 0;
}
int gcd(int a, int b) {
	int k;
	k = a % b;
	if (k == 0) {
		return b;
	}
	else {
		return gcd(b, k);
	}
}