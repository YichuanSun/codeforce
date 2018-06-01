#include <bits/stdc++.h>
using namespace std;
bool isdistinct(int t);
int a[105],b[105];
bool s[105];
int n,k,p=0,sum=0;
int main()	{
	cin >> n >> k;
	for (int i=1;i<=n;i++)	cin >> a[i];
	for (int i=1;i<=n;i++)	{
		for (int j=i+1;j<=n;j++)	{
			if (a[i]==a[j])	s[j]=1;
		}
	}
	for (int i=1;i<=n;i++)	if (!s[i]) sum++;
	if (sum>=k)	{
		cout <<"YES\n";
		int cnt=1;
		cout << 1;
		for (int i=2;i<=n;i++)	{
			if (s[i]==false)	{
				cout <<" "<<i;
				cnt++;
			}
			if (cnt>=k)	break;
		}
		cout <<endl;
	}
	if (sum<k)	cout << "NO\n";
	return 0;
}


