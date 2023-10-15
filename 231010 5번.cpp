#include <iostream>
#include <string>
using namespace std;

int main() {

	string s1, s2, s3, s4;
	cout << "시 : ";
	cin >> s1;
	cout << "구 : ";
	cin >> s2;
	cout << "로 : ";
	cin >> s3;
	cout << "건물명 : ";
	cin >> s4;

	string s5;
	s5 = s1 + s2 + s3 + s4;
	cout << "집 주소 : " << s5 << endl;
	return 0;
}