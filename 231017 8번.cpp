﻿#include <iostream>
#include <vector>
using namespace std;

int inputGrade(float grade) {
	cin >> grade;
	if ((grade - (int)grade) != 0.0 || grade < 0 || grade > 100) {
		cout << "invalid input!!!" << endl;
		exit(EXIT_FAILURE);
	}
	else
		return (int)grade;
}

int topGrade(const vector<int>& grade) {
	int first;
	if (grade[0] > grade[1] && grade[0] > grade[2]) {
		first = grade[0];
	}
	else if (grade[1] > grade[0] && grade[1] > grade[2]) {
		first = grade[1];
	}
	else if (grade[2] > grade[0] && grade[2] > grade[1]) {
		first = grade[2];
	}
	return first;
}

int main() {
	vector<int> grades;
	float _grade = 0;

	for (int i = 0; i < 3; i++) {
		cout << "Input " << i << "-th grade(0~100):";
		int grade = inputGrade(_grade);
		grades.push_back(grade);
	}

	int best = topGrade(grades);
	cout << "Top Grade: " << best;
		return 0;
}