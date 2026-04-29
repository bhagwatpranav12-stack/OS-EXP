#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main() {
    int fd;
    char buffer[50];

    // Opening the file in read-only mode
    fd = open("demo.txt", O_RDONLY);

    if (fd < 0) {
        cout << "Error opening file" << endl;
    } else {
        read(fd, buffer, sizeof(buffer));
        cout << "File Content: " << buffer << endl;
        close(fd);
    }

    return 0;
}
