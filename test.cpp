//
// Created by Yosia on 07/06/24.
//
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    // Input the number of elements
    cout << "Enter the number of elements you want to "
            "input: ";
    cin >> n;

    // Initialize a vector of size n
    vector<int> vec(n);

    // Input n numbers into the vector
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Output the entered numbers
    cout << "You entered: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
