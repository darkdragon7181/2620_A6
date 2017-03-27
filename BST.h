/**********************************************
CPSC 2620, spring 2017
BY: Navraj (Raj)
Prof: Howard Cheng
description: binary search tree.
date: march, 27, 2017
*********************************************/
#ifndef BST_H
#define BST_H

#include <iostream>
#include <vector>
#include <string>

class BST{
  public:
   //default constructor and destructor
   BST();
   ~BST();

   //overloaded sub scrpicript op
   //similar to the map associative container
   //if the key isn't found the node with the key is inserted into the tree
   //if the key is found, the input string is added
   vector<string>& operator[] (const string&);
   
   void traverse (void (*f)(const string &key, vector<string>& value));
   
   
  private:
   bool find(const string& key);
   void insert(string);
};
#endif
