#include <iostream>
using namespace std;

int main() {
	char grade = 'X';
	int score;
	cout << "Enter your score: ";
	cin >> score;

	if (0 <= score && score <= 100) {
		if (score < 60) {
			char grade = 'F';
			cout << "Your grade is " << grade << endl;
		}
		else if (score < 70) {
			char grade = 'D';
			cout << "Your grade is " << grade << endl;
		}
		else if (score < 80) {
			char grade = 'C';
			cout << "Your grade is " << grade << endl;
		}
		else if (score < 90) {
			char grade = 'B';
			cout << "Your grade is " << grade << endl;
		}
		else if (score <= 100) {
			char grade = 'A';
			cout << "Your grade is " << grade << endl;
		}

	}

	else {
		cout << "The score(" << score << ")is invalid" << endl;
	}

	return 0;
}
