#include <iostream>
#include <algorithm>
using namespace std;

int command()
{
	int num;
	cout << "\n\t---- menu ----" << endl;
	cout << "\t1. 리스트 추가" << endl;
	cout << "\t2. 리스트 삭제" << endl;
	cout << "\t3. 리스트 출력" << endl;
	cout << "\t4. 프로그램 종료" << endl;
	cout << "\n\t입력 --> ";
	cin >> num;
	return num;
}


template <class T>
class CList {
private:
	T ary[5];
	int ary_size;

public:
	CList() { ary_size = 0; };
	~CList(){}

	bool IsEmpty() {
		if (ary_size == 0)
			return true;
		else
			return false;
	}

	bool IsFull() {
		if (ary_size == 5)
			return false;
		else
			return true;
	}

	void Add(T data) {

		if (ary_size == 5) {
			cout << "List is full." << endl;
			return;
		}

		for (int i = 0; i < ary_size; i++) {
			if (ary[i] == data) {
				cout << "중복된 데이터가 존재합니다." << endl;
				return;
			}
		}
		ary[ary_size] = data;
		ary_size++;
		sort(ary, ary + ary_size);

	}

	void Delete(T data) {
		if (ary_size == 0) {
			cout << "List is empty." << endl;
		}

		int deleteIndex = -1;
		for (int i = 0; i < ary_size; i++) {
			if (ary[i] == data) {
				deleteIndex = i;
				break;
			}
		}
		if (deleteIndex != -1) {
			for (int k = deleteIndex; k < ary_size; k++) {
				ary[k] = ary[k + 1];
			}
			ary_size--;
		}
	}

	void Print() {
		cout << "※ Current List" << endl << endl;
		for (int i = 0; i < ary_size; i++) {
			cout << ary[i] << " ";
		}
		cout << endl;
	}
};

typedef int type;

int main()
{
	CList<type> list; // type형으로 list 선언
	type input; // list에 입력 할 데이터
	int com; // 선택한 기능

	while (1)
	{
		com = command(); // 기능을 선택

		switch (com) {
		case 1: // 추가
			cout << "\n추가할 데이터 : ";
			cin >> input;
			list.Add(input);
			break;

		case 2: // 삭제
			cout << "\n삭제할 데이터 : ";
			cin >> input;
			list.Delete(input);
			break;

		case 3: // 출력
			list.Print();
			break;

		case 4: // 프로그램 종료
			cout << "\n\t프로그램을 종료합니다\n";
			return 0;
			break;

		default:
			break;
		}
	}
	return 0;
}