#include <iostream>
#include <string>
using namespace std;

string reverse(string word) {
	int k = word.size() - 1;
	int r = (k + 1) / 2;
	for (int i = 0; i < r; i++) {
		char temp = word[i];
		word[i] = word[k];
		word[k] = temp;
		k--;
	}
	return word;
}

int main() {

	string word;
	while (1) {
		cout << "문자열 하나를 입력해주세요 : ";
		cin >> word;

		if (word == "q" || word == "Q") {
			cout << "종료합니다";
			break;
		}

		cout << "입력하신 문자열의 역순 : ";
		string k = reverse(word);
		cout << reverse(word) << endl;
		[](string j, string x) {if (j == x) cout << "이 문자는 회문입니다.\n"; else cout << "이 문자는 회문이 아닙니다.\n"; }(word, k);
		cout << endl;

	}
	return 0;
}