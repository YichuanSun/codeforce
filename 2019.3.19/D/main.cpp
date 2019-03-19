#include <bits/stdc++.h>
#define N 150005
using namespace std;

typedef struct se{
    char c='\0';
    int i=0,vi=0;
}se;
se se1[N],se2[N],t1[N],t2[N];

bool cmp(se a,se b) {
    return a.c<b.c;
}

int main()  {
    int n,cnt1=0,cnt2=0,ct=0;
    cin>>n;
    for (int i=0;i<n;i++)   {cin>>se1[i].c;se1[i].i=i; if (se1[i].c!='?')    t1[cnt1++].c=se1[i].c;}
    for (int i=0;i<n;i++)   {cin>>se2[i].c;se2[i].i=i; if (se2[i].c!='?')    t2[cnt2++].c=se2[i].c;}
//    for (int i=0;i<n;i++)   cout<<st1[i];
//    cout<<endl;
//    for (int i=0;i<n;i++)   cout<<st2[i];
//    cout<<endl;
    sort(t1,t1+cnt1,cmp);
    sort(t2,t2+cnt2,cmp);
    int i1=0,i2=0;
    while (i1<cnt1&&i2<cnt2)    {
        if (t1[i1].c==t2[i2].c)   { //此处引用出了问题，没时间改了
            se1[t1[i1].i].vi=se2[t2[i2].i].i;
            se1[i2].vi=se2[i1].i;
            i1++,i2++;
            ct++;
        }
        else if (t1[i1].c<t2[i2].c)   i1++;
        else i2++;
    }
    int nb1=n-cnt1,nb2=n-cnt2;      //问号数
    if (nb1>nb2)    {
        int kk=0;
        for (int i=0;i<nb1;)    {
            if (se1[i].c=='?')  {
                while (kk<cnt2) {
                    if (se2[kk].vi==0) {
                        se1[i].vi=se2[kk].i;
                        se2[kk].vi=se1[i].i;
                        ct++;
                        break;
                    }
                }
            }
            i++;
        }
    }
    else {
        int kk=0;
        for (int i=0;i<nb2;)    {
            if (se2[i].c=='?')  {
                while (kk<cnt1) {
                    if (se1[kk].vi==0) {
                        se2[i].vi=se1[kk].i;
                        se1[kk].vi=se2[i].i;
                        ct++;
                        break;
                    }
                }
            }
            i++;
        }
    }
    cout<<ct<<endl;
    for (int i=0;i<cnt1;i++)  {
        if (se1[i].vi)  {
            cout<<se1[i].i<<' '<<se2[se1[i].vi].i<<endl;
        }
    }
    return 0;
}
