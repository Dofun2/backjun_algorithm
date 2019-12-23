#include <iostream>
using namespace std;


int main() {
	long long arr[1000009] = { 1,2,4, };
	for (int i = 3; i < 1000007;i++) 
		arr[i] = (arr[i - 1] + arr[i - 2] + arr[i - 3]) % 1000000009;
	
	int n; cin >> n;
	for (int i = 0;i < n;i++) {
		int k; cin >> k;
		cout << arr[k - 1] << "\n";
	}

	return 0;
}