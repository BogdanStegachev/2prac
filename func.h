#include <iostream>
#include <string>

using namespace std;

class User {
public:
	void getFullName() {
		cout << name << " " << surname << endl;
	}
protected:
	string name, surname;
};

class Student :public User {
public:
	void setName(string name, string surname) {
		this->name = name;
		this->surname = surname;
	}
	void setYear(int y1) {
		yearOfComing = y1;
	}
	void getCourse() {
		cout << 2018 - yearOfComing;
	}
protected:
	int yearOfComing;
};