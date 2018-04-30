#include <iostream>
#include <algorithm>
using namespace std;
#define N 200050
char str[N];
int main()	{
	int n,a,b,num=0,round=1;
	scanf("%d %d %d",&n,&a,&b);
	getchar();
	scanf("%s",str);
	//getline(cin,str);
	for (int i=0;i<n;i++)	{
		if (str[i]=='.'){
			int cnt=0,j=i;
			while (str[j++]=='.')	cnt++;
			//printf("ROUND:%d cnt=%d\n",round++,cnt++);
			for (int k=0;k<cnt/2;k++)	{
				if (a<=0||b<=0)	break;
				a--;b--;num+=2;
			}
			if (cnt%2==1)	{
				if (a>b&&(a+b)!=0) {a--;num++;}
			else if (a<=b&&(a+b)!=0)	{b--;num++;}
			}
			i=j-2;
		}
	}
	printf("%d\n",num);
	return 0;
}
