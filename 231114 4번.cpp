#include <iostream>
using namespace std;

class Polygon {
public:
	Polygon() {}
	Polygon(int point, float length) { mPoint = point, mLength = length; }
	~Polygon() {}
	virtual void calcPerimeter() { cout << "Perimeter: empty\n"; }
	virtual void calcArea() { cout << "Area: empty\n"; }

protected:
	int mPoint; // 꼭지점의 갯수
	double mLength; // 한 변의 길이
};
class Rectangle : public Polygon {
public:
	Rectangle() {}
	Rectangle(int point, float length) : Polygon(point, length)  {}
	~Rectangle() {}
	void calcPerimeter() override { cout << "Perimeter: " << mPoint * mLength << endl; }
	void calcArea() override { cout << "Area: " << mLength * mLength << endl;  }
};

int main() {
	Polygon pol;
	Rectangle rec(4, 10);
	cout << "--- Polygon class ---" << endl;
	pol.calcPerimeter();
	pol.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcPerimeter();
	rec.calcArea();
	return 0;
}