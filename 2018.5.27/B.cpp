#include <bits/stdc++.h>
using namespace std;
const int N=10005;
int a[N],b[N],k=0,List[N],p=0;
int main()	{
	int asize,bsize,sum=0,t;
	scanf("%d",&asize);
	for (int i=0;i<asize;i++)	{
		scanf("%d ",&List[p++]);
		t=List[p];
		scanf("%d",&a[t]);
	}
	scanf("%d",&bsize);
	for (int i=0;i<bsize;i++)	{
		scanf("%d ",&List[p++]);
		t=List[p];
		scanf("%d",&b[t]);
	}
	for (int i=0;i<p;i++)	printf("%d	",a[i]);
	cout <<endl;
	for (int i=0;i<p;i++)	printf("%d	",b[i]);
	cout <<endl;
	for (int i=0;i<p;i++)	printf("%d	",List[i]);
	cout <<endl;
	for (int i=0;i<p;i++)	{
		cout << i << "	" << max(a[List[i]],b[List[i]]) <<endl;
		sum+=max(a[List[i]],b[List[i]]);
	}
	printf("%d\n",sum);
	return 0;
}
