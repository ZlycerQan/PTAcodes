#include <bits/stdc++.h>

typedef double flo;

const flo PI = acos(-1.0);

class Shape {
	
public :
	
	virtual flo calc() const {
		return 0;
	}
	
};

class Circle : public Shape {
	
private :
	
	flo r;
	
public :
	
	Circle(flo r) : r(r) { 
	}
	
	virtual flo calc() const {
		return PI * r * r;
	}
};

class Rectangle : public Shape {

private :

	flo w, h;
	
public :
	
	Rectangle(flo w, flo h) : w(w), h(h) {
	}

	virtual flo calc() const {
		return w * h;
	}
};

class Triangle : public Shape {

private :

	flo d, h;
	
public :

	Triangle(flo d, flo h) : d(d), h(h) {	
	}
	
	virtual flo calc() const {
		return d * h * 0.5;
	}
	
};

void print(const Shape &x) {
	printf ("%.2lf\n", x.calc());
}

int main () {
	flo x, y;
	std :: cin >> x;
	Circle a(x);
	print(a);
	std :: cin >> x >> y;
	Rectangle b(x, y);
	print(b);
	std :: cin >> x >> y;
	Triangle c(x, y);
	print(c);
	return 0;	
}
