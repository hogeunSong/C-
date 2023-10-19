#include <iostream>
#include <string>
using namespace std;

void print(string *x) {
	*x = "ChangeValue";
}

int main() {
	string str = "This is default value";
	cout << "기본값 출력> " << str << endl;
	print(&str);
	cout << "input> " << str<<endl;
	cout << "변환된 값 출력> " << str << endl;
	return 0;
}