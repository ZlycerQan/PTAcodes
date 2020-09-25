#include <bits/stdc++.h>
typedef long long ll;
ll pow (ll x, ll p) {
	ll res = 1;
	for (; p; -- p, res *= x);
	return res;
}
int main () {
	ll x, p;
	std :: cin >> x >> p;
	std :: cout << pow (x, p);
	return 0;
}

