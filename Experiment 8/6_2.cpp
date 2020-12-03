#include <algorithm>

template <class T>
class MyArray {
	
public:
	
	MyArray(int size);
	
	~MyArray();
	void sort();

	bool check();
	void display();
	
private:
	
	int size;
	T* data;
	
};

template <class T>
void MyArray<T>::sort() {
	std :: sort(data, data + size);
}

template <class T>
void MyArray<T>::display() {
	for (int i = 0; i < size; ++ i) {
		std :: cout << data[i] << (" \n" [i == size - 1]);
	}
}

template <class T> 
MyArray<T>::MyArray(int size) : size(size) {
	data = new T [size];
	for (int i = 0; i < size; ++ i) {
		std :: cin >> data[i];
	}
}
