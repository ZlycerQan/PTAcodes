#include <bits/stdc++.h>

int main () {
	int N, K;
	int x;	
	scanf ("%d%d", &N, &K);
	for (int i = 1; i <= N; ++ i) {
		scanf ("%d", &x);
		if (x > K) {
			std :: cout << x << " " << i;
			return 0;
		}
	}
	std :: cout << "-1";
	return 0;	
}
