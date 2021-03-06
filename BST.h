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

using namespace std;

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

   // func to traverse bst, smallest to largest
   void traverse (void (*f)(const string &, vector<string>&));

   //do i need a operator overload for ==?
   
  private:
   //bsts consist of nodes
   struct node{
      node (string s, node* l = nullptr, node* r = nullptr)
      : key{s}, lPtr{l}, rPtr{r}{}
      string key;
      
      vector<string> value;
 
      node* lPtr; // left node
      node* rPtr; // right node

   };
   node* root;
   //helper functions for the great and mighty public
   void destroy (node*);

   node* find(node*, const string&);
   void traverseInOrder(node*, void (*f) (const string&, vector<string>&));
   node* insert(node*&, const string&);
};
#endif
