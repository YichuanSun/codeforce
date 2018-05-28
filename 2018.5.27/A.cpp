#include <bits/stdc++.h>
using namespace std;
bool isanti(char a[],int i);
const int SIZE=100;
char a[SIZE];
int i=0,flag[SIZE];
int main()	{
	scanf("%s",a);
	if (strlen(a)==1)	{
		printf("0\n");
		return 0;
	}
	for (i=1;i<strlen(a);i++)	{
		if (isanti(a,i))	flag[i]=1;
		else flag[i]=0;
	}
	if (flag[strlen(a)-1]==0)
		printf("%d\n",strlen(a));
	else
		for (int i=strlen(a)-1;i>=0;i--)
			if (flag[i]==0){
				printf("%d\n",i==0?0:i+1);
				break;
			}
	return 0;
}

bool isanti(char a[],int i)	{	//若是自反串，返回true 
	for (int cnt=0;cnt<=i/2;cnt++)
		if (a[cnt]!=a[i-cnt])	return false;
	return true;
}
