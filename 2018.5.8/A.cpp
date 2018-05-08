#include <bits/stdc++.h>
using namespace std;

int main()	{
	string a;
	cin >> a;
	int link=0,pearl=0;
	for (int i=0;a[i]!='\0';i++)	{
		if (a[i]=='-')	link++;
		else if (a[i]=='o')	pearl++;	
	}
	if (pearl==0)	{
		printf("YES\n");
		return 0;
	}
	if (link%pearl==0)	printf("YES\n");
	else printf("NO\n");
	return 0;
}
