class Pig {

public :
	
	Pig() {
		std :: cout << "Pig �����˿ռ�..." << std :: endl;
	}
	
	virtual ~Pig() {
		std :: cout << "Pig �ͷ��˿ռ�..." << std :: endl;
	}
	
	virtual void climb() {
		std :: cout << "��ֻ�Ǹ�ƽ��������" << std :: endl; 
	}

};

class MagicPig : virtual public Pig {
	
public :
	
	MagicPig() {
		std :: cout << "MagicPig �����˿ռ�..." << std :: endl;
	}
	
	~MagicPig() {
		std :: cout << "MagicPig �ͷ��˿ռ�..." << std :: endl;
	}
	
	void climb() {
		std :: cout << "����������Ү��" << std :: endl; 
	}
	
};

