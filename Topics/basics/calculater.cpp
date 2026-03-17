#include <iostream>


int add(int a, int b) {return a + b;}

int subtract (int a, int b){ return a - b;}

int multiply (int a, int b){ return a * b;}

float dev (int a, int b) { return a / b;}

int main()
{
    std::cout << "Enter basic mathematic expressions (e.g. 1 + 2, 3 - 0, 4 * 5, 6 / 2).\n Note: include white space between operands and operator.\n";
    int a, b;
    char op;
    std::cin >> a >> op >> b;
    switch (op) 
    {
        case '+':
            std::cout << add(a, b) << "\n";
        case '-':
            std::cout << subtract(a, b) << "\n";
        case '*':
            std::cout << multiply(a, b) << "\n";
        case '/':
            std::cout << dev(a, b) << "\n";
    }
}


