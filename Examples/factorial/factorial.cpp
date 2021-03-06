/*
 * Module: factorial.cpp
 *
 * Description: This module uses factorial functions to show the
 *              difference between recusive and non-recusive
 *              implementations.
 *
 * Course: CS3330 Data Structures and Algorithms
 * Author: Dr. Jack Davault
 */

#include <cstdio>  // For the C getchar() function
#include <iostream>

using namespace std;

int factorial(int n);
int factorial2(int n);

int main(int argc, char **argv)
{
   cout << "The factorial(4)  = " << factorial(4) << endl;
   cout << "The factorial2(4) = " << factorial2(4) << endl;

   cout << endl << "Press any key to continue ..." << endl;
   getchar();

   return 0;
}

/*
 *  factorial - This function implements factorial without using
 *              recursion.
 */
int factorial(int n)
{
   int f=0;

   if (n <= 1)
   {
        f=1;
   }
   else
   {
      f = 1;
      for (int i=1; i < n+1; i++)
      {
         f = f * i;
      }
   }

   return f;
}

/*
 *  factorial2 - This function implements factorial using recursion
 */
int factorial2(int n)
{
   int f=0;

   if (n <= 1) // This is the termination case
      f = 1;
   else // This is the recursive case
      f = n * factorial2(n - 1);

   return f;
}
