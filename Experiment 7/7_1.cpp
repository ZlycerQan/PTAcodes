#include <bits/stdc++.h>
#include <time.h>

class Date {

protected :
	
	int year, month, day;
	
};

class Time {

protected :

	int hour, minute, second;	
	
};

class Schedule : public Date, public Time {
	
public :
	
	void setDate(int a, int b, int c) {
		year = a, month = b, day = c;
	}
	
	void setTime(int a, int b, int c) {
		hour = a, minute = b, second = c;
	}
	
	int ID;
	
	bool operator < (const Schedule &rhs) const {
		tm now, _now;
		now.tm_year = year - 1900;
		now.tm_mon = month - 1;
		now.tm_mday = day;
		now.tm_hour = hour;
		now.tm_min = minute;
		now.tm_sec = second;
		
		_now.tm_year = rhs.year - 1900;
		_now.tm_mon = rhs.month - 1;
		_now.tm_mday = rhs.day;
		_now.tm_hour = rhs.hour;
		_now.tm_min = rhs.minute;
		_now.tm_sec = rhs.second;
		
		time_t t1 = mktime(&now);
		time_t t2 = mktime(&_now);
		return t1 - t2 < 0;
	}
	
	void show() {
		printf ("%d/%d/%d %d:%d:%d\n", year, month, day, hour, minute, second); 
	}
	
} a[1000001];


int main () {
	int x, i;
	for (x, i = 1; scanf ("%d", &x); ++ i) {
		if (x == 0) {
			break;
		}
		a[i].ID = x;
		int y, m, d;
		scanf ("%d/%d/%d", &y, &m, &d);
		a[i].setDate(y, m, d);
		scanf ("%d:%d:%d", &y, &m, &d);
		a[i].setTime(y, m, d);
		
	}
	-- i;
	std :: sort (a + 1, a + i + 1); 
	printf ("The urgent schedule is No.%d: ", a[1].ID);
	a[1].show();
	return 0;	
}
