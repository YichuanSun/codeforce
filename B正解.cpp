#include <iostream>
#include <algorithm> 
using namespace std;
typedef long long ll;
int in1[100050];
int in2[100050];
ll sum1[100050];
ll sum2[100050];
int main() {
	int N, K, i, j;
	scanf("%d %d", &N, &K);
	for (i = 1; i <= N; i++) scanf("%d", &in1[i]);
	for (i = 1; i <= N; i++) scanf("%d", &in2[i]);
	for (i = 1; i <= N; i++) {
		sum1[i] = sum1[i - 1] + in1[i] * in2[i];		//表示前i个元素按照0,1判断相加之和 
		sum2[i] = sum2[i - 1] + in1[i];					//表示前i个元素相加之和 
	}
	ll mx = 0;
	for (i = 1; i <= N - K + 1; i++) {
		ll v = sum1[i - 1] + (sum2[i + K - 1] - sum2[i - 1]) + (sum1[N] - sum1[i + K - 1]);
		mx = max(mx, v);
	}
	cout << mx <<endl;
	return 0;
}
