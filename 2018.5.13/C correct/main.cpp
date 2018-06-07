#include <bits/stdc++.h>

using namespace std;

#define sz(a) int(a.size())

int main () {
	int n, m;
	scanf("%d%d",&n,&m);
	vector <long long> a (n);
	for (long long &t : a) scanf("%I64d",&t);
	int f = 0;
	long long ac = 0;
	while (m--) {
		long long x;
		scanf("%I64d",&x);
		while (ac + a[f] < x) ac += a[f++];
		printf("%d %I64d\n",f+1,x-ac);
	}
}
