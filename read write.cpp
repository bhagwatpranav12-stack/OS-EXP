#include <iostream>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>

using namespace std;

int main() {
    int fd;
    char buffer[100];

    // Opening/Creating a file for Read and Write access
    fd = open("info.txt", O_CREAT | O_RDWR, 0644);

    if (fd == -1) {
        cout << "File open failed" << endl;
        return 1;
    }

    char msg[] = "Linux File System Calls";

    // Writing data to the file
    write(fd, msg, strlen(msg));
    cout << "Data written" << endl;

    // Moving the file pointer back to the beginning of the file
    lseek(fd, 0, SEEK_SET);

    // Reading data from the file into the buffer
    read(fd, buffer, sizeof(buffer));
    cout << "Data read: " << buffer << endl;

    // Closing the file descriptor
    close(fd);

    return 0;
}
