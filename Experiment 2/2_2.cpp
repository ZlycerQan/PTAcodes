#include <bits/stdc++.h>
typedef double flo;
flo C2F (flo C) {
	return C * 1.8 + 32;
}
flo F2C (flo F) {
	return (F - 32) / 1.8;
}
int main () {
	flo F, C;
	std :: cin >> C >> F;
	std :: cout << C2F (C) << std :: endl << F2C (F);
	return 0;
}

