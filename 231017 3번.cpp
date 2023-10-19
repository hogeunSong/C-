#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& v) {
	for (unsigned i = 0; i < v.size(); i++)
		cout << v[i] << '\t';
	cout << endl;
}

int main(){
	vector<int> vec{ 10, 20, 30 };
	print(vec);

	vec.at(0) = 100;
	vec.at(1) = 200;
	print(vec);

	vec.push_back(400);
	print(vec);

	vec.pop_back();
	print(vec);
	cout << endl;

	for (int &elem : vec) {     //벡터 vec의 요소를 1개씩 받아온다는 의미이다. //&를 넣어야 밑에서 입력한 값이 출력된다. // 안넣으면 기존의 100 200 30이 출력됨..
		cout << "enter an element of vector v: ";
		cin >> elem;
	}

	cout << endl << "[vector v]" << endl;

	for (int elem:vec)
		cout << elem << "\t";
	cout << endl;
	return 0;
}