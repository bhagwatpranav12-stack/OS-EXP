#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int *ptr;

    // Dynamically allocating memory for 5 integers
    ptr = (int*) malloc(5 * sizeof(int));

    if (ptr == NULL) {
        cout << "Memory Allocation Failed" << endl;
        return 1;
    }

    // Assigning values to the allocated memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    cout << "Stored Values:" << endl;

    // Displaying the values
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }

    cout << endl;

    // Releasing the dynamically allocated memory
    free(ptr);

    cout << "Memory Freed" << endl;

    return 0;
}
