#include <bits/stdc++.h>
using namespace std;
int inser(char a);
vector<int> v,spot;
int main()  {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,w;
    for (int i=0;i<n;i++)   {
        cin >> w;
        v.push_back(w);
    }
    string s;
    cin>>s;
    for (int i=0;i<n;i++)   {
        if (s[i]=='0')   cout<<inserti()<<endl;
        else if (s[i]=='1') cout<<inserte()<<endl;
    }
    return 0;
}

int inserti()   {
    for (int i=0;i<v.size();i++)    {
        if  (spot[i]==0)    {
            sopt[i]=1;
        }
    }
}

