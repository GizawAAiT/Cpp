# include <iostream>
#include <vector>
int square(int x)
{
    return x * x;
}


int main()
{
    int x = 3;
    int res = square(x);
    std::cout << "The square of " << x << " is "<< res << "\n";
    
    // vector:
    std::vector<int> v = {1,2,3,4,5};
    for (const auto& elem: v)
    {
        std::cout << elem << " ";
    }
    // std::cout << "vector: " <<v;
    
    return 0;
}