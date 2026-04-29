#include <iostream>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>

using namespace std;

int main() {
    // Creating a new directory
    mkdir("OSLabDir", 0755);

    // Opening the current directory (".")
    DIR *dir = opendir(".");

    struct dirent *entry;

    // Reading and printing the names of all files/folders in the directory
    while ((entry = readdir(dir)) != NULL) {
        cout << entry->d_name << endl;
    }

    // Closing the directory stream
    closedir(dir);

    // Removing the directory
    rmdir("OSLabDir");

    return 0;
}
