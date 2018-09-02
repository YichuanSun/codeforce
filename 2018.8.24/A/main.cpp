#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    string t,ori,dd;
    cin>>n>>k;
    cin>>t;
    ori=t;
    reverse(t.begin(),t.end());
    if (ori==t)
    {
        if (k<=0)
        {
            cout<<endl;
            return 0;
        }
        if (t.size()==1)
        {
            for (int i=0; i<k; i++)
                cout<<ori;
            cout<<endl;
            return 0;
        }
        else if (t.size()==2)
        {
            cout<<ori;
            for (int i=0; i<k-1; i++)
                cout<<ori[0];
            cout<<endl;
            return 0;
        }
        int i,te=t.size()-2;
        for (i=t.size()-2; i>=t.size()/2; i--)
        {
            string nt=t.substr(i);
            string nn=nt;
            reverse(nt.begin(),nt.end());
            if (nn==nt&&i!=te)
            {
                break;
            }
        }
        if (i!=t.size()/2)
        {
            i++;
            dd=t.substr(i);
            cout<<"t=\t"<<t<<endl;
            cout<<"dd=\t"<<dd<<endl;
            cout<<t;
            for (int i=0; i<k-1; i++)
                cout<<dd;
            cout<<endl;
        }
    }
    else
    {
        for (int i=0; i<k; i++)
            cout<<ori;
        cout<<endl;
    }
    return 0;
}
