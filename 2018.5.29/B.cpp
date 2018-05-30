#include <bits/stdc++.h>
using namespace std; 
int main()	{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	int x,y;
	cin >> x >> y;
	if (x==y)	{
		cout << '=' <<endl;
		return 0;
	}
	double xx=1.0*x,yy=1.0*y;
	if (fabs(xx-yy)<=1e-9)	cout <<'='<<endl;
	else if (xx*log10(yy)-yy*log10(xx)>0)	cout <<'<'<<endl;
	else	cout <<'>'<<endl;
	return 0;
}
