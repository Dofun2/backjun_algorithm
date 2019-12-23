#include <iostream>
using namespace std;
int arr[1001] = { 1,3, };

void makeSquare(int n, int i = 1) {
	if (arr[n - 1] != 0)
		return;
	if (arr[i] == 0)
		arr[i] = ((2 * arr[i - 2]) + arr[i - 1]) % 10007;
	return makeSquare(n, i + 1);
}


int main() {
	int n; cin >> n;
	makeSquare(n);
	cout << arr[n - 1];
	return 0;
}