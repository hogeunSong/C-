#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
	int num = 1;
	int count = 1;
	cout.imbue(locale(""));

	while (count<=20) {
		
		int product;
		product = pow(num+1, count);
		
		cout << count << '\t' << setw(10)<<product<<'\n';
		count++;
	}
	
	return 0;
}