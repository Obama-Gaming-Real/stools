#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    copy(argv + 1, argv + argc, ostream_iterator<char *>(cout, " "));
    return 0;
}