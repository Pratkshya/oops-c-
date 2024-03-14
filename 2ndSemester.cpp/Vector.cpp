#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    // Access elements of the vector using index
    cout << "Elements of the vector: ";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Access elements of the vector using iterators
    cout << "Elements of the vector (using iterators): ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Modify an element of the vector
    numbers[2] = 35;

    // Remove the last element from the vector
    numbers.pop_back();

    // Print the modified vector
    cout << "Modified vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
