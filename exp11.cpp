#include <iostream>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main() {
    int fd;

    // Creating a file with Read/Write/Execute permissions for all
    fd = open("demo.txt", O_CREAT | O_WRONLY, 0777);

    if (fd < 0) {
        cout << "Error creating file" << endl;
    } else {
        write(fd, "OS Learning made easy", 22);
        cout << "File created successfully" << endl;
        close(fd);
    }

    return 0;
}
