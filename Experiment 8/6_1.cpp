#include <algorithm>
template <class T>
void sort(T *a, int size) {
	for (int i = 0; i < size; ++ i) {
		std :: cin >> a[i];
	}
	sort (a, a + size);
}
