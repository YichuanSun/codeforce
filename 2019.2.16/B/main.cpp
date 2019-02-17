#include <bits/stdc++.h>
using namespace std;

set<int> sti;
vector<int> vi,save[101];
void pre()  {
    for (int i=1;i<=100;i++)    {
        for (int j=1;j<=i/2;j++)
            if (i%j==0) save[i].push_back(j);
    }
}
int main()  {
    pre();
//    for (int i=1;i<=100;i++)    {
//        cout<<i<<"\t";
//        for (int j=0;j<(int)save[i].size();j++)
//            cout<<save[i][j]<<' ';
//        cout<<endl;
//    }
    int n,sum=0,t;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>t;
        sum+=t;
        sti.insert(t);
    }
    for (set<int>::iterator it0=sti.begin();it0!=sti.end();it0++)
        vi.push_back(*it0);
    int m=(int)vi.size(),mmin=vi[0],ans=0;
    for (int i=m-1;i>=0;i--)  {
        for (int j=(int)save[vi[i]].size()-1;j>=0;j--)  {
            int temp=vi[i]+mmin-vi[i]/save[vi[i]][j]-mmin*save[vi[i]][j];
            ans=max(ans,temp);
        }
    }
    cout<<sum-ans<<endl;
    return 0;
}
