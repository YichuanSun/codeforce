#include <bits/stdc++.h>
#define N 100005
using namespace std;
int a[N],b[N];
vector<int> vi;
int main()  {
    int n,cnt=0,ta=-1;
    cin>>n;
    for (int i=0;i<=n;i++)   {
        if (i==n)   {
            vi.push_back(cnt);
            break;
        }
        cin>>a[i];
        if (a[i]==2)    {
            if (i!=0)   {
                if (a[i-1]==a[i])   cnt++;
                else    {vi.push_back(cnt);cnt=0;cnt++;}
            }
            else if (i==0)  cnt++;
        }
        else {
            if (i!=0)   {
                if (a[i-1]==a[i])   cnt--;
                else    {vi.push_back(cnt);cnt=0;cnt--;}
            }
            else if (i==0)  cnt--;
        }
    }
    for (int i=0;i<(int)vi.size();i++)
        if (vi[i]<0) vi[i]=-vi[i];
    for (int i=1;i<(int)vi.size();i++)  {
        int td=min(vi[i],vi[i-1]);
        ta=max(ta,td);
    }
    cout<<2*ta<<endl;
//    for (int i=0;i<(int)vi.size();i++)  {
//        cout<<vi[i]<<' ';
//    }
//    cout<<endl;
    return 0;
}
