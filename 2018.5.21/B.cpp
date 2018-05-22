#include <bits/stdc++.h>
using namespace std;
#define MAX 2002
bool a[MAX][MAX];
int main()	{
	int n,m;
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			scanf("%d",&a[n][m]);
	for (int i=0;i<n;i++)	{
		for (int j=0;j<m;j++)	{
			if (!a[i][j])	continue;
			for (int j=)	//发现时间复杂度炸了 
		}
	}
	return 0;
}
