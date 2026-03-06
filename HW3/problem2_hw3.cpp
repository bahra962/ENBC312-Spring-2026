#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<< "Input 2 integers: ";
	cin >> a >> b;

	int*ptr1 = &a;
	int*ptr2 = &b;

	int sum = *ptr1 + *ptr2;
	cout << "Sum of both numbers = " << sum << endl;

	return 0;

}
