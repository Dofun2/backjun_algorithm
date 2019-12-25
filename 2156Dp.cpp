#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;	cin >> n;
	int wine[10001];
	for (int i = 1;i <= n;i++)
		cin >> wine[i];

	int memo[10001] = {0, wine[1], wine[1]+wine[2],};
	
	for (int i = 3;i <= n;i++) 
		memo[i] = max({ memo[i - 1], memo[i - 2] + wine[i], memo[i - 3] + wine[i - 1] + wine[i] });
	
	cout << memo[n];
	return 0;
}