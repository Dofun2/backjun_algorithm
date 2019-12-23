#include <iostream>
using namespace std;
long long arr[101][10];

int main() {
	int n; cin >> n;
	for (int i = 1; i < 10;i++)
		arr[1][i] = 1;

	for (int i = 1; i < 9;i++)
		arr[2][i] = 2;

	arr[2][9] = 1;

	for (int i = 3;i <= n;i++) 
	{
		for (int j = 1; j < 10;j++) 
		{
			if (j == 1)
				arr[i][1] = (arr[i - 2][1] + arr[i - 1][2]) % 1000000000;
			else if (j == 9)
				arr[i][9] = (arr[i - 1][8]) % 1000000000;
			else
				arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000;
		}
	}
	int sum = 0;
	for (int i; i < 10;i++) {
		sum += arr[n][i];
		sum %= 1000000000;
	}

	cout << sum;
	return 0;
}