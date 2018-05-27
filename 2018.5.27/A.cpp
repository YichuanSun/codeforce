#include <bits/stdc++.h>
using namespace std;
bool isanti(char a[],int i);
const int SIZE=100;
char a[SIZE],i=0;
int main()	{
	scanf("%s",a);
	for (i=1;i<strlen(a);i++)	{
		if (isanti(a,i))	break;
	}
	printf("%d\n",i==1?0:i);
	return 0;
}

bool isanti(char a[],int i)	{	//若是自反串，返回true 
	for (int cnt=0;cnt<=i/2;cnt++)	{
		if (a[cnt]!=a[i-cnt])	return false;
	}
	return true;
}
