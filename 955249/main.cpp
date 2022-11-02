#include <iostream>
using namespace std;

int main() {
    int star;
    cout << "請輸入顯示幾個星號：";
    cin >> star;
    
    int count;
    int space;
    int starcount;
    int starcount2;
    
    for (count = 1;count <= star;count++) {
        for (space = star - count;space > 0;space--) {
            cout << " ";
        }
        space += star - count;
        for (starcount = 1;starcount + space <= star;starcount ++){
            cout << "*";
        }
        
        cout << " ";

        for (starcount = 1;starcount + space <= star;starcount ++){
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n程式結束";
}
