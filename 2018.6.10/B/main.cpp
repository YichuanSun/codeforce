#include <bits/stdc++.h>
using namespace std;
typedef set<int>::iterator tour;
int main()  {
    set<int> bra;
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,k,in;
    cin>>n>>k;
    for (int i=0;i<n;i++)   {
        cin>>in;
        bra.insert(in);
    }
    tour itbe=bra.begin();
    tour iten=bra.end();
    for (tour i=itbe;i!=iten;i++)    {
        for (tour j=i;;j--)    {
            //for (auto ss :bra)  cout<<ss<<' ';
            //    cout<<endl;
            if (*i>*j&&*i<=*j+k)    {
                bra.erase(*j);
            }
            else if (*i>*j+k)   break;
            else if (j==itbe)   break;
        }
        //cout<<"a circle have been down"<<endl;
    }
    cout<<bra.size();
    return 0;
}
