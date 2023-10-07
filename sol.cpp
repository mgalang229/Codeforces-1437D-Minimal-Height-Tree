#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void test_case(int& tc) {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int ans = 0, s = 0, p = 1;
	for (int i = 1; i < n; i++) {
		int j = i + 1;
		while (j < n && a[j] > a[j-1]) {
			// cout << a[j] << " ";
			j++;
		}
		s += (j - i);
		p -= 1;
		if (p == 0) {
			p = s;
			s = 0;
			ans++;
		}
		i = j - 1;
	}
	ans += (s > 0);
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++)
		test_case(tc);
}
