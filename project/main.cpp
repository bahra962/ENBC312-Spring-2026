#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Base class
class Car {
protected:
    string carName;
    string carType;
    bool isAvailable;
    string rentStart;
    string rentEnd;

public:
    Car(string name) {
        carName = name;
        carType = "";
        isAvailable = true;
        rentStart = "N/A";
        rentEnd = "N/A";
    }

    virtual void display() {
        cout << "Car Name: " << carName << endl;
        cout << "Car Type: " << carType << endl;

        if (isAvailable == true) {
            cout << "Available: Yes" << endl;
        } else {
            cout << "Available: No" << endl;
        }

        cout << "Rent Start Date: " << rentStart << endl;
        cout << "Rent End Date: " << rentEnd << endl;
    }

    string getName() {
        return carName;
    }

    string getType() {
        return carType;
    }

    string getRentStart() {
        return rentStart;
    }

    string getRentEnd() {
        return rentEnd;
    }

    void rentCar(string start, string end) {
        if (isAvailable == true) {
            isAvailable = false;
            rentStart = start;
            rentEnd = end;
            cout << "Car has been rented." << endl;
        } else {
            cout << "This car is already rented." << endl;
        }
    }

    void returnCar() {
        if (isAvailable == false) {
            isAvailable = true;
            rentStart = "N/A";
            rentEnd = "N/A";
            cout << "Car has been returned." << endl;
        } else {
            cout << "This car is already available." << endl;
        }
    }

    // Ensures correct deletion of derived objects when using Car* pointers
    virtual ~Car() {}
};

// Derived classes
class Sedan : public Car {
public:
    Sedan(string name) : Car(name) {
	carType = "Sedan";
    }

    void display() {
        cout << "Sedan" << endl;
        Car::display();
    }
};

class SUV : public Car {
public:
    SUV(string name) : Car(name) {
 	carType = "SUV";
    }

    void display() {
        cout << "SUV" << endl;
        Car::display();
    }
};

class Truck : public Car {
public:
    Truck(string name) : Car(name) {
	carType = "Truck";
    }

    void display() {
        cout << "Truck" << endl;
        Car::display();
    }
};

class Van : public Car {
public:
    Van(string name) : Car(name) {
	carType = "Van";
    }

    void display() {
        cout << "Van" << endl;
        Car::display();
    }
};

class Motorcycle : public Car {
public:
    Motorcycle(string name) : Car(name) {
	carType = "Motorcycle";
    }

    void display() {
        cout << "Motorcycle" << endl;
        Car::display();
    }
};

void listCars(vector<Car*> &cars) {
    if (cars.size() == 0) {
        cout << "No cars registered." << endl;
    } else {
        for (int i = 0; i < cars.size(); i++) {
            cout << endl;
            cout << "Car #" << i + 1 << endl;
            cars[i]->display();
        }
    }
}

void registerCar(vector<Car*> &cars) {
    int type;
    string name;

    cin.ignore();

    cout << "Enter car name: ";
    getline(cin, name);

    cout << "Choose car type:" << endl;
    cout << "1. Sedan" << endl;
    cout << "2. SUV" << endl;
    cout << "3. Truck" << endl;
    cout << "4. Van" << endl;
    cout << "5. Motorcycle" << endl;
    cout << "Enter choice: ";
    cin >> type;

    if (type == 1) {
        cars.push_back(new Sedan(name));
    } else if (type == 2) {
        cars.push_back(new SUV(name));
    } else if (type == 3) {
        cars.push_back(new Truck(name));
    } else if (type == 4) {
        cars.push_back(new Van(name));
    } else if (type == 5) {
        cars.push_back(new Motorcycle(name));
    } else {
        cout << "Invalid choice." << endl;
        return;
    }

    cout << "Vehicle has been registered." << endl;
}

void deregisterCar(vector<Car*> &cars) {
    string name;

    cin.ignore();

    cout << "Enter car name to remove: ";
    getline(cin, name);

    for (int i = 0; i < cars.size(); i++) {
        if (cars[i]->getName() == name) {
            delete cars[i];
            cars.erase(cars.begin() + i);
            cout << "Vehicle has been removed." << endl;
            return;
        }
    }

    cout << "Vehicle not found." << endl;
}

void rentACar(vector<Car*> &cars) {
    string name;
    string start;
    string end;

    cin.ignore();

    cout << "Enter the name of the Vehicle to rent: ";
    getline(cin, name);

    for (int i = 0; i < cars.size(); i++) {
        if (cars[i]->getName() == name) {
            cout << "Enter rent start date: ";
            getline(cin, start);

            cout << "Enter rent return date: ";
            getline(cin, end);

            cars[i]->rentCar(start, end);
            return;
        }
    }

    cout << "Vehicle not found." << endl;
}

void returnACar(vector<Car*> &cars) {
    string name;

    cin.ignore();

    cout << "Enter vehicle name to return: ";
    getline(cin, name);

    for (int i = 0; i < cars.size(); i++) {
        if (cars[i]->getName() == name) {
            cars[i]->returnCar();
            return;
        }
    }

    cout << "Vehicle not found." << endl;
}

// bubble sort by name
void sortByName(vector<Car*> &cars) {
    for (int i = 0; i < cars.size(); i++) {
        for (int j = 0; j < cars.size() - 1; j++) {
            if (cars[j]->getName() > cars[j + 1]->getName()) {
                Car* temp = cars[j];
                cars[j] = cars[j + 1];
                cars[j + 1] = temp;
            }
        }
    }

    cout << "Cars sorted by name." << endl;
}

// bubble sort by rent start date
void sortByRentStart(vector<Car*> &cars) {
    for (int i = 0; i < cars.size(); i++) {
        for (int j = 0; j < cars.size() - 1; j++) {
            if (cars[j]->getRentStart() > cars[j + 1]->getRentStart()) {
                Car* temp = cars[j];
                cars[j] = cars[j + 1];
                cars[j + 1] = temp;
            }
        }
    }

    cout << "Cars sorted by rent start date." << endl;
}

int main() {
    vector<Car*> cars;
    int choice;

    cars.push_back(new Sedan("Toyota Camry"));
    cars.push_back(new SUV("Honda CRV"));
    cars.push_back(new Truck("Ford F150"));

    do {
        cout << endl;
        cout << "Welcome to the Rental Car Management. These are the following options: " << endl;
        cout << "1. Register a car" << endl;
        cout << "2. Deregister a car" << endl;
        cout << "3. Rent a car" << endl;
        cout << "4. Return a car" << endl;
        cout << "5. List all cars" << endl;
        cout << "6. Sort by name" << endl;
        cout << "7. Sort by rent start date" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your option: ";
        cin >> choice;

        if (choice == 1) {
            registerCar(cars);
        } else if (choice == 2) {
            deregisterCar(cars);
        } else if (choice == 3) {
            rentACar(cars);
        } else if (choice == 4) {
            returnACar(cars);
        } else if (choice == 5) {
            listCars(cars);
        } else if (choice == 6) {
            sortByName(cars);
        } else if (choice == 7) {
            sortByRentStart(cars);
        } else if (choice == 8) {
            cout << "See you later!" << endl;
        } else {
            cout << "Invalid choice." << endl;
        }

    } while (choice != 8);

    for (int i = 0; i < cars.size(); i++) {
        delete cars[i];
    }

    return 0;
}
