#include <bits/stdc++.h>

typedef double flo;

int main () {
	int N;
	std :: cin >> N;
	for (int i = 0; i < N; ++ i) {
		std :: string x;
		std :: cin >> x;
		if (x == "Sunday") {
			std :: cout << 1 << std :: endl;
		}
		else if (x == "Monday") {
			std :: cout << 2 << std :: endl;
		}
		else if (x == "Tuesday") {
			std :: cout << 3 << std :: endl;
		}
		else if (x == "Wednesday") {
			std :: cout << 4 << std :: endl;
		}
		else if (x == "Thursday") {
			std :: cout << 5 << std :: endl;
		}
		else if (x == "Friday") {
			std :: cout << 6 << std :: endl;
		}
		else if (x == "Saturday") {
			std :: cout << 7 << std :: endl;
		}
		else {
			std :: cout << "-1" << std :: endl;
		}
	}
	return 0;
}
