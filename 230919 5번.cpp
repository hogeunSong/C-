// 230919 5번.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int get_num();
int myadd(int x, int y);
int mysub(int x, int y);
int mymul(int x, int y);
float mydiv(int x, int y);

int addmul(int x, int y, int z);
float muldiv(int x, int y, int z);
int addmuladd(int x, int y, int z);
float subdivsub(int x, int y, int z);

int main() {
	int x, y, z;
	x = get_num();
	y = get_num();
	z = get_num();
	cout << "x= " << x << ", y= " << y << ", z= " << z << endl;
	cout << "(x + y) * z = " << addmul(x, y, z) << endl;
	cout << "(x * y) / z = " << muldiv(x, y, z) << endl;
	cout << "(x + y) * (y + z) = " << addmuladd(x, y, z) << endl;
	cout << "(x - y) / (y - z) = " << subdivsub(x, y, z) << endl;
}
int get_num() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	return num;
}
int myadd(int x, int y) {
	return x + y;
}
int mysub(int x, int y) {
	return x - y;
}
int mymul(int x, int y) {
	return x * y;
}
float mydiv(int x, int y) {
	return float(x) / y;
}

int addmul(int x, int y, int z) {
	return mymul(myadd(x, y), z);
}

float muldiv(int x, int y, int z) {
	return mydiv(mymul(x, y), z);
}

int addmuladd(int x, int y, int z) {
	return mymul(myadd(x, y), myadd(y, z));
}

float subdivsub(int x, int y, int z) {
	return mydiv(mysub(x, y), mysub(y, z));
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
