/* 
! Source: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

Given 2 numbers 𝑁 and 𝑄, an array 𝐴 of 𝑁 number and 𝑄 number of pairs 𝐿, 𝑅. For each query 𝑄 print a single line that contains the summation of all numbers from index 𝐿 to index 𝑅.

* Input:
First line contains two numbers 𝑁, 𝑄 (1≤𝑁,𝑄≤105) where 𝑁 is number of elements in 𝐴 and 𝑄 is number of query pairs.

Second line contains 𝑁 numbers(1≤𝐴𝑖≤109).

Next 𝑄 lines contains 𝐿,𝑅 (1≤𝐿≤𝑅≤𝑁).

* Output:
For each query 𝑄 print a single line that contains the summation of all numbers from index 𝐿 to index 𝑅.

* Example:-
Input:
6 3
6 4 2 7 2 7
1 3
3 6
1 6

Output:
12
18
28


*/

#include <iostream>

using namespace std;

int main()
{
   long long n, q;
   cin >> n >> q;
   long long arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   long long pre[n];
   pre[0] = arr[0];
   for (int i = 1; i < n; i++)
   {
      pre[i] = arr[i] + pre[i - 1];
   }

   while (q--)
   {
      long long l, r;
      cin >> l >> r;
      l--, r--;

      long long sum;

      if (l == 0)
         sum = pre[r];
      else
         sum = pre[r] - pre[l - 1];

      cout << sum << endl;
   }

   return 0;
}