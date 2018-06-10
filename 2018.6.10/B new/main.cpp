#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,k,in,cnt=1;
    cin>>n>>k;
    for (int i=0;i<n;i++)   {
        cin>>in;
        v.push_back(in);
    }
    sort(v.begin(),v.end());
    for (int i=0;i<=n;i++)    {
        for (int j=i;;j--)    {
            //for (auto x:v)  cout<<' '<<x;
            //    cout<<endl;
            if (v[i]>v[j]&&v[i]<=v[j]+k)    {
                v.erase(v.begin()+j);
                i--;
            }
            else if (v[i]>v[j]+k)   break;
            else if (j==0)   break;
        }
        //cout<<"Round:"<<cnt++<<endl;
    }
    cout<<v.size()<<endl;
    return 0;
}
