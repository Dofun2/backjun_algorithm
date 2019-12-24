#include <iostream>

using namespace std;
long arr[1001][10];

int main() {
	for (int i = 0;i < 10;i++)//첫번째 배열 1로 초기화
		arr[1][i] = 1;

	int s = 10007;
	int n; cin >> n;

	for (int i = 2; i <= n; i++) 
		for(int j = 0; j < 10; j++)
			for (int k = j; k < 10; k++) {
				arr[i][j] += arr[i - 1][k];
				arr[i][j] %= s;
			}

	int sum = 0;
	for (int i :arr[n]) {
		sum += i;
		sum %= s;
	}
	cout << sum;
	return 0;
}