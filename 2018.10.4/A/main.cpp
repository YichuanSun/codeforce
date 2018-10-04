#include <bits/stdc++.h>
#define N 205
using namespace std;
char a[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,cnt8=0;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>a[i];
        if (a[i]=='8')    cnt8++;
    }
    int tmpans=n/11;
    if (tmpans==0||cnt8==0) cout<<0<<endl;
    else if (cnt8>=tmpans)  cout<<tmpans<<endl;
    else if (cnt8<tmpans)   cout<<cnt8<<endl;
    return 0;
}
