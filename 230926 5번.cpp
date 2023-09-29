#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n, m;
	cout << "Enter n for n x m matrix: ";
	cin >> n; //col
	cout << "Enter m for n x m matrix: ";
	cin >> m; //row

	int col=1;
	while (col <= n) {
		int row=1;
		while (row <= m) {
			int product = col * row;
			cout << setw(4) << product;
			row++;
		}
		cout << "\n";
		col++;
	}
	return 0;
}