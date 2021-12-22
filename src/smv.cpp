#include <iostream>
#include <filesystem>

using namespace std;
using namespace filesystem;

int main(int argc, char **argv)
{
    try
    {
        filesystem::rename(argv[1], argv[2]);
    }
    catch (filesystem::filesystem_error &e)
    {
        cout << e.what() << '\n';
    }
    return 0;
}