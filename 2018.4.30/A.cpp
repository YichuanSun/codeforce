#include <iostream>
#include <algorithm>
#define N 1005
using namespace std;
int main()	{
	int tlist[N][2],tm[N],n,tbreak;
	scanf("%d %d",&n,&tbreak);
	for (int i=0;i<n;i++)	{
		scanf("%d %d",&tlist[i][0],&tlist[i][1]);
		tm[i]=tlist[i][0]*60+tlist[i][1];
	}
//	for (int i=0;i<n;i++)	printf("ok:%d\n",tm[i]);
	int i;
	for (i=0;i<n;i++)	{		//这里有问题，如果i只有一项就完蛋了 
		//printf("%d\n",tm[i]-tm[i-1]);
		if (i==0&&tbreak+1<=tm[0])	{
			printf("0 0\n");
			break;	
		}
		else if (n>1&&i+1<n&&tm[i+1]-tm[i]>2*tbreak+1)	{
			printf("%d %d\n",tlist[i][0]+(tbreak+1+tlist[i][1])/60,(tbreak+1+tlist[i][1])%60);
			break;
		}
		else if (i==n-1)	{
			printf("%d %d\n",tlist[i][0]+(tbreak+1+tlist[i][1])/60,(tbreak+1+tlist[i][1])%60);
			break;
		}	
	}
	return 0; 
}
