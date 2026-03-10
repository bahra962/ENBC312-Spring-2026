#include <iostream>
using namespace std;

class Car {
private: 	
	string brand;
	int year;

public: 
	void setBrand(string brandName) {
		brand = brandName;
	}

	void setYear(int brandYear){
		year = brandYear;
	}

	void display() {
		cout << "Brand name is: " << brand << endl;
		cout << "Brand year is: " << year << endl;

	}
};

int main(){
	Car car;
	car.setBrand("Toyota");
	car.setYear(2020);
	car.display();

	return 0;
}	
