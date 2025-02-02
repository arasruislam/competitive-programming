/*
Given 2 numbers 𝑁 and 𝑄, array A of N numbers and Q queries each one contains a number 𝑋.

For each query print a single line that contains "found" if the number 𝑋 exists in array 𝐴 otherwise, print "not found".

* Input
First line contains two numbers 𝑁, 𝑄 (1≤𝑁,𝑄≤105).

Second line contains 𝑁 numbers (1≤𝐴𝑖≤109).

Next 𝑄 lines contains 𝑋 (1≤𝑋≤109).

* Output
Print the answer for each query in a single line.

* Example
Input:
5 3
1 5 4 3 2
5
3
6

Output:
found
found
not found
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   int n, q;
   cin >> n >> q;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   sort(arr, arr + n);

   while (q--)
   {
      int x;
      cin >> x;
      int l = 0, r = n - 1;
      bool flag = false;

      while (l <= r)
      {
         int mid = (r + l) / 2;
         if (x == arr[mid])
         {
            flag = true;
            break;
         }

         if (x > arr[mid])
         {
            l = mid + 1;
         }
         else
         {
            r = mid - 1;
         }
      }

      if (flag == true)
         cout << "found" << endl;
      else
         cout << "not found" << endl;
   }

   return 0;
}