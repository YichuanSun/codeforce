#include <bits/stdc++.h>
using namespace std;
string s;
bool jud(string s)  {
    int ll=0,ul=0,nu=0;
    for (int i=0;i<(int)s.size();i++)   {
        if (s[i]>='a'&&s[i]<='z')   ll=1;
        else if (s[i]>='A'&&s[i]<='Z')  ul=1;
        else if (s[i]>='0'&&s[i]<='9')  nu=1;
    }
    if (ll&&ul&&nu) return true;
    else return false;
}
char ex(int n)  {
    if (n==0)   return 'A';
    else if (n==1)  return 'a';
    else return '1';
}
void solve(string s)   {
    int spot[4]={0,0,0,0},sum=0;
    for (int i=0;i<(int)s.size();i++)   {
        if (s[i]>='A'&&s[i]<='Z')  spot[0]++;
        else if (s[i]>='a'&&s[i]<='z')   spot[1]++;
        else if (s[i]>='0'&&s[i]<='9')  spot[2]++;
    }
    for (int i=0;i<3;i++)   sum+=spot[i]?1:0;
//    for (int i=0;i<3;i++)   cout<<spot[i]<<' ';
//    cout<<endl;
    if (sum==2) {
        int mxi=0,mii=0;
        if (spot[0]>spot[1])    {
            if (spot[0]>spot[2])    mxi=0;
            else mxi=2;     //第一次写时这句话没有,就WA了
        }
        else {
            if (spot[1]>spot[2])    mxi=1;
            else    mxi=2;
        }
        for (int i=0;i<3;i++)   if (spot[i]==0) mii=i;
        //cout<<mxi<<' '<<mii<<endl;
        if (mxi==0)  {
            for (int i=0;i<(int)s.size();i++)   {
                if (s[i]>='A'&&s[i]<='Z')   {
                    s[i]=ex(mii);
                    break;
                }
            }
        }
        else if (mxi==1)    {
            for (int i=0;i<(int)s.size();i++)   {
                if (s[i]>='a'&&s[i]<='z')   {
                    s[i]=ex(mii);
                    break;
                }
            }
        }
        else {
            for (int i=0;i<(int)s.size();i++)   {
                if (s[i]>='0'&&s[i]<='9')   {
                    s[i]=ex(mii);
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
    else if (sum==1)    {
        if (!spot[0]&&!spot[1]) {
            s[0]='A',s[1]='a';
            cout<<s<<endl;
        }
        else if (!spot[0]&&!spot[2])    {
            s[0]='A',s[1]='1';
            cout<<s<<endl;
        }
        else {
            s[0]='a',s[1]='1';
            cout<<s<<endl;
        }
    }
}
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i=0;i<n;i++)   {
        cin>>s;
        if (jud(s)) cout<<s<<endl;
        else solve(s);
    }
    return 0;
}
