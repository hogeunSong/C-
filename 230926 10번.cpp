#include <iostream>
using namespace std;

int main() {
	
	while(true){
	int dan, k=1;
	cout << "단 수를 입력하세요: ";
	cin >> dan;

		if (1 <= dan && dan<= 9) {
			while (k <= 9) {
				cout << dan << "*" << k << " = " << dan * k << endl;
				k++;			
			}
			cout << '\n';
			continue;
		}
		else if (dan>9) {
			cout << "1 부터 9까지의 정수를 입력해주세요." << endl;
			cout << '\n';
			continue;
		}
		else if (dan <1 && dan!=-1) {
			cout << "1 부터 9까지의 정수를 입력해주세요." << endl;
			cout << '\n';
			continue;
		}
		else if (dan == -1) {
			cout << "종료합니다" << '\n';
			break;
		}
	}
	return 0;
}