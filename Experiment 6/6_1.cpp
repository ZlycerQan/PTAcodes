class Bed : virtual public Furniture {

public :

	void sleep() {
		std :: cout << "Sleeping" << std :: endl;
	}

};

class Sofa : virtual public Furniture {

public :
	
	void watchTV() {
		std :: cout << "Watching TV" << std :: endl;
	}
};

