#include <iostream>

using namespace std;

int main()
{
    int* pointer = new int;
    *pointer = 12;
    cout << *pointer;
}