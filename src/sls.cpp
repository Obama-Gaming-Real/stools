#include <iostream>
#include <dirent.h>
#include <sys/types.h>

using namespace std;

void list_dir(const char *path)
{
    struct dirent *entry;
    DIR *dir = opendir(path);

    if (dir == NULL)
    {
        return;
    }
    while ((entry = readdir(dir)) != NULL)
    {
        cout << entry->d_name << endl;
    }
    closedir(dir);
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        list_dir("./");
    }
    if (argv[1] != "")
    {
        list_dir(argv[1]);
    }
}