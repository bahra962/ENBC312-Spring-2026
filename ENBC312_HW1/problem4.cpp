#include <iostream>
using namespace std;

double calculate_decimal(double a, double b){
	
	return a*b + 20.51;

}

int main(){
	
	cout<<calculate_decimal(3,3)<<endl;
	cout<<calculate_decimal(10.1,1.1)<<endl;
	cout<<calculate_decimal(1,20.1)<<endl;
	return 0;
}
