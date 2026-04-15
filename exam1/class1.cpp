#include <iostream>
using namespace std:

class Person {
private: 
	int age;

	void secretMethod(){
		cout << "This is a private method." << endl;
	}

protected:
	string name;
	
public:

	string gender;

	void setAge(int a){
		age = a;
	}

	void setName(string n){
		name = n;
	}

	void display(){
		cout << "Age is " << age << endl;
		cout << "Name is " << name << endl;
		cout << "Gender is " << gender << endl;
	}

};

class Student: public Person {

	void changeName(string newName){
		name = newName;
	}

int main():
	Student s;
	s.setName("John");
	s.setAge(28);
	

	s.display();
	s.secretMethod();

	
}
