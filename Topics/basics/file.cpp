#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream _file("test_file.txt");
    if (_file.is_open())
    {
        _file << "This is a test file.";
        _file.close();
    }
    else
    {
        cout << "Unable to open file.";
    }
   
   return 0;
}
