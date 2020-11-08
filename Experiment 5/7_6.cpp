#include <bits/stdc++.h>

struct da {
	da (std :: string name = "", int h = 0, int w = 0) : name (name), h (h), w (w) {
	}
	std :: string name;
	int h;
	int w;	
	bool operator < (const da &rhs) const {
		return h < rhs.h;
	}
};
std :: map <int, std :: priority_queue <da> > lis;

int main () {
	int N;
	std :: cin >> N;
	std :: string name;
	int id;
	for (int i = 0; i < N; ++ i) {
		int h, w;
		std :: cin >> id >> name >> h >> w;
		lis[id].push (da (name, h, w));
	}
	for (std :: map <int, std :: priority_queue <da> > :: iterator i = lis.begin (); i != lis.end (); ++ i) {
		printf ("%06d ", (*i).first);
		std :: cout << (*i).second.top().name << " ";
		printf ("%d %d\n", (*i).second.top().h, (*i).second.top().w);
	}
	return 0;
}