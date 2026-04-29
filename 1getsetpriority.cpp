#include <iostream>
#include <unistd.h>
#include <sys/resource.h>

using namespace std;

int main() {
    int priority;

    // Displaying the Process ID (PID)
    cout << "PID: " << getpid() << endl;

    // Getting the current priority of the process
    // 0 in the second argument refers to the current process
    priority = getpriority(PRIO_PROCESS, 0);

    cout << "Current Priority: " << priority << endl;

    // Setting a new priority (nice value) for the process
    // Lowering priority by setting it to 5
    setpriority(PRIO_PROCESS, 0, 5);

    cout << "Priority Changed" << endl;

    return 0;
}
