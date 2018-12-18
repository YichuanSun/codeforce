#include <bits/stdc++.h>
using namespace std;

int main()  {
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   {
        int ts,nu,temp=0;
        cin>>ts>>nu;
        while (ts)    {
            for (int j=0;j<nu&&ts;j++)  {
                printf("%c",'a'+j);
                ts--;
            }
        }
        cout<<endl;
    }
    return 0;
}
