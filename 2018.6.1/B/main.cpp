#include <bits/stdc++.h>
using namespace std;
vector<string> vstr;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string st;
    int n,cnt=0,k=0,sum=0;
    cin >> n;
    cin >> st;
    while (cnt<=n)   {
        int i;
        string ts;
        for (i=cnt;st[i]=='x';i++)    ts+=st[i];
        if (i==cnt&&st[i]!='x') ts+=st[i];
        vstr.push_back(ts);
        k++,cnt=i+1;
    }
    for (int i=0;i<k;i++)   {
        if (vstr[i][0]!='x')    continue;
        int l=vstr[i].length();
        sum+=l>2?l-2:0;
    }
    cout<<sum<<endl;
    return 0;
}
