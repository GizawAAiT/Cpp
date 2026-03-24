# include <iostream>

using namespace std;

class Calc
{
  public:
    int num1, num2;
    int add();
    int subtract();
};

int Calc::add()
{
    return num1 + num2;
}

int Calc::subtract()
{
return num1-num2;
}

int main()
{
  Calc calc;
  calc.num1 = 10;
  calc.num2 = 12;
cout << calc.add() << endl;
cout << calc.subtract() << endl;
return 0;
}