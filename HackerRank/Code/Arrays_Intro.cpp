#include <iostream>
#include <vector>
using namespace std;

int main() {
    int length, number;
    vector<int> numbers;

    cout << "Enter how many numbers you want to input: ";
    cin >> length;

    cout << "Enter " << length << " numbers:\n";
    for (int i = 0; i < length; i++) {
        cin >> number;
        numbers.push_back(number);
    }

    cout << "\nNumbers in reverse order:\n";
    for (int i = length - 1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}
