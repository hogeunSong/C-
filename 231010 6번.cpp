#include <iostream>
#include <string>
using namespace std;

	int main() {
		string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향";
		string keyword;
		string qw = ",";
		string print;
		int k = 0;

		cout << "키워드 : ";
		cin >> keyword;
		cout << "검색결과 : ";

		while ((k = data.find(qw)) != string::npos) {		
			print = data.substr(0, k);
			if(print.find(keyword)!=string::npos)
				cout << print << " ";
			
			data = data.substr(k + qw.length());
		}
		return 0;
	}