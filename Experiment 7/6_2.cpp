typedef double flo;
class CAR {
	
protected :
	
	flo speed;
	
public :
	
	CAR(flo speed) : speed (speed) {
		std :: cout << "��������(" << speed << "����/Сʱ)" << std :: endl;
	}

	virtual void Show() const {
		std :: cout << "����: " << speed << "����/Сʱ" << std :: endl;
	}	
};

class BUS : virtual public CAR {
	
protected :
	
	int seat;
	
public :
	
	BUS(flo speed, int seat) : CAR(speed), seat(seat) {
		std :: cout << "�����ͳ�(" << seat << "��)" << std :: endl;
	}
	
	void Show() const {
		std :: cout << "�ͳ�: " << speed << "����/Сʱ, " << seat << "��" << std :: endl;
	}
	
};

class TRUCK : virtual public CAR {

protected :

	flo load;
	
public :
	
	TRUCK(flo speed, flo load) : CAR(speed), load(load) {
		std :: cout << "��������(" << load << "��)" << std :: endl;
	}
	
	void Show() const {
		std :: cout << "����: " << speed << "����/Сʱ, " << load << "��" << std :: endl;
	}
		
};

class VAN : public BUS, public TRUCK {
	
public :
	
	VAN(flo speed, int seat, flo load) : CAR(speed), BUS(speed, seat), TRUCK(speed, load) {
		std :: cout << "�����ͻ����ó�" << std :: endl;
	}
	
	void Show() const {
		std :: cout << "�ͻ����ó�: " << speed << "����/Сʱ, " << seat << "��, " << load << "��" << std :: endl;
	}
};

