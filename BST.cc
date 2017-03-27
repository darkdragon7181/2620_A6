
/**********************************************
CPSC 2620, spring 2017
BY: Navraj (Raj)
Prof: Howard Cheng
description: binary search tree implementation
date: march, 27, 2017
*********************************************/


#include "BST.h"


BST::BST()
{
   root = nullptr; // no dummy header needed w/ BSTs
}

BST::~BST()
{
   destroy(root);
}
vector<string>& BST::operator[] (const string& key)
{
   //be sure to return a vector of strings *vstr
}


void BST::traverse (void (*f)(const string &key, vector<string>& value));




//++++++++++helpers++++++++++//
void BST::distroy (node* n)
{
   //implement similar to a post-order traverse
   //recursive
   //kill the childern before the parents
   //kill left sub tree, kill right sub, tree kill the root
   /*
     go left;
     go right;
     process: delete node;
    */
}
int BST::max(int, int) const;
node* BST::find(node*, const string&);
void BST::traverseInOrder(node*, void (*f) (const string&, vector<string>&));
void BST::insert(node*&, const string&);
