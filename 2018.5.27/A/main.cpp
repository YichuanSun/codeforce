#include <bits/stdc++.h>
using namespace std;
bool check(string s) {
	string w = s;
	reverse(w.begin(), w.end());
	return s == w;
}
int main() {
	string s,t;
  	cin >> s;
  	int n = (int) s.size();
  	int ans = 0;
  	for (int i = 0; i < n; i++) {
    	t += s[i];
    	if (!check(t))	ans = max(ans,(int)t.size());
  	}
	cout << ans << "\n";
	return 0;
}
