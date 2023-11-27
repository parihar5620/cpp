#include <iostream>                                                           
using namespace std;

int main()
{
  int number1, number2, sum;

  cout << "enter two integers: ";
  cin>> number1 >> number2;

  //sum of two numbers in stored in variable sumOfTwoNumbers
  sum = number1 + number2;

  //print sum
  cout << number1 << "+" << number2 << "=" <<sum;

  return 0;
}

