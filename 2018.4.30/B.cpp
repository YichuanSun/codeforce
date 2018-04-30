#include <iostream>
#include <algorithm>
using namespace std;
typedef struct point{
	int r,c;
}point;
int main()	{
	int n,m,cnt,jud,flag=0;
	long long k;
	point now;
	now.r=1,now.c=1;
	cin >> n >> m >> k;
	for (int i=1;i<=k;i++)	{
		if (i<n)	{
			now.r=now.r+1;
			now.c=now.c;
		}
		else if (i==n)	now.c=now.c+1;
		else {
			cnt=i-n;
			jud=cnt%(m-1);
			if (jud!=0&&flag==0)	{
				now.c=now.c+1;
			}
			else if (jud!=0&&flag==1)	{
				now.c=now.c-1;
			}
			else if (jud==0)	{
				now.r=now.r-1;
				flag=!flag;
			}
		}
	}
	printf("%d %d\n",now.r,now.c);
	return 0;
}
