#include <bits/stdc++.h>
using namespace std;
bool search(string a,int i);
int cmp(string a,string b)	{
	if (a.length()>b.length())	return true;
	else return false;
}
int n;
string a[105];
int main()	{
	cin >> n;
	for (int i=0;i<n;i++)	
		cin >> a[i];
	//for (int i=0;i<n;i++)
	//	cout << a[i] <<endl;
	qsort(a,n,sizeof(string),cmp);
	for (int i=0;i<n;i++)	{
		if (!s[i])	{
			search(a,a[i]);
			s[i]=1;
		}
	}
	return 0;
}
void search(string a,int i)	{
	const char *show;
	for (int c=0;c<n;c++)	{
		if (c==i)	continue;
		if (show=strstr(a[c],a[i]))	{
			search(a,show);
			break;
		}
		else	s.push(a[i]);
	}
}
