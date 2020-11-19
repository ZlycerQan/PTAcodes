#include <bits/stdc++.h>

typedef double flo;
class Complex {
	
public:
	Complex (flo r = 0, flo i = 0) : real(r), imag(i) {   }
	Complex operator + (const Complex &rhs) const;
	Complex operator -= (const Complex &rhs); 
	friend Complex operator - (Complex lhs, Complex rhs) ;
	void Display() const;
		
private:
	flo real;
	flo imag;
};


Complex Complex::operator + (const Complex &rhs) const {
	return Complex(real + rhs.real, imag + rhs.imag);	
}

Complex Complex::operator -= (const Complex &rhs) {
	real -= rhs.real;
	imag -= rhs.imag;
	return *this;
}
Complex operator - (Complex lhs, Complex rhs) {
	return Complex(lhs.real - rhs.real, lhs.imag - rhs.imag);
}

void Complex::Display() const {
	std :: cout << "(" << real << ", " << imag << ")" << std :: endl;
}

int main() {
	flo r, m;
	std :: cin >> r >> m;
	Complex c1(r, m);
	std :: cin >> r >> m;
	Complex c2(r, m);
	Complex c3 = c1+c2;
	c3.Display();
	c3 = c1 - c2;
	c3.Display();
	c3 -= c1;
	c3.Display();
	return 0;
}
