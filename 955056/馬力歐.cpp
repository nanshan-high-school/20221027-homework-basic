#include <iostream>
using namespace std;
int main() {
	int height;
	cin >> height;
	for (int row = 1; row < height; row++) {
		for (int space = 0; space < (height - row); space++) {
			cout << " ";
		}
		for (int hash = 0; hash < row; hash++) {
			cout << "#";
		}
		cout << endl;
	}
	for (int lastRow_hash = 0; lastRow_hash < height; lastRow_hash++) {
		cout << "#";
	}
}
