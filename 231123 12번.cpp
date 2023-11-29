#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {

	
		int odd;
		cout << "홀수 숫자를 하나 입력해 주세요 : ";
		cin >> odd;
		vector<vector<int>> vec(odd, vector<int>(odd, 0));
		int row = 0;
		int col = odd / 2;
		int num = 1;


		while (num <= odd * odd) {
			vec[row][col] = num;
			num++;

			int nextRow = row - 1;
			int nextCol = col + 1;

			if (nextRow < 0)
				nextRow = odd - 1;
			if (nextCol > odd - 1)
				nextCol = 0;

			if (vec[nextRow][nextCol] != 0) {
				row += 1;
			}
			else {
				row -= 1;
				col += 1;
			}

			if (row < 0)
				row = odd - 1;
			if (col > odd - 1)
				col = 0;
		}

		for (int i = 0; i < odd; i++) {
			for (int k = 0; k < odd; k++) {
				cout << setw(5) << vec[i][k];
			}
			cout << endl;
		}
		cout << "계속하려면 아무키나 누르십시오 . . .\n\n";
	
		return 0;

}