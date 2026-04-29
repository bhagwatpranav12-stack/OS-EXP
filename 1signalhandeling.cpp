#include <iostream>
#include <unistd.h>
#include <signal.h>

using namespace std;

void handler(int sig) {
    cout << "\nSignal Received: " << sig << endl;
}

int main() {

    // Registering the signal handler for SIGINT (Ctrl+C)
    signal(SIGINT, handler);

    cout << "Press Ctrl+C to send signal" << endl;

    // Suspends the process until a signal is received
    pause();

    cout << "Process resumed" << endl;

    return 0;
}
