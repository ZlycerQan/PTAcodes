class Graduate : public Student, public Teacher {

private :
		
	float wages;
		
public :
	Graduate(string nam, int age, char sex, string title, float score, float wages) : wages(wages), Student(nam, sex, score), Teacher(nam, age, title) {
	}

	void show() {
		cout << "name:" << name1 << endl;
		cout << "age:" << age << endl;
		cout << "sex:" << sex << endl;
		cout << "score:" << score << endl;
		cout << "title:" << title << endl;
		cout << "wages:" << wages << endl;
	}
};