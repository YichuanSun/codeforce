#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#define N 100005
using namespace std;
int size[N];
int cmp(const void *a,const void *b)	{
	return *(int*)b-*(int*)a;
}
int main()	{
	int n,a,b,sum=0;
	scanf("%d %d %d",&n,&a,&b);
	for (int i=0;i<n;i++)	{
		scanf("%d",&size[i]);
		sum+=size[i];
	}
	int first=size[0];
	size[0]=0;
	qsort(size,n,sizeof(int),cmp);
	for (int i=0;i<n;i++)	{
		if (i==0&&1.0*first/sum*a*100>=b*100){
			printf("0\n");break;
		}
		if (1.0*first/(sum-=size[i])*a*100>=b*100)	{
			printf("%d\n",i+1);
			break;
		}
		//sum-=size[i];
	}
	return 0;
}
