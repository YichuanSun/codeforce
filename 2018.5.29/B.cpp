#include <bits/stdc++.h>
using namespace std; 
double llg(double x);
int main()	{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	int x,y;
	cin >> x >> y;
	double xx=1.0*x,yy=1.0*y;
	if (x==y)	cout <<'='<<endl;
	else if (llg(xx)>llg(yy))	cout <<'<'<<endl;
	else if	 (llg(xx)<llg(yy))	cout <<'>'<<endl;
	return 0;
}

double llg(double x)	{
	return log10(log10(x))/log10(x);
}
