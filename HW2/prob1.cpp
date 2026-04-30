#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter numerical score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Letter grade: A" << endl;
    }
    else if (score >= 80) {
        cout << "Letter grade: B" << endl;
    }
    else if (score >= 70) {
        cout << "Letter grade: C" << endl;
    }
    else if (score >= 60) {
        cout << "Letter grade: D" << endl;
    }
    else {
        cout << "Letter grade: F" << endl;
    }

    return 0;
}
