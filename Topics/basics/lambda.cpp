#include <iostream>

using namespace std;

int main()
{
    int multiplier = 10;
    
    auto prod = [multiplier] (int a) 
    { 
    return a*multiplier;
    }; 
    cout << prod(4) << endl;
    return 0;
}
