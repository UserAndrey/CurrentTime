#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << dt<<"Current time"<< endl;
    tm* gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << dt<<"GMT 0" << endl;
}
