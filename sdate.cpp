#include <chrono>
#include <ctime>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    auto start = chrono::system_clock::now();
    auto end = chrono::system_clock::now();

    chrono::duration<double> elapsed_seconds = end - start;
    time_t end_time = chrono::system_clock::to_time_t(end);

    cout << ctime(&end_time);
}