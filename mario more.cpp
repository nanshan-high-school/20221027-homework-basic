#include <iostream>
using namespace std;

int main() {
    int num , a , b , c, d;
    cout << "你要的金字塔層數:\n";
    cin >> num;
    for (a = 0 ; a <= num ; a++){
       for (b = num ; b > a ; b--){
       cout << " ";
    }
    for (c = 0 ; c < a ; c++){
       cout << "*";
    }
    cout << " ";
    for (d = 0 ; d < a ; d++){
       cout << "*";
    }
    cout << "\n";
  }  
}  
