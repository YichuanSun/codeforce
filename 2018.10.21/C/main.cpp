#include <bits/stdc++.h>
using namespace std;
vector<int> va,vb;
int main()  {
    int a,b;
    cin>>a>>b;
    int n=sqrt(2.0*(a+b));
    while (n*(n+1)/2>(a+b))    n--;
    //cout<<"n=\t"<<n<<endl;
    for (int i=n;i>=1;i--)  {
        if (a>=i)   {a-=i;va.push_back(i);}
        else    vb.push_back(i);
    }
    cout<<va.size()<<endl;
    if (!va.empty())    cout<<va[0];
    for (int i=1;i<(int)va.size();i++)
        cout<<' '<<va[i];
    cout<<endl;
    cout<<vb.size()<<endl;
    if (!vb.empty())    cout<<vb[0];
    for (int i=1;i<(int)vb.size();i++)
        cout<<' '<<vb[i];
    cout<<endl;
    return 0;
}
