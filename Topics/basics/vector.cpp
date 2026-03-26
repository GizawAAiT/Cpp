# include <iostream>
# include <vector>
#include <variant>
using namespace std;

int main()
{
    vector<string> names = {"John", "Smith", "Lawtaro"};
    
    cout << names[0] << endl;
    cout << names.at(0) << endl;
    cout << names.back() << endl;
    cout << names.front() << endl;
    cout << names.size() << endl;
    
    // push back
    names.push_back("atBack");
    cout << names.back() << endl;
    
    // push front 
    names.insert(names.begin(), "atFront");
    cout << names.front() << endl;
    
    // insert at index 2:
    names.insert(names.begin()+ 2, "atIndex2");
    cout << names[2] << endl;
    
    // loop over and print all names:
    for (string name:names)
    {
        cout << name << ", ";
    }
    
    // variant vector (int, double, string, boolean):
    vector <variant<int, double, string, bool>> variant_data = {
    1, 2, 3.14, "text", false};
    
    // loop over the variant vector and pront the values along with their types:
    for (const auto& data: variant_data)
    {
        visit ([] (const auto& value)
        {
            cout << value << " (type: " << typeid(value).name() << ")" << endl;
        }, data);
    }
    
    // just loop over variant and print the values ():
    for (const auto& d:variant_data)
    {
        visit ([] (const auto& value)
        {
            cout << value << ", ";
        }, d);
        
    }
    return 0;
}