#include <bits/stdc++.h>
using namespace std;
vector<int> vmi,vmx;
set<int> st;
int main()  {
    int a,b;
    cin>>a>>b;
    int mx=max(a,b),mi=min(a,b);
    int tp=sqrt(2.0*(a+b));
    if (tp<mi)  {
        mi-=tp;
        st.insert(tp);
        vmi.push_back(tp);
    }
    for (int i=1;i<=tp;i++) {
        if (st.count(i))    continue;
        if (i<=mi)  {
            st.insert(i);
            vmi.push_back(i);
            mi-=i;
        }
        else if (i<=mx) {
            st.insert(i);
            vmx.push_back(i);
            mx-=i;
        }
    }
    if (mx==a)  {
        cout<<vmx.size()<<endl;
        if (!vmx.empty())   cout<<vmx[0];
        for (int i=1;i<(int)vmx.size();i++)
            cout<<' '<<vmx[i];
        cout<<endl;
        cout<<vmi.size()<<endl;
        if (!vmi.empty())   cout<<vmi[0];
        for (int i=1;i<(int)vmi.size();i++)
            cout<<' '<<vmi[i];
        cout<<endl;
    }
    else {
        cout<<vmi.size()<<endl;
        if (!vmi.empty())   cout<<vmi[0];
        for (int i=1;i<(int)vmi.size();i++)
            cout<<' '<<vmi[i];
        cout<<endl;
        cout<<vmx.size()<<endl;
        if (!vmx.empty())   cout<<vmx[0];
        for (int i=1;i<(int)vmx.size();i++)
            cout<<' '<<vmx[i];
        cout<<endl;
    }
    return 0;
}
