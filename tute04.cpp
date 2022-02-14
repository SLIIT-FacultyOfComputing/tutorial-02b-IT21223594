/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no); //Function declaration
long nCr(int n, int r);

int main() 
{
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

//Function implemented
long nCr(int n, int r)
{
  long ncr = 0, ret_fac_n = 0, ret_fac_r = 0, ret_fac_dif = 0; //Local variables
  
  ret_fac_n = Factorial(n); //Calling Factorial function
  ret_fac_r = Factorial(r);
  ret_fac_dif = Factorial(n - r);

  ncr = ret_fac_n / (ret_fac_r * ret_fac_dif); //nCr calculation


return ncr; //Returns value to the main function
 
}

long Factorial(int no)
{
  long fac = 1;
  int count;

  //Factorial calculation
  for(count = no; count >= 1; count--) 
  {
    fac = fac * count;
  }

  return fac; //Returns value to the nCr function
}
