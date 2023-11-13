#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string name, id;
	int balance;

public:
	Account(string _name, string _id, int _balance) :
		name(_name), id(_id), balance(_balance) {}

	string getName() const { return this->name; }
	string getId()  const { return this->id; }
	int getBalance()const { return this->balance; }


	void operator+(Account Act) {
		this->balance += Act.balance;
	}
	void operator-(Account Act) {
		this->balance -= Act.balance;

	}
};
ostream& operator<<(ostream& cout, const Account& Act) {
	cout << "학번: " << Act.getId() << ", " << "이름: " << Act.getName() << ", " << "잔액: " << Act.getBalance();
	return cout;
}

int main() {
	Account acnt[3] = {
		Account("장윤호","2014",10000),
		Account("김유민", "2019", 0),
		Account("박진배", "2013", 5000),
	};
	string id1, id2;
	while (true) {
		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> id1;
		if (id1 == "종료") {
			cout << "종료합니다." << endl;
			for (auto elem : acnt)
				cout << elem << endl;
			exit(100);
		}
		cout << "돈을 보낼 학생의 학번을 입력하세요: ";
		cin >> id2;
		if (id1 == id2)
			continue;
		
		int truesId1 = 1;
		int i = 0;
		for (i; i < 3; i++) {
			if (id1 == acnt[i].getId()) {
				truesId1 = 0;
				break;
			}
		}
		if (truesId1) {
			cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다. 다시 입력해주세요." << endl;
			continue;
		}
		int truesId2 = 1;
		int r = 0;
		for (r;  r< 3; r++) {
			if (id2 == acnt[r].getId()) {
				truesId2 = 0;
				break;
			}
		}
		if (truesId2) {
			cout << "보내는 학생 혹은 받은 학생의 학번이 존재하지 않습니다. 다시 입력해주세요." << endl;
			continue;
		}



		if (id1 == "2014") {
			if (acnt[0].getBalance() == 0) {
				cout << "보내는 학생의 잔액이 부족합니다." << endl;
				continue;
			}
		}
		if (id1 == "2019") {
			if (acnt[1].getBalance() == 0) {
				cout << "보내는 학생의 잔액이 부족합니다." << endl;
				continue;
			}
		}
		if (id1 == "2013") {
			if (acnt[2].getBalance() == 0) {
				cout << "보내는 학생의 잔액이 부족합니다." << endl;
				continue;
			}
		}

		acnt[r] + acnt[i];
		acnt[i] - acnt[i];
		cout << "보낸 학생의 잔액 : " << acnt[i] << endl;
		cout << "받은 학생의 잔액 : " << acnt[r] << endl;

		
	}

	return 0;
}