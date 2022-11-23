#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int row = 1; row <= x; row++) {
        for (int space = 0; space < (x - row); space++) {          
            cout << " ";
        }
        
        for (int hash = 0; hash < row; hash++) {          
            cout << "#";
        }

        cout << "\n";
    }
}