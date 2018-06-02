#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	map<int, int> idx;
	int id = 0;
	for (auto &x : v) {
		cin >> x;
		idx[x]=++id;
	}
	sort(v.begin(), v.end());
	v.resize(unique(v.begin(), v.end()) - v.begin());
	if (v.size() >= k) {
		puts("YES");
		for (int i = 0; i < k; ++i)
			cout << idx[v[i]] << " ";
	}
	else
		puts("NO");
	return 0;
}
