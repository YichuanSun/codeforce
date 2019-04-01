#include <bits/stdc++.h>
#define N 32
using namespace std;
int a[N],ct[N],n;
int rec(int be,int en,int tm);
int main()  {
    cin>>n;
    fill(ct,ct+N,1);
    for (int i=0;i<n;i++)   cin>>a[i];
    for (int i=1;i<n;i++)  {
        if (a[i]>=a[i-1])   ct[i]=ct[i-1]+1;
    }
//    for (int i=0;i<n;i++)
//        cout<<' '<<ct[i];
//    cout<<endl;
    int ans=rec(0,n,1);
    cout<<ans<<endl;
    return 0;
}

int rec(int be,int en,int tm)  {
    if (tm>=5)   return 1;
    int the=ct[en-1]-ct[be]+1;
    int rea=en-be;
//    cout<<the<<' '<<rea<<endl;
    if (the==rea) return rea;
    tm++;
    return max(rec(be,(be+en)/2,tm),rec((be+en)/2,en,tm));
}

