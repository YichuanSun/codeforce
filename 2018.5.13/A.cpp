#include <bits/stdc++.h>
#define N 105
using namespace std;
int n,a[N],ans[N],k=0;
void change(int a[],int i);
int main()	{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for (int i=0;i<n;i++)	cin >> a[i];
	for (int i=0;i<n;i++)	change(a,i);
	for (int i=0;i<n;i++)	if (a[i]!=-100)	ans[k++]=a[i];
	cout << k <<'\n';
	if (ans[0]!=-100)	cout << ans[0];
	for (int i=1;i<k;i++)	if (ans[i]!=-100)	cout <<' '<< ans[i];
	cout <<endl;
	return 0;
} 

void change(int a[],int i)	{
	for (int j=0;j<i;j++)	{
		if (a[j]==a[i])	a[j]=-100;
	}
}
