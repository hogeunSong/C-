#include <iostream>
using namespace std;

int main() {
	char key;
	cout << "Enter a key(p or q): ";
	cin >> key;
	switch (key) {
	case 'p':
		cout << "Pause";
		break;
	case 'P':
		cout << "pause";
		break;
	case 'q':
		cout << "Quit";
		break;
	case 'Q':
		cout << "Quit";
		break;


	default:
		cout << "Default";
		break;
	}
	return 0;
}