#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int n;
	cin >> n;
	int sum = 1, nt = 0, t1 = 0, t2 = 1;
	for(int i = 1; i <= n; ++i) {
		sum += nt;
		nt = t1 + t2;
		t1 = t2;
		t2 = nt;	
	}
	cout << sum << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
