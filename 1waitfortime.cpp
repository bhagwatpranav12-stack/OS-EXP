#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

    cout << "Waiting for 5 seconds..." << endl;

    
    sleep(5);

    cout << "Process resumed" << endl;

    return 0;
}
