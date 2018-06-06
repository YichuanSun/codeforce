#include <bits/stdc++.h>
#define forn()	for (int i=0;i<n;i++)
#define N 105
using namespace std;
int a[N];
vector<int> v;
set<int> sett;
int main()	{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,k=0;
	scanf("%d",&n);
	forn()	scanf("%d",&a[i]);
	for (int i=n-1;i>=0;i--)
		if (!sett.count(a[i]))	{
                v.push_back(a[i]);
                sett.insert(a[i]),k++;
		}
	cout <<k<<endl<<v[v.size()-1];
	for (int i=v.size()-2;i>=0;i--)  cout << ' ' << v[i];
	cout << endl;
	for (auto x : sett) cout << x <<' ';
	cout <<endl;
	return 0;
}
