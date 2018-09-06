#include <bits/stdc++.h>
using namespace std;

int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,h,a,b,k,x1,y1,x2,y2;
    cin>>n>>h>>a>>b>>k;
    for (int i=0;i<k;i++)   {
        cin>>x1>>y1>>x2>>y2;
        int timeacrossfloor=0,cnt=0;
        int timeacrossbuilding=abs(x1-x2);
        if (y1>=a&&y1<=b)   cnt++;
        if (y2>=a&&y2<=b)   cnt++;
        if (cnt==1||cnt==2) timeacrossfloor=abs(y2-y1);
        else if (cnt==0)    {
            if (x1!=x2) {
                if (y1<a&&y2>b) timeacrossfloor=abs(y2-y1);
                else if (y1>b&&y2<a)    timeacrossfloor=abs(y2-y1);
                else    {
                    int mid=(y1+y2)/2;
                    if (mid>b)  timeacrossfloor=y1+y2-2*b;
                    else if (mid<a) timeacrossfloor=2*a-y1-y2;
                }
            }
            else    timeacrossfloor=abs(y1-y2);
        }
        int ans=timeacrossbuilding+timeacrossfloor;
        cout<<ans<<endl;
    }
    return 0;
}
