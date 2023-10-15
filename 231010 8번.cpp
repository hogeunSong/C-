#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream sk1("temp1.txt");
	sk1 << "On its 60th anniversary in 2009, Kyung" << endl;
	sk1 << "Hee University prepared for a second leap" << endl;
	sk1 << "forward while seeking a new paradigm of future" << endl;
	sk1 << "university development." << endl;
	sk1 << endl;
	sk1.close();

	ofstream sk2("temp2.txt");
	sk2 << "In this paper, we explore the feasibility of a" << endl;
	sk2 << "medical training system for breast tumor palpation" << endl;
	sk2 << "based on haptic augmented reality (AR) technology." << endl;
	sk2.close();


	ofstream sk3("output.txt");
	ifstream mk1("temp1.txt");
	ifstream mk2("temp2.txt");

	string line;
	while (getline(mk1, line)) {
		sk3 << line << endl;
	}
	mk1.close();

	while (getline(mk2, line)) {
		sk3 << line << endl;
	}
	mk2.close();
	sk3.close();
}