#include <bits/stdc++.h>

typedef double flo;
const flo PI = 3.14;
int main () {
	int t;
	scanf ("%d", &t);
	flo x, y;
	if (t == 1) {
		int p;
		std :: cin >> p;
		std :: cout << p * p;
	}
	if (t == 2) {
		int p, q;
		std :: cin >> p >> q;
		std :: cout << p * q;
	}
	if (t == 3) {
		std :: cin >> x;
		printf ("%.6lf", PI * x * x);
	}
	return 0;	
}
