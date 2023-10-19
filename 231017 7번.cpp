#include <iostream>
#include <vector>
using namespace std;

void pha(vector<int> &x) {
	x.at(0) = 10;
	x.at(1) = 9;
	x.at(2) = 8;
	x.at(3) = 7;
	x.at(4) = 6;
	x.at(5) = 5;
	x.at(6) = 4;
	x.at(7) = 3;
	x.at(8) = 2;
	x.at(9) = 1;
}

int main() {
	vector<int> k(10);
	int m = 1;
	for (int i = 0; i < 10; i++) {
		k[i] = m;
		m++;
	}
	cout << "기본 Vector 값: " << endl;
	for (int elem : k)
		cout << elem<<" ";
	cout << '\n';

	cout << "함수 실행 후 Vector 값: " << endl;
	pha(k);
	for (int elem : k)
		cout << elem << " ";
	return 0;
}