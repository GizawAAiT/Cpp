#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "The local date and time is: " << dt << endl;
    return 0;
    
}