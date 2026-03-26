#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector <int> nums = {5, 3, 7, 1};
    
    
    // loop and print the nums (lambda function):
    auto print_num = [&nums] () 
    {
        for (int num: nums)
        {
            cout << num << ", ";
        };
        cout << endl;
    };       
    
    // sort the nums:
    sort(nums.begin(), nums.end());
    print_num();
    
    // reverse the nums:
    sort(nums.rbegin(), nums.rend());
    print_num();
}