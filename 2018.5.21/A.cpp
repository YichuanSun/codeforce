#include <bits/stdc++.h>
using namespace std;
int cmp(const void *a,const void *b)	{return *(int*)a-*(int*)b;}
int main()	{
	int n,a[105]={0};
	scanf("%d",&n);
	int j=n/2,sumb=0,sumw=0;
	for (int i=1;i<=j;i++)	scanf("%d",&a[i]);
	qsort(a,n/2,sizeof(int),cmp);
	for (int i=1;i<=j;i++)	{
		sumb+=abs(2*i-1-a[i]);
		sumw+=abs(2*i-a[i]);
	}
	printf("%d\n",min(sumb,sumw));
	return 0;
}
