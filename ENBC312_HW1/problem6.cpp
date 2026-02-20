#include <iostream>
using namespace std;

void print_range(int a, int b){
	if (a>=b){
		cout<<"Error: b must be greater than a."<<endl;
		return;
	}
	
	for (int i=a+1;i<b;i++){
		cout<<i<<" ";
	}
	
	cout<<endl;
}

int main(){
	int a,b;
	cout<<"Enter a and b:";
	cin >> a>>b;

	print_range(a,b);
	return 0;
}
