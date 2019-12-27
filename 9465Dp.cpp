#include <iostream>
#include <algorithm>

using namespace std;
long long arr[2][100100];
long long memo[2][100100];

int main() {
	int t; cin >> t;

	for (int kk = 0;kk < t; kk++)
	{
		int n; cin >> n;
		for (int i = 0;i < n;i++) 
			cin >> arr[0][i];
		for (int i = 0;i < n;i++)
			cin >> arr[1][i];

		memo[0][0] = arr[0][0];
		memo[1][0] = arr[1][0];
		memo[0][1] = memo[1][0] + arr[0][1];
		memo[1][1] = memo[0][0] + arr[1][1];

		for (int i = 2;i < n;i++)
		{
			memo[0][i] = max({memo[0][i-1], memo[1][i - 1] + arr[0][i],memo[1][i - 2] + arr[0][i] });
			memo[1][i] = max({memo[1][i-1], memo[0][i - 1] + arr[1][i],memo[0][i - 2] + arr[1][i] });
		}
		cout << max(memo[0][n-1], memo[1][n-1])<<"\n";

	}
	return 0;
}