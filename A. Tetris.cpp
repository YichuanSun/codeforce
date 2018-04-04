#include <iostream>
#include <algorithm>
#define N 1004
using namespace std;
int a[N];
int main()	{
	int n,m,t,Min=100000;
	scanf("%d%d",&n,&m);
	for (int i=0;i<m;i++)	{
		scanf("%d",&t);
		a[t]++;
	}
	for (int i=1;i<=n;i++)	Min=min(Min,a[i]);
	printf("%d\n",Min);
	return 0;
} 
