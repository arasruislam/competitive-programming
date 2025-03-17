#include <iostream>

using namespace std;

int main()
{
   char x;
   cin >> x;
   int ascii = x;

   if (ascii >= 48 && ascii <= 57)
   {
      cout << "IS DIGIT" << endl;
   }
   else
   {
      cout << "ALPHA" << endl;

      if (ascii >= 65 && ascii <= 90)
      {
         cout << "IS CAPITAL" << endl;
      }
      else
      {
         cout << "IS SMALL" << endl;
      }
   }

   return 0;
}