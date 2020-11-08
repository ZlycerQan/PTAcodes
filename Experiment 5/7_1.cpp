#include <bits/stdc++.h>

int main () {
	int a[3];
	for (int i = 0; i < 3; ++ i) {
		scanf ("%d", &a[i]);
	}
	std :: sort (a, a + 3);
	for (int i = 0; i < 3; ++ i) {
		if (i == 2) {
			std :: cout << a[i] << std :: endl;
		}
		else {
			
			std :: cout << a[i] << "   ";
		}
	}

	return 0;
}
