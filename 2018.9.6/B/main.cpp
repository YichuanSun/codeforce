#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin>>n;
    if (n==1||n==2)   cout<<"No"<<endl;
    else if (n==3)  {
        cout<<"Yes"<<endl;
        cout<<"1 2"<<endl;
        cout<<"2 1 3"<<endl;
    }
    else {
        cout<<"Yes"<<endl;
        cout<<1<<' '<<n<<endl;
        cout<<n-1<<' '<<1;
        for (int i=2;i<=n-1;i++)
            cout<<' '<<i;
        cout<<endl;
    }
    return 0;
}
