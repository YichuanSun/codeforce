#include <bits/stdc++.h>
#define N 105
using namespace std;
string rmv(string ts,char c,int tj);
int main()  {
    int n,tn;
    cin>>n;
    for (int i=0;i<n;i++)   {
        string s;
        bool sp[N];
        fill(sp,sp+N,false);
        cin>>tn;
        cin>>s;
        for (int j=0;j<(int)s.size();j++)   {
            if (s[j]=='>')  {
                //string ts(s,0,j+1);
                for (int k=j+1;k<tn;k++)    sp[k]=1;
                //s=ts;
                //cout<<ts<<endl;
            }
            else {
                //string ts(s,j);
                for (int k=0;k<j;k++)   sp[k]=1;
                //s=ts;
                //cout<<ts<<endl;
            }
        }
        string ts="";
        for (int j=0;j<tn;j++)
            if (sp[j]==0)
                ts+=s[j];
        cout<<s<<endl;
        cout<<ts.size()-1<<endl;
    }
    return 0;
}
