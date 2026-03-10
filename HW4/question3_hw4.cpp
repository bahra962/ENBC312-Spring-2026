#include <iostream>
using namespace std;

class Animal {
private:
	string species;

public: 
	void setSpecies(string speciesName){
		species = speciesName;
	}

	string getSpecies() {
		return species;
	}
};

class Dog: public Animal {
private:
	string breed;

public: 
	void setBreed(string breedName){
		breed = breedName;
	}	

	string getBreed(){
		return breed;
	}
};

int main(){
	Dog dog;
	dog.setSpecies("Mammal");
	dog.setBreed("Labrador");

	cout << "Dog species is " << dog.getSpecies() << endl;
	cout << "Dog breed is " << dog.getBreed() << endl;

	return 0;
}
