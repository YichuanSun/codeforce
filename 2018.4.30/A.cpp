#include <iostream>
#include <algorithm>
#define N 105 
using namespace std;
char a[N];
int main()	{
	int n,num1=0,num0=0;
	scanf("%d",&n);getchar();
	cin >> a;
	if (n==1)	{
		printf("%c\n",a[0]);
		return 0;
	}
	for (int i=0;a[i]!='\0';i++)
		if (a[i]=='1')	num1++;
	num0=n-num1;
	printf("1");
	for (int i=0;i<num0;i++)	printf("0");
	printf("\n");
	return 0;
}
