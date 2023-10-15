#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

	ofstream sk1("temp1.txt");
	sk1 << "In this paper, we explore the feasibility of a" << endl;
	sk1 << "medical training system for breast tumor palpation based on haptic" << endl;
	sk1 << "augmented reality (AR) technology. Haptic AR is an emerging" << endl;
	sk1 << "research area in haptics and virtual reality" << endl;
	sk1 << "(VR), which is concerned"<<endl;
	sk1 << "with augmenting the haptic" << endl;
	sk1 << "properties of a real object by means of virtual haptic" << endl;
	sk1 << "feedback. The AR-based tumor palpation system" << endl;
	sk1 << "consists of a real breast sample." << endl;
	sk1.close();

	int len;
	cout << "length = ";
	cin >> len;


	ofstream sk2("output.txt");
	ifstream mk1("temp1.txt");
	char c;
	int k = 0;

	while (mk1.get(c)) {
		if (c != '\n') {
			sk2.put(c);
			k++;
			if (k % len == 0) {
				sk2.put('\n');
				k = 0;
			}
		}
	}
	sk2.close();
	mk1.close();
	return 0;
}