#include <iostream>
#include <vector>
using namespace std;

int main(){
	
	vector<int> arr;

	arr.push_back(10);
	arr.push_back(25);
        arr.push_back(30);
        arr.push_back(15);
        arr.push_back(5);

	int sum = 0;
	int max_arr = arr[0];

	for (int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
		sum += arr[i];

		if (arr[i] > max_arr) {
			max_arr = arr[i];
		}
	}

	cout << endl;

	cout << "max: " << max_arr << endl;
	cout << "Sum: " << sum << endl;

	return 0;

}
