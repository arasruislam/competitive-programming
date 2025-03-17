#include <iostream>

using namespace std;

int main()
{
   char word[1001];
   cin >> word;

   if (word[0] >= 97)
   {
      int ascii = word[0] - 32;
      word[0] = ascii;
      cout << word << endl;
   }
   else
   {
      cout << word << endl;
   }

   return 0;
}