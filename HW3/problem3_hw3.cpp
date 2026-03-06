#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,2,3,4,5};
	int len = 5;

	int* start = arr;
	int* end = arr + len-1;

	while (start<end){
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

	for (int i = 0;i<len ;i++){
		cout<< arr[i] << " ";
	}
	
	cout << endl;

	return 0;
}
