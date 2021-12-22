#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    string file_to_read = argv[1];
    ifstream file;
    file.open(file_to_read);
    string file_stream;
    if (file.is_open())
    {
        while (file)
        {
            getline(file, file_stream);
            cout << file_stream << '\n';
        }
    }
}