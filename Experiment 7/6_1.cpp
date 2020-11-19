class Pig {

public :
	
	Pig() {
		std :: cout << "Pig 申请了空间..." << std :: endl;
	}
	
	virtual ~Pig() {
		std :: cout << "Pig 释放了空间..." << std :: endl;
	}
	
	virtual void climb() {
		std :: cout << "我只是个平凡的猪猪。" << std :: endl; 
	}

};

class MagicPig : virtual public Pig {
	
public :
	
	MagicPig() {
		std :: cout << "MagicPig 申请了空间..." << std :: endl;
	}
	
	~MagicPig() {
		std :: cout << "MagicPig 释放了空间..." << std :: endl;
	}
	
	void climb() {
		std :: cout << "我能上树了耶！" << std :: endl; 
	}
	
};

