#include <bits/stdc++.h>
using namespace std;
void print();
bool spot[7];
int main()	{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	int n,a,b,c,d,e,f;
	a=b=c=d=e=f=0;
	string s;
	cin >> n;
	if (!n)	{
		cout << 6-(a+b+c+d+e+f) <<endl;
		print();
		return 0;
	}
	for (int i=0;i<n;i++)	{
		cin >> s;
		switch(s[0])	{
			case 'b':	c=1,spot[1]=true;break;
			case 'g':	b=1,spot[2]=true;break;
			case 'o':	d=1,spot[3]=true;break;
			case 'p':	a=1,spot[4]=true;break;
			case 'r':	e=1,spot[5]=true;break;
			case 'y':	f=1,spot[6]=true;break;
		}
	} 
	cout << 6-(a+b+c+d+e+f) <<endl;
	print();
	return 0;
}
void print(){
	for (int i=1;i<=6;i++)	{
		switch(i)	{
			case 1:	{
				if (!spot[1])	cout <<"Space\n";
				break;
			}
			case 2:	{
				if (!spot[2])	cout <<"Time\n";
				break;
			}
			case 3:	{
				if (!spot[3])	cout <<"Soul\n";
				break;
			}
			case 4:	{
				if (!spot[4])	cout <<"Power\n";
				break;
			}
			case 5:	{
				if (!spot[5])	cout <<"Reality\n";
				break;
			}
			case 6:	{
				if (!spot[6])	cout <<"Mind\n";
				break;
			}
		}
	}
}


