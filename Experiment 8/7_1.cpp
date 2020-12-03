#include <bits/stdc++.h>

template <class T> 
void solve(T a, T b) {
	std :: cout << std :: max(a, b) << " " << std :: min(a, b) << " " << a + b << " " << a - b << " " << a * b << " " << a / b << std :: endl;
}

typedef double flo;

int main() {
	int a, b;
	flo c, d;
	
	std :: cin >> a >> b;
	solve(a, b);
	std :: cin >> c >> d;
	solve(c, d);
	
	return 0;	
}
