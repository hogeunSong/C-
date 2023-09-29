#include <iostream>
using namespace std;

int main() {
	int k=1;
	int num;

	while (k <= 5) {
		cout << k << "번째 정수: ";
		cin >> num;
		if (num % 2 == 0) 
			cout << num << "은(는) 짝수입니다."<<endl;		
		else 
			cout << num << "은(는) 홀수입니다."<<endl;		
			k++;		
	}
	return 0;
}