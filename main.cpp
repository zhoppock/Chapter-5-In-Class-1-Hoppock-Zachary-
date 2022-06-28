// Hoppock, Zachary
// averageFunction.cpp
// Calculate the average of four given numbers by doing it inside a function
// Version # 1

#include <iostream>
using namespace std;

/**
Calculates the average of four given numbers
@param w the first number
@param x the second number
@param y the third number
@param z the fourth number
@return the average of the four numbers
*/

double num_average(int w, int x, int y, int z)
{
  int sum = w + x + y + z;
  int average = sum / 4;
  return average;
}

int main()
{
  int num1 = 100;
  int num2 = 200;
  int num3 = 300;
  int num4 = 400;

  int average = num_average(num1, num2, num3, num4);
  cout << average;
  return 0;
}