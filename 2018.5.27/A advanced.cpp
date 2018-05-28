#include <bits/stdc++.h>
using namespace std;
bool check(string s) {
  string w = s;
  reverse(w.begin(), w.end());
  return s == w;
}
int main() {
  string s;
  cin >> s;
  int n = (int) s.size();
  int ans = 0;
  for (int i = 0; i < n; i++) {
    string t;
    for (int j = i; j < n; j++) {
      t += s[j];
      if (!check(t)) {
        ans = max(ans, j - i + 1);
      }
    }
  }
  cout << ans << "\n";
  return 0;
