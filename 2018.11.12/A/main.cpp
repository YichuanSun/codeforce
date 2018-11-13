#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n,i=1;
    string s;
    cin>>n>>s;
    while (s[i]>=s[i-1]) i++;   //原先此处缺了个等于号
    for (int j=0;j<n;j++)   if (j!=i-1) cout<<s[j];
    cout<<endl;
    return 0;
}
