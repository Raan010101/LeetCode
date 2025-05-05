#include <iostream>     // Allows us to use cout and cin for input/output
#include <vector>       // Lets us use the vector data structure (dynamic arrays)

using namespace std;    // So we don’t have to write std:: before cout, cin, etc.

int main() {
    int n, q; // Declare two integers: n = number of arrays, q = number of queries

    // Ask the user to enter the number of arrays and queries
    cout << "Enter number of arrays and number of queries: ";
    cin >> n >> q;

    // Create a vector of vectors. Each vector inside will be one array.
    vector<vector<int>> arr(n); // This creates a 2D dynamic array structure

    // Now we loop n times to read each array
    for (int i = 0; i < n; ++i) {
        int k; // This will store how many elements are in this array
        cout << "Enter the number of elements for array " << i << ": ";
        cin >> k;

        // Resize the i-th array so it can store k elements
        arr[i].resize(k);

        // Read the k elements and store them in the array
        cout << "Enter " << k << " elements for array " << i << ": ";
        for (int j = 0; j < k; ++j) {
            cin >> arr[i][j]; // Store the number at position j in the i-th array
        }
    }

    // Now we handle the queries
    cout << "Enter " << q << " queries (each with two numbers: i and j):" << endl;
    for (int i = 0; i < q; ++i) {
        int x, y; // x = which array to look in, y = which index in that array
        cin >> x >> y;

        // Print the value at arr[x][y], which means:
        // look in array number x, and find the element at index y
        cout << "Value at arr[" << x << "][" << y << "] is: " << arr[x][y] << endl;
    }

    return 0; // End of program
}
