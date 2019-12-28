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
		for (int j = i; j >= 0;j--)//�ߺ��� ���ð�� �ڿ� ���ڿ� ���ϱ� ���� �ٿ������� ��� ���
			if (arr[i] > arr[j] && high < arr[j] )
			{
				witch = j;//arr[i]���� �����鼭 ���� ū���� ��ġ ����
				high = arr[j];//arr[i]���� �����鼭 ���� ū�� ����
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