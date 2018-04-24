#include <iostream>
#include <algorithm>
#define N 200010
using namespace std;
int a[N];
int main()	{
	int season,cnt=0;
	scanf("%d",&season);
	for (int i=1;i<=season;i++)	scanf("%d",&a[i]);
	int i,j;
	for (i=1;i<=season;i++)	{
		for (j=i+1;j<=a[i];j++)	{
			if (j<=season&&a[j]>=i)
				cnt++;
		}
	}
	printf("%d\n",cnt); 
	return 0;
}
