#include <iostream>
using namespace std;

int main() {
    int num , time1 , time2 , time3;
    cout << "你要的金字塔層數:\n";
    cin >> num;
    for (time1 = 0 ; time1 <= num ; time1++) {
        for (time2 = num ; time2 > time1 ; time2--) {
        cout << " ";
        }
        for (time3 = 0 ; time3 < time1 ; time3++) {
        cout << "*";
        }
        cout << "\n";
    }
}
