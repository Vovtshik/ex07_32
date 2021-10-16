/*ex07_32.cpp*/

#include <iostream>
using std::cout;
using std::endl;

bool testPalindromeCycle(char[], int);
bool testPalindromeRecursion(char[], int, int a = 0);

int main()
{
   char myStr[] = "jkAsababasAkj";

   cout << "\n1. Furction of determination of polydrome based on the cycle of \"for\":\n";

   if(testPalindromeCycle(myStr, sizeof(myStr)))
      cout << "String \"" << myStr << "\" is a polydrome\n";
   else
      cout << "String \"" << myStr << "\" is not a polydrome\n";

   cout << "\n2. Function for determining polydrome based on recursion:\n";

   int index = sizeof(myStr) - 2;                                                  //The index of the last visible character in the string
   if (testPalindromeRecursion(myStr, index))
      cout << "String \"" << myStr << "\" is a polydrome\n";
   else
      cout << "String \"" << myStr << "\" is not a polydrome\n";

   return 0;
}

bool testPalindromeCycle(char A[], int size)
{
   int index = (size - 2);                                                        //The index of the last visible character in the string
   for(int a = 0, b = index; a < b; a++, b--)
   {
      if(A[a] != A[b])
         return false;
   }
   return true;
}

bool testPalindromeRecursion(char A[], int b, int a)
{
    if (A[a] != A[b])
       return false;
    else if (a < b)
    {
        if (testPalindromeRecursion(A, b - 1, a + 1))
           return true;
        else
           return false;
    }
    else
       return true;
}
