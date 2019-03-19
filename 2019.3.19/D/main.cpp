#include <bits/stdc++.h>
#define N 150005
using namespace std;

char st1[N],st2[N],t1[N],t2[N];
int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   {cin>>st1[i];t1[i]=st1[i];}
    for (int i=0;i<n;i++)   {cin>>st2[i];t2[i]=st2[i];}
    for (int i=0;i<n;i++)   cout<<st1[i];
    cout<<endl;
    for (int i=0;i<n;i++)   cout<<st2[i];
    cout<<endl;
    return 0;
}
