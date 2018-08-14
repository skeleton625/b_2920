#include <iostream>
using namespace std;

int i1[8], r;

int main() {
	for (int i = 0; i < 8; i++) cin >> i1[i];
	for (int i = 0; i < 7; i++) {
		if (i1[i] < i1[i + 1]) r++;
		else r--;
	}
	if (r == -7) cout << "descending";
	else if (r == 7) cout << "ascending";
	else cout << "mixed";
	return 0;
}