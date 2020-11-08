#include <bits/stdc++.h>

typedef double flo;

int main () {

	int N, M;
	std :: cin >> N >> M;
	for (int i = 0; i < N; ++ i) {
		int sm = 0;
		for (int j = 0; j < M; ++ j) {
			int x;
			std :: cin >> x;
			sm += x;
		}
		std :: cout << sm << std :: endl;
	}
	return 0;
}

