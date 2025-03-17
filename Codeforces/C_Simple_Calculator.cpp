#include <iostream>

using namespace std;

int main()
{
   long long int x, y;
   cin >> x >> y;

   long long int add, substract, multi;
   add = x + y;
   substract = x - y;
   multi = x * y;

   cout << x << " + " << y << " = " << add << endl;
   cout << x << " * " << y << " = " << multi << endl;
   cout << x << " - " << y << " = " << substract << endl;

   return 0;
}
