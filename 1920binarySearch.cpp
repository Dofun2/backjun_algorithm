#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int m;
int n;
vector <int> arr;
vector <int> compare;

bool binaraySearch(int key) {
	int top = n - 1;
	int bottom = 0;

	while (top >= bottom) {
		int mid = (top + bottom) / 2;
		if (arr[mid] == key)	return 1;
		else if (arr[mid] > key)	top = mid - 1;
		else	bottom = mid + 1;
	}
	return 0;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a = 0;	cin >> a;
		arr.push_back(a);
	}
	sort(arr.begin(), arr.end());


	cin >> m;
	for (int i = 0; i < m; i++) {
		int a = 0;	cin >> a;
		compare.push_back(a);
	}


	for (int i = 0;i < m;i++)
		cout << binaraySearch(compare[i]) << "\n";

	return 0;
}


