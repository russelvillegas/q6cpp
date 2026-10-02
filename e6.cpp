#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long bytes;
    double kilobytes, megabytes, gigabytes;

    cout << "Enter file size in bytes: ";
    cin >> bytes;

    kilobytes = bytes / 1024.0;
    megabytes = kilobytes / 1024.0;
    gigabytes = megabytes / 1024.0;

    cout << fixed << setprecision(2);
    cout << "Kilobytes: " << kilobytes << endl;
    cout << "Megabytes: " << megabytes << endl;

    cout << setprecision(4);
    cout << "Gigabytes: " << gigabytes << endl;
    cout << "Whole Megabytes: " << (long long)megabytes << endl;

    return 0;
}
