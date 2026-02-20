#include <iostream>
using namespace std;

int main(){
	int value, sum = 0;
	
	cout<<"Input integers of choice (separate integers with a space and hit CTRL D to finish): "<<endl;
	
	while (cin>>value){
		sum+= value;
	} 

	cout<<"Sum = "<<sum<<endl;
	return 0;
}
