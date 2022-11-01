#include <iostream>
using namespace std;
int main() {
  int num , time1 , time2 , time3 , time4 , time5;
  cin >> num;
  for (time1 = 0 ; time1 <= num ; time1++){
    for (time2 = num ; time2 > time1 ; time2--){
      cout << " ";
    }
    for (time3 = 0 ; time3 < time1 ; time3++){
      cout << "*";
    }
    cout << " ";
    for (time4 = 0 ; time4 < time1 ; time4++){
      cout << "*";
    }
    cout << "\n";
  }  
}  