#include <bits/stdc++.h>
using namespace std;
vector<int> v;
bool cmp(int a,int b)   {
    if (a>b)    return 1;
    else return 0;
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,t;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);
    //for (auto x:v)  cout<<" "<<x;
    cout<<v[n/2]<<endl;
    return 0;
}
