﻿#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	double x, y;
public:
	Point() {x = 0, y = 0;}
	Point(int _x, int _y) {	this->x = _x, this->y = _y;}
	void setPoint(double x, double y) { this->x = x, this->y = y; }
	double getX(void)const { return this->x; }
	double getY(void)const { return this->y; }

	Point operator-(const Point& pt) {
		Point result(this->x - pt.getX(), this->y - pt.getY());
		return result;
	}
	Point operator*(const Point& pt) {
		Point result(this->x * pt.getX(), this->y * pt.getY());
		return result;
	}
	Point operator=(const Point& pt) {
		this->x = pt.getX();
		this->y = pt.getY();
		return *this;
	}


};

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point* pP1, * pP2, * pP3;
	cout << "첫번째 좌표(x1, y1)를 입력하세요 : ";
	cin >> x1 >> y1;
	cout << "두번째 좌표(x2, y2)를 입력하세요 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	pP3 = new Point(); //x, y 가 0으로 초기화

	/* 아래의 방식으로도 x, y값 설정이 가능해야 함 */
	//pP1->setPoint(x1, y1);
	//pP1->setPoint(x2, y2);
	/***********************************************/

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);

	/* pP3을 활용하여 거리값을 구함 */
	cout << "두 좌표 사이의 길이는 " << sqrt(pP3->getX()+pP3->getY()) << "입니다." << endl;
	return 0;
}
