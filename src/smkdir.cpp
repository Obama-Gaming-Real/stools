#include <unistd.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int check;
    char *dirname = argv[1];

    check = mkdir(dirname);

    if (!check)
        cout << "Directory: " << dirname << " created" << endl;
    else
    {
        cout << "Unable to create directory: " << dirname << " (directory may already exist)" << endl;
        exit(1);
    }
}