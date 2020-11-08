#include <bits/stdc++.h>

int main () {
	int p = 0;
	for (int i = 0; i < 10; ++ i) {
		int x;
		std :: cin >> x;
		if (p == 0) {
			std :: cout << x << " ";
		}
		else {
			std :: cout << x << std :: endl;
		}
		p ^= 1;
	}
	return 0;
}
