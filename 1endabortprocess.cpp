#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int choice;

    cout << "Enter 1 to Exit, 2 to Abort: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Process ended normally" << endl;
        exit(0);
    }
    else {
        cout << "Process aborted abnormally" << endl;
        abort();
    }

    // This line will not be executed because of exit() or abort()
    cout << "This line will not execute" << endl;

    return 0;
}
