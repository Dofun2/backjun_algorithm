#include <iostream>

using namespace std;
long arr[91]{0,1,1, };

int main() {
	int n; cin >> n;
	for (int i = 3;i <= n;i++)
		arr[i] = arr[i - 2] + arr[i - 1];
	cout << arr[n];
	return 0;
}