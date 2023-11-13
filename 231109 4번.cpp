#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int balance;
    string id, name;

    static int sum;

public:
    Account() :
        id(""), name(""), balance(0) {}
    void setId(string id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setBalance(int balance) { this->balance = balance; sum += balance; }

    string getId() { return id; }
    string getName() { return name; }
    int getBalance() { return balance; }

    static int getSum() { return sum; }
};

int Account::sum = 0;


int main() {
    int studentNumber;
    cout << "총 학생 수 입력: ";
    cin >> studentNumber;

    Account* list = new Account[studentNumber];

    for (int i = 0; i < studentNumber; i++) {
        string id, name;
        int balance;
      
        cout << i+1 << "번째 학생 계좌 입력 : " << "학번 : ";
        cin >> id;
        cout << '\n';
        cout << "이름 : ";
        cin >> name;
        cout << '\n';
        cout << "잔액 : ";
        cin >> balance;
        cout << '\n';

        cout << "================================================" << endl;

        for (int k = 0; k < i; k++) {
            if (id == list[k].getId()) {
                cout << "중복된 학번이 존재합니다. 프로그램을 종료합니다.";
                exit(100);
            }
        }

        list[i].setId(id);
        list[i].setName(name);
        list[i].setBalance(balance);
    }

    cout << "회수된 금액 : " << Account::getSum() << endl;

        delete[] list;

    return 0;
}
