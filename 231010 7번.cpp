#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream k ("temp.txt");
	
	int num;
	for (int sk = 0; sk < 100; sk++) {
		num = rand() % 101;
		k << num << " ";
		if (sk % 10 == 9)
			k << endl;
	}
	k.close();
	return 0;
}


/* 내가 직접 짠 코드 
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	int num = 0;
	int k;
	int r = 0;
	ofstream se ("temp.txt");
	while (r<100) {
		k = rand() % 101;
		se << k << " ";
		num++;
		if (r % 10 == 9) {
			se << endl;
		}
		r++;
	}
	se.close();
	return 0;
}
*/