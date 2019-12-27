#include <iostream>
#include <algorithm>
using namespace std;
int arr[1002];
int memo[1002];

int main() {
	int n; cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];

	memo[0] = 1;
	for (int i = 1; i < n; i++) 
	{
		int high = 0;
		for (int j = 0; j < i;j++)	
			if(arr[j]<arr[i])
				high = max(high, memo[j]);
		memo[i] = high + 1;
	}
	int dab = 0;
	for (int i = 0;i < n;i++)
		dab = max(dab, memo[i]);
	cout << dab;
	return 0;
}