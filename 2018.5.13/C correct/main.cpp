#include <bits/stdc++.h>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
	int n, m;
	cin>>n>>m;
	vector <long long> a (n);
	for (long long &t : a) cin>>t;
	int f = 0;
	long long ac = 0;
	while (m--) {
		long long x;
		cin>>x;
		while (ac + a[f] < x) ac += a[f++];
		cout<<f+1<<" "<<x-ac<<endl;
	}
}
