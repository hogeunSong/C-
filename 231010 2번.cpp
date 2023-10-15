#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	ofstream fout;
	fout.open("example.txt");

	string s2 = "Objective Oriented Programming";
	fout << s2 << endl;
	fout << "Random Variables" << endl;
	fout << "Linear Algebra" << endl;

	fout.close();

	ifstream fin;
	string s1;

	fin.open("example.txt");

	if (!fin) {
		cout << "Error, no such file exists" << endl;
		exit(100);
	}
	while (1) {
		fin >> s1;
		if (fin) {
			cout << s1 << endl;
		}
		else
			break;
	}
	fin.close();
}