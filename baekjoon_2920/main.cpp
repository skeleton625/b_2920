#include <iostream>
using namespace std;

int i1;
unsigned long r;
int main() {
	for (int i = 0; i < 8; i++) {
		cin >> i1;
		r = r * 10 + i1;
	}
	cout << (r == 12345678 ? "ascending" : (r == 87654321 ? "descending" : "mixed"));
	return 0;
}