#include <bits/stdc++.h>

typedef double flo;

int main () {
	int N;
	std :: cin >> N;
	flo mx = -1e9, mn = 1e9, sm = 0;
	for (int i = 0; i < N; ++ i) {
		flo x;
		std :: cin >> x;
		sm += x;
		mx = std :: max (mx, x);
		mn = std :: min (mn, x);
	}
	printf ("average = %.2lf\nmax = %.2lf\nmin = %.2lf\n", sm / (flo) N, mx, mn);

	return 0;
}
