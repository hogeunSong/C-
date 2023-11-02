#include <iostream>
#include <string>
using namespace std;

class CStudent {

private:

	int id;
	string name;
	string major;

public:

	CStudent() :
		id(0), name(""), major("") {
	}

	CStudent(int student_id, string student_name, string student_major) {
		id = student_id;
		name = student_name;
		major = student_major + '\n';
	}


	void setNumber(int _id) {
		id = _id;
	}

	void setName(string _name) {
		name = _name;
	}

	void setMajor(string _major) {
		major = _major;
	}

	int getNumber() {
		return id;
	}

	string getName() {
		return name;
	}

	string getMajor() {
		return major;
	}

	void Display() {
		cout << "학번 :" << id << endl;
		cout << "이름 :" << name << endl;
		cout << "전공 :" << major << endl;
	}

};


int main() {

	CStudent s[3];

	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {

		if (length == 3)
			break;

		cout << length + 1 << " 번째 학생 입력" << endl;
		cout << "학번: ";
		cin >> inputNumber;
		cout << "이름 : ";
		cin >> inputName;
		cout << "전공 : ";
		cin >> inputMajor;
		
		bool k = false;
		for (int i = 0; i < length; i++) {
			if (inputNumber == s[i].getNumber()) {
				cout << "※중복된 학번이 존재합니다" << endl;
				cout << endl;
				k = true;
				break;
			}
		}

		if (!k) {
			s[length].setNumber(inputNumber);
			s[length].setName(inputName);
			s[length].setMajor(inputMajor);
			cout << "※입력 완료" << endl;
			cout << endl;
			length++;
		}

		if (length == 3) {
			cout << "---모든입력이 완료되었습니다----\n";
			for (int i = 0; i < 3; i++) {
				s[i].Display();
				cout << endl;
			}
		}
	}

	return 0;
}
