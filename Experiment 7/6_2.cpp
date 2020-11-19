typedef double flo;
class CAR {
	
protected :
	
	flo speed;
	
public :
	
	CAR(flo speed) : speed (speed) {
		std :: cout << "创建汽车(" << speed << "公里/小时)" << std :: endl;
	}

	virtual void Show() const {
		std :: cout << "汽车: " << speed << "公里/小时" << std :: endl;
	}	
};

class BUS : virtual public CAR {
	
protected :
	
	int seat;
	
public :
	
	BUS(flo speed, int seat) : CAR(speed), seat(seat) {
		std :: cout << "创建客车(" << seat << "人)" << std :: endl;
	}
	
	void Show() const {
		std :: cout << "客车: " << speed << "公里/小时, " << seat << "人" << std :: endl;
	}
	
};

class TRUCK : virtual public CAR {

protected :

	flo load;
	
public :
	
	TRUCK(flo speed, flo load) : CAR(speed), load(load) {
		std :: cout << "创建货车(" << load << "吨)" << std :: endl;
	}
	
	void Show() const {
		std :: cout << "货车: " << speed << "公里/小时, " << load << "吨" << std :: endl;
	}
		
};

class VAN : public BUS, public TRUCK {
	
public :
	
	VAN(flo speed, int seat, flo load) : CAR(speed), BUS(speed, seat), TRUCK(speed, load) {
		std :: cout << "创建客货两用车" << std :: endl;
	}
	
	void Show() const {
		std :: cout << "客货两用车: " << speed << "公里/小时, " << seat << "人, " << load << "吨" << std :: endl;
	}
};

