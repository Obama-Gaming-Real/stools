#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Usage: scp file file_path";
        return 1;
    }
    ifstream in{argv[1]};
    remove(argv[2]);
    ofstream out{argv[2]};
    if (!out)
    {
        cerr << "Could not create output file, exit code 1" << argv[2] << '\n';
        return 1;
    }
    static constexpr size_t buffsize{1024};
    char buffer[buffsize];
    while (in.read(buffer, buffsize))
    {
        out.write(buffer, buffsize);
    }
    out.write(buffer, in.gcount());
}