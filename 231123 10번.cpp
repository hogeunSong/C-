#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    vector<int> vector1(10);
    vector<int> vector2(10);
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        vector1[i] = rand() % 11;
        vector2[i] = rand() % 21;
    }

    cout << "<vector 1>" << endl;
    for (auto i = vector1.begin(); i != vector1.end(); i++)
        cout << *i << ' ';
    cout << endl;
    cout << "<vector 2>" << endl;
    for (auto k = vector2.begin(); k != vector2.end(); k++)
        cout << *k << ' ';
    cout << endl << endl;

    int big = 0;
    int small = 200;
    for (auto i = vector1.begin(); i != vector1.end(); i++)
        for (auto k = vector2.begin(); k != vector2.end(); k++) {
            if (*i * *k > big)
                big = *i * *k;
            if (*i * *k < small)
                small = *i * *k;
        }

    cout << "최댓값 = " << big << endl;
    cout << "최솟값 = " << small << endl;


    return 0;
}