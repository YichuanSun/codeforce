#include <bits/stdc++.h>
#define N 100005
using namespace std;
char a[N];
int main()  {
    int n;
    scanf("%d",&n);
    getchar();
    scanf("%s",a);
    getchar();
    sort(a,a+n);
    printf("%s\n",a);
    return 0;
}
