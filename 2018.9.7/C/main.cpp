#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin>>n;
    long long a,b;
    for (int i=0;i<n;i++)   {
        cin>>a>>b;
        int tans=0;
        for (int i=a;i<=b;i++)  {
            int t=i,cnt=0,flag=1;
            while (t!=0)    {
                if (t%10)   cnt++;
                t/=10;
                if (cnt>3)   {
                    flag=0;
                    break;
                }
            }
            if (flag)  tans++;
        }
        cout<<tans<<endl;
    }
    return 0;
}
