#include <bits/stdc++.h>
int f (int x) {
	return (x == 1 || x == 2) ? 1 : f (x - 1) + f (x - 2);
}
int main () {
	int x;
	std :: cin >> x;
	std :: cout << f (x);
	return 0;
}

