#include <iostream>
#include <algorithm>
using namespace std;
long arr[1010];
long memo[1010];

int main() {
	int n; cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];

	memo[0] = arr[0];
	for (int i = 1; i <= n; i++)
	{
		int high = 0;
		int witch = -1;
		for (int j = i; j >= 0;j--)//중복이 나올경우 뒤에 숫자에 더하기 위해 줄여나가는 방식 사용
			if (arr[i] > arr[j] && high < arr[j] )
			{
				witch = j;//arr[i]보다 작으면서 가장 큰값의 위치 저장
				high = arr[j];//arr[i]보다 작으면서 가장 큰값 저장
				if (memo[i] < memo[witch] + arr[i])
					memo[i] = memo[witch] + arr[i];
			}
		if (memo[i] == 0)
			memo[i] = arr[i];	
	}

	long dab = 0;
	for (int i = 0;i <= n;i++)
		dab = max(dab, memo[i]);
	cout << dab;
	return 0;
}