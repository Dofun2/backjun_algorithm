#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool Can(vector <long long> tree,int n,int m ,long long mid) {
	long long add = 0;
	for (int i = 0; i < n;i++) {
		if (tree[i] - mid > 0) { add += (tree[i] - mid); }
	}
	return add >= m;
}



int main() {
	vector <long long> tree;
	int n, m;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		int a;cin >> a;
		tree.push_back(a);
	}

	long long bottom = 0;
	long long top = 1000000001;
	long long mid = 0;

	while (bottom + 1 < top) {
		long long mid = (top + bottom) / 2;
		if (Can(tree ,n ,m ,mid)) bottom = mid; // 이게 왜 bottom = mid +1  
		else top = mid ; // top = mid -1;
	}
	cout << bottom; // cout<<mid; 안되는 이유가 뭘까? 내일 해보기
	return 0;
}