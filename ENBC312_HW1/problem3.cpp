#include <iostream>
using namespace std;

int calculate(int a, int b){
	
	return a*b + 200;
}

int main(){

	cout<<calculate(2,3)<<endl;
	cout<<calculate(5,5)<<endl;
	cout<<calculate(10,11)<<endl;
	return 0;
}
