#include <bits/stdc++.h>
int f (int x) {
	return x * x * x;
}
int main () {
	int N;
	scanf ("%d", &N);
	for (int i = 0; i <= 9; ++ i) {
		for (int j = 0; j <= 9; ++ j) {
			for (int k = 0; k <= 9; ++ k) {
				if (f (i) + f (j) + f (k) == N) {
					std :: cout << "YES";
					return 0;
				}
			}
		}
	}
	std :: cout << "NO";
	return 0;	
}
