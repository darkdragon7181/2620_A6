#include "BST.h"
#include <iostream>
#include <algorithm>
using namespace std;

//void print_BST(node*);
string key(const string& k);
int main()
{
   BST b1;
   string valu, s;
   cout << "enter the values to place in a tree: ";

   while (cin >> valu)
   {
      s = key(valu);
      cout << s << " ";
      
      b1[s].push_back(valu);
//      b1.print_BST()
   }
   
   return 0;
}

string key(const string& k)
{
   string s = k;
   sort(s.begin(), s.end());
   return s;
}
