#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:

	string name;
	int id;
	string major;
	vector<string> subject;
	vector<char> grade;

public:

	Student(string _name, int _id, string _major) :
		name(_name), id(_id), major(_major) {}

	Student() :
		name("default"), id(0), major("depart") {}

	auto setName(string _name) {
		name = _name;
		return name;
	}

	auto setID(int _id) {
		id = _id;
		return id;
	}

	auto setDpt(string _major) {
		major = _major;
		return major;
	}

	auto addGrade(string _subject, char _grade) {

		subject.push_back(_subject);
		grade.push_back(_grade);
	}

	void printGrades() {

		for (int i = 0; i < subject.size(); i++) {
			string _subject = subject.at(i);
			char _grade = grade.at(i);
			cout << _subject << " " << _grade << endl;
		}

		getGPA();
	}

	float getGPA() {
		float allScore = 0;

		for (int i = 0; i < grade.size(); i++) {
			char _grade = grade.at(i);
			
			if (_grade == 'A')
				allScore += 4;
			else if (_grade == 'B')
				allScore += 3;
			else if (_grade == 'C')
				allScore += 2;
			else if (_grade == 'D')
				allScore += 1;
			else if (_grade == 'F')
				allScore += 0;
		}

		float gpa = allScore / grade.size();
		cout <<"gpa : " << gpa << endl;
		return gpa;
	}

	auto getYear(int _year) {		

		string Get;
		int k = _year * 1000000;

		if (k-id < 1000000) 
			Get = "Freshmen(2학년)";
		if (k - id > 1000000 && k - id < 2000000) 
			Get = "Sophomore(3학년)";
		if (k - id > 2000000 && k - id < 3000000) 
			Get = "Junior(4학년)";
		if (k - id > 3000000)
			Get = "Senior(5학년 이상)";
		if (k - id <0) 
			Get = "About to graduate(1학년)" ;
		cout << Get<<endl;
		
	}

	void print() {
		cout << name<<" " << id <<" " << major << endl;
	}

};

int main() {
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";

	Student Ron;
	Ron.print();
	cout << "\n";
	Ron.setName("Ron");
	Ron.setID(2014103959);
	Ron.setDpt("EE");
	Ron.print();
	Ron.getYear(2019);
	Ron.addGrade("Computer Architecture", 'B');
	Ron.addGrade("Maching Learning", 'B');
	Ron.addGrade("Computer Vision", 'C');
	Ron.printGrades();
	cout << "\n\n";

	return 0;
}