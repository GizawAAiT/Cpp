#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector <int> nums = {1,2,3,0};
    
    // sort the nums:
    sort(nums.begin(), nums.end());
    
    // loop and print the nums (after sorted):
    for (int num: nums)
    {
        cout << num << ", ";
    }   
}