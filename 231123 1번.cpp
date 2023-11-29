#include <iostream>
#include <vector>
using namespace std;

template<class K, class R>
bool less_than(K a, R b) { return a < b; }

template<class T>
T sum(const vector<T>& v) {
	T k = 0;
	for (T elem : v)
		k+= elem;
	return k;
	
}
int main() {
	cout << less_than(2, 3) << endl;
	cout << less_than(2.1, 2.9) << endl;
	cout << less_than(2, 2.5) << endl;
	vector<int> v1{ 1,2,3,4 };
	vector<double> v2{ 10.1,20.2,30.3,40.4 };
	cout << sum(v1) << endl;
	cout << sum(v2) << endl;
	return 0;
}