#include <bits/stdc++.h>
using namespace std;

const int Maxn = 200005;

int n, k;
int a[Maxn];

int main()
{
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, a + n);
	stack <int> S;
	for (int i = 0; i < n; i++) {
		while (!S.empty()&&S.top()<a[i]&&a[i]<=S.top()+k)
			S.pop();
		S.push(a[i]);
	}
	printf("%d\n", int(S.size()));
	return 0;
}
