#include <bits/stdc++.h>
#define N 105
using namespace std;
int a[N];
stack<int> sti;
queue<int> ansq;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for (int i=0;i<n;i++)   {
        if ((i&1)==0)    ansq.push(a[i]);
        else    sti.push(a[i]);
    }
    while (!sti.empty())    {
        ansq.push(sti.top());
        sti.pop();
    }
    cout<<ansq.front();
    ansq.pop();
    while (!ansq.empty())   {
        cout<<' '<<ansq.front();
        ansq.pop();
    }
    cout<<endl;
    return 0;
}
