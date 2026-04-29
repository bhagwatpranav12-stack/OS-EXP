#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int pid;

    // Create a new process
    pid = fork();

    if (pid == 0) {
        // This block is executed by the child process
        cout << "Child process Running" << endl;
    } else {
        // This block is executed by the parent process
        cout << "Parent process Running" << endl;
    }

    return 0;
}
