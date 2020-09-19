#include <bits/stdc++.h>
int main () {
	int N, K;
	int res = 0;
	std :: cin >> N >> K;
	res += N;
	for (; N >= K; ) {
		res += N / K;
		N = N / K + N % K;
	}
	std :: cout << res;
	return 0;	
}
