/**********************************************
Name: Navraj Saini
Class: 2620 Spring 2017
Prof: Howard Cheng
Description: A revursive function that prints all
n! permutations of n ints
********************************************/
#include <iostream>
using namespace std;
void print_perm (int A[], int n, int current);

int main()
{
   int n = 0;
   
   int current = 1;
   
   cout << "enter the integer to recieve all it's permutations: ";
   cin >> n;
   
   while (n > 0)
   {
      int A[n];
      //an array of n ints from 1 to n
      //not the best way to do it but it works
      for (int i = 0; i < n; i++)
      {
	 A[i] = i+1;
      }

      print_perm(A[n], n, current);
      cout << "Enter the next int, or 0 to exit: ";
      cin >> n;
   }
   return 0;
}


void print_perm (int A[], int n, int current)
{
   while (current != n)
   {
      for (int i = n; i < current; i++)
      {
	 swap(A[n], A[i]);
	 print_perm (A[i], n+1, current);
	 swap(A[n], A[i]);
      }
   }
}
   
