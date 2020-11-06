#include <bits/stdc++.h>

class A {
	
public :
	
	A(int i) : i(i) {
		std :: cout << "Call A:i=" << i << std :: endl;
	}

	void display() {
		std :: cout << "i=" << i << std :: endl;
	}
	
protected :
	
	int i;	
};

class A1 : virtual public A {
	
public :
	
	A1(int j, int i) : j(j), A(i) {
		std :: cout << "Call A1:i=" << i << std :: endl;
	}
	
protected :
	
	int j;	
};

class A2 : virtual public A {
	
public :
	
	A2(int k, int i) : k(k), A(i) {
		std :: cout << "Call A2:i=" << i << std :: endl;
	}
	
protected :
	
	int k;
};

class A3 : public A1, public A2 {
	
public :
	
	A3(int i, int j, int k) : A(i), A1(j, i), A2(k, i) {
		std :: cout << "Call A3:i=" << i << std :: endl;
	}
	
	void disp() {
		display();
		std :: cout << "j=" << j << std :: endl;
		std :: cout << "k=" << k << std :: endl;

	}
};

int main () {
	int i, j, k;
	std :: cin >> i >> j >> k;
	A3 p(i, j, k);
	p.disp();
	return 0;	
}