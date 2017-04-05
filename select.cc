#include <iostream>
#include <cstdlib>
using namespace std;

void quickSort(int arr[], int left, int right);
int quickSelect(int arr[], int start, int end, int k);

int main()
{
   int n = 0, k = 0;

   cout << "enter the n and k and the array elements for n: ";

   cin >> n >> k;
   
   while (n > 0)
   {
      int A[n];
      
      for (int i = 0; i < n; i++)
      {
	 cin >> A[i];
      }
      
      cout << "enter another n and k with all the elements for the Array of size n: ";
      cin >> n >> k;
   }
}

int quickSelect(int arr[], int start, int end, int k)
{
   return 4;
}


void quickSort(int arr[], int left, int right)
{

   int i = left, j = right;
   int tmp;
   int pivot = arr[(left + right) / 2];

   // partition 

   while (i <= j) {
      while (arr[i] < pivot)
	 i++;
      while (arr[j] > pivot)
	 j--;

      if (i <= j) {
	 tmp = arr[i];
	 arr[i] = arr[j];
	 arr[j] = tmp;
	 i++;
	 j--;
      }
   };
   
   // recursion/
   if (left < j)
      quickSort(arr, left, j);
   if (i < right)
      quickSort(arr, i, right);
}
