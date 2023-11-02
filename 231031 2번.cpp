#include <string>
#include <iostream>
using namespace std;

class Account {
/*private: 멤버변수*/
	string name;
	string id;
	double balance;

public:
	Account() {			
		name = "";
		id = "";
		balance = 0;
	}

	Account(string customer_name, string account_number) {
		name = customer_name;
		id = account_number;
		balance = 0;
	}

	Account(string customer_name, string account_number, int amount) :
		name(customer_name), id(account_number), balance(amount) {
			if (amount < 0)
				amount = 0;
			else
				balance = amount;
		}
	
	void deposit(double _amt) {
		balance += _amt;
	}

	bool withdraw(double _amt) {
		if (balance - _amt < 0)
			return false;
		balance -= _amt;
		return true;
	}
	void print() {
		cout << name << ", " << id << ", " << balance << endl;
	}
};

int main() {
	Account ac1("배성호", "1002", 5000);
	Account ac2;
	ac2.print();
	ac1.print();

	int depo;
	cout << "예금할 금액을 입력하세요 : ";
	cin >> depo;
	ac1.deposit(depo);
	ac1.print();
	cout << '\n';

	int wdrw;
	cout << "출금할 금액을 입력하세요: ";
	cin >> wdrw;
	if (!ac1.withdraw(wdrw))
		cout << "잔액이 부족합니다." << endl;
	ac1.print();
	return 0;
}