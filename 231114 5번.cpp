#include <iostream>
#include <cmath>
using namespace std;

class Polygon {
public:
	Polygon(){}
	Polygon(int point, float length) { mPoint = point, mLength =length; }
	~Polygon() {}
	virtual void calcPerimeter() { cout << "Perimeter: empty\n"; }
	virtual void calcArea() { cout << "Area: empty\n"; }
protected:
	int mPoint; // 꼭지점의 갯수
	double mLength; // 한 변의 길이
};

class Triangle :public Polygon {
public:
	Triangle(int point, float length): Polygon(point, length){}
	void calcPerimeter()override { cout << "Perimeter: " << mPoint * mLength << endl; }
	void calcArea()override { cout << "Area: " << sqrt(3) / 4 * mLength * mLength << endl; }
													//정삼각형 넓이: 루트3/4 * 길이^2
};

class Rectangle :public Polygon {
public:
	Rectangle(int point, float length) : Polygon(point, length) {}
	void calcPerimeter()override { cout << "Perimeter: " << mPoint * mLength << endl; }
	void calcArea()override { cout << "Area: " << mLength * mLength << endl; }
};

class Circle :public Polygon {
public:
	Circle(int point, float length) : Polygon(point, length) {}
	void calcPerimeter()override { cout << "Perimeter: " <<mLength*2*3.14 << endl; }
	void calcArea()override { cout << "Area: " << mLength*mLength*3.14<< endl; }
};

int main() {
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);
	cout << "--- Triangle class ---" << endl;
	tri.calcPerimeter();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcPerimeter();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcPerimeter();
	cir.calcArea();
	return 0;
}