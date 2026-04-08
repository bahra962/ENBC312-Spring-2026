#include <iostream>
using namespace std;

void makeArray(int n){
	int* arr = new int[n];
	
	for (int i = 0; i<n; i++){
		arr[i] = i+1;
	}

	for (int i =0; i<n; i++){
		cout << arr[i] << " ";
	}
	
	cout << endl;

	delete[] arr;

}

int main() {
	int b;
	cout << "enter number: ";
	cin >> b;

	makeArray(b);
	return 0;
}
