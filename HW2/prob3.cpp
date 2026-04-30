#include <iostream>
#include <string>
using namespace std;

char mostFrequentCharacter(string str) {
    int maxCount = 0;
    char mostFrequent = str[0];

    for (int i = 0; i < str.length(); i++) {
        int count = 0;

        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = str[i];
        }
    }
    return mostFrequent;
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    cout << "Most frequent character: " << mostFrequentCharacter(input) << endl;

    return 0;
}
