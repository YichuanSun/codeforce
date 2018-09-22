#include <bits/stdc++.h>
using namespace std;
struct robot{
    int pos,rad,iq;
    robot(int p=0,int r=0,int i=0){
        pos=p,rad=r,iq=i;
    }
};
vector<robot> v;
robot rb;
bool cmp(robot a,robot b)   {
    if (a.iq==b.iq) return a.pos<b.pos;
    else return a.iq<b.iq;
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,ans=0,tp,tr,ti;
    cin>>n>>k;
    for (int i=0;i<n;i++)   {
        cin>>tp>>tr>>ti;
        v.push_back(robot(tp,tr,ti));
    }
    sort(v.begin(),v.end(),cmp);
    for (int i=0;i<(int)v.size();i++)   {
        int lo=v[i].pos-v[i].rad;
        int hi=v[i].pos+v[i].rad;
        for (int j=i+1;j<(int)v.size();j++) {
            if (v[j].iq>v[i].iq+k)  break;
            if (v[j].pos>=lo&&v[j].pos<=hi) ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
