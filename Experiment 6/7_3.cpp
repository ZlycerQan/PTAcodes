#include <bits/stdc++.h>
using namespace std;
const double PI = 3.14;
class Dot {
	
public :
	
	Dot(float x, float y);
	
	~Dot();
	
private :
	
	float x, y;
};

Dot::Dot(float x, float y) : x(x), y(y) {
	cout << "Dot constructor called" << endl;
}
Dot::~Dot() {
	cout << "Dot destructor called" << endl;
}

class Cir : public Dot{
public :
 
	Cir(float x, float y, float r);
	
	~Cir();
	
	float getArea() const;
	
private :
	
	float x, y, r;	
};

Cir::Cir(float x, float y, float r) : Dot(x, y), r(r) {
	cout << "Cir constructor called" << endl;
}

Cir::~Cir() {
	cout << "Cir destructor called" << endl;
}

float Cir::getArea() const {
	return PI * r * r;
}

int main () {
	float x, y, r;
    	cin >> x >> y >> r;
    	Cir c(x,y,r);
    	cout << fixed<<setprecision(2) << c.getArea() << endl;
	return 0;	
}