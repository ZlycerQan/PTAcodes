#include <bits/stdc++.h>

using namespace std;
enum COLOR{ WHITE, RED, BROWN, BLACK, KHAKI };


class Mammal
{
	public:
		//constructors
		Mammal();
		Mammal(int age);
		~Mammal();
		
		//accessors
		int GetAge() const;
		void SetAge(int);
		int GetWeight() const;
		void SetWeight(int);
		
		//Other methods	
		void Speak() const;
		void Sleep() const;		
	protected:
		int itsAge;
		int itsWeight;
};
Mammal::Mammal() {
}
Mammal::Mammal(int age) {
	itsAge = age;
}
Mammal::~Mammal() {
	
}
int Mammal::GetAge() const {
	return itsAge;
}
void Mammal::SetAge(int x) {
	itsAge = x;
}
int Mammal::GetWeight() const {
	return itsWeight;
}
void Mammal::SetWeight(int x) {
	itsWeight = x;
}
void Mammal::Speak() const {
	cout << "Mammal is speaking..." << endl;
}
void Mammal::Sleep() const { // ??
	cout << "Mammal is sleeping..." << endl;
}

class Dog : public Mammal {
	
public :
	Dog();
	Dog(int age);
	Dog(int age, int weight);
	Dog(int age, COLOR color);
	Dog(int age, int weight, COLOR color);
	~Dog();

	COLOR GetColor() const;
	void SetColor(COLOR x);

	void WagTail() const;
	void BegForFood() const;
private :
	COLOR col;
};
Dog::Dog() {
}
Dog::Dog(int age) : Mammal(age) {
}
Dog::Dog(int age, int wei) : Mammal(age) {
	SetWeight(wei);
}
Dog::Dog(int age, COLOR color) : Mammal(age){
	col = color;
}
Dog::Dog(int age, int wei, COLOR color) : Mammal(age) {
	SetWeight(wei);
	col = color;
}
Dog::~Dog() {
}
COLOR Dog::GetColor() const {
	return col;
}
void Dog::SetColor(COLOR x) {
	col = x;
}
void Dog::WagTail() const {
	cout << "The dog is wagging its tail..." << endl;	
}
void Dog::BegForFood() const {
	cout << "The dog is begging for food..." << endl;
}
int main()
{
	Dog Fido;
	Dog Rover(5);
	Dog Buster(6, 8);
	Dog Yorkie(3, RED);
	Dog Dobbie(4, 20, KHAKI);
	Fido.Speak();
	Rover.WagTail();
	cout << "Yorkie is " << Yorkie.GetAge() << " years old." << endl;
	cout << "Dobbie weighs " << Dobbie.GetWeight() << " pounds." << endl;   
	return 0;
}
