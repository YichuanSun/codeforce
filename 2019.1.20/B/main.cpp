#include <bits/stdc++.h>
using namespace std;
string a;
map<char,int> vc;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,mm=-1;
    cin>>n>>k;
    cin>>a;
    for (int i=0;i<n;i++)   {
        int le=1;
        while(le<k&&i+1<n&&a[i]==a[i+1])
            i++,le++;
        if (le==k)  vc[a[i]]++;
    }
    for (int i=0;i<26;i++)  {
//        if (vc[(char)('a'+i)]>0)
//            cout<<(char)('a'+i)<<' '<<vc[(char)('a'+i)]<<endl;
        mm=max(mm,vc[(char)('a'+i)]);
    }
    cout<<mm<<endl;
    return 0;
}
