#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main() {
    int fd;

    // Opening a file in read-only mode
    fd = open("student.txt", O_RDONLY);

    if (fd == -1) {
        cout << "File cannot open" << endl;
        return 1;
    }

    cout << "File opened successfully" << endl;

    // Closing the file descriptor
    close(fd);

    cout << "File closed successfully" << endl;

    return 0;
}
