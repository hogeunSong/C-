#include <iostream>
#include <string>
using namespace std;

class Avengers {
public:
	Avengers() {
		name = "";
		attack_point = 0;
		defense_point = 0;
		health = 0;
	}
	~Avengers() {}
	// 캐릭터 설정 함수
	virtual void set(string _name, int _attack, int _defense, int _health) {}
	// 공격 함수
	virtual int attack() { return 0; }
	// 방어 함수
	virtual void defense(int _attack_point) { }
	// 캐릭터 정보 출력 함수
	virtual void print_info() { }

protected:
	string name; // 캐릭터 이름
	int attack_point; // 공격력
	int defense_point; // 방어력
	int health; // 체력
};


class Character : public Avengers {
public:
	
	void set(string _name, int _attack, int _defense, int _health)override{
		Avengers::name = _name;
		Avengers::attack_point = _attack;
		Avengers::defense_point = _defense;
		Avengers::health = _health;
	}
	int attack()override {
		return Avengers::attack_point;
	}
	void defense(int _attack_point)override {
		Avengers::health -= _attack_point - Avengers::defense_point;
	}
	void print_info()override {
		cout << "Name: " << Avengers::name << endl;
		cout << "Attack_Point" << Avengers::attack_point << endl;
		cout << "Defense_Point: " << Avengers::defense_point << endl;
		cout << "Health: " << Avengers::health << endl;
	}

	int get_health() { return health; }
};


int main() {
	Character my_char;
	Character enemy_char;

	string name;
	cout << "Choose your character(IronMan, CaptainAmerica, Thor): ";
	cin >> name;

	if (name == "IronMan") 
		my_char.set("IronMan", 70, 40, 100);
	if (name == "CaptainAmerica")
		my_char.set("CaptainAmerica", 60, 50, 100);
	if (name == "Thor")
		my_char.set("Thor", 80, 30, 100);

	int random;
	random = rand() % 3;

	if (random == 0) {
		enemy_char.set("IronMan", 70, 40, 100);
	}
	if (random == 1) {
		enemy_char.set("CaptainAmerica", 60, 50, 100);
	}
	if (random == 2) {
		enemy_char.set("Thor", 80, 30, 100);
	}

	cout << "--My Character--" << endl;
	 my_char.print_info();
	 cout << "--Enemy Character--" << endl;
	 enemy_char.print_info();
	 cout << endl;

	cout << endl << "--Battle--" << endl;
	cout << "My Life: " << my_char.get_health() << "\t"
		<< "Enemy Life:" << enemy_char.get_health() << endl;


	int myAttack = 1;
	while (1) {
		
		if (myAttack) {
			enemy_char.defense(my_char.attack());
			myAttack = 0;
		}
		else {
			my_char.defense(enemy_char.attack());
			myAttack = 1;
		}
	
		int myHealth = my_char.get_health();
		int enemyHealth = enemy_char.get_health();
		if (my_char.get_health() <= 0) {
			myHealth = 0;
		}
		else if (enemy_char.get_health() <= 0) {
			enemyHealth = 0;
		}
		cout << "My life: " << myHealth << '\t' << "Enemy Life: " << enemyHealth << endl;

		if (myHealth == 0) {
			cout << "You Lose!" << endl;
			break;
		}
		else if (enemyHealth == 0) {
			cout << "You Win!" << endl;
			break;
		}

	}
	return 0;
}
