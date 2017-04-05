#include "BST.h"
#include <iostream>
#include <algorithm>
using namespace std;

//void print_BST(node*);
string key(const string& k);
void print (const string& k, vector<string>& val);
int main()
{
   BST b1;
   string valu, s;
   //cout << "enter the values to place in a tree: ";
   
   while (cin >> valu)
   {
      s = key(valu);
      b1[s].push_back(valu);
      //b1.traverse(print(s,b1[s]));
   }
   b1.traverse(print);
   
   return 0;
}

string key(const string& k)
{
   string s = k;
   sort(s.begin(), s.end());
   return s;
}

void print (const string& k, vector<string>& val)
{
   cout << k << ": ";
   for (auto i = val.begin(); i != val.end(); ++i)
   {
      cout << *i << " "; 
   }
   cout << endl;
}
