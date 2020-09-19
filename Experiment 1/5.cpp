#include <bits/stdc++.h>
inline int abs (int x) {
	return x < 0 ? -x : x;
}
int a[1000001];
int main () {
	int N, K;
	scanf ("%d%d", &N, &K);
	for (int i = 1; i <= N; ++ i) {
		scanf ("%d", &a[i]);
	}
	for (int i = 2; i <= N; ++ i) {
		if (abs (a[i] - a[i - 1]) > K) {
			printf ("NO");
			return 0;
		}
	}
	printf ("YES");
	return 0;	
}
