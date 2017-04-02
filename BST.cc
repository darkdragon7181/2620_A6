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
void BST::destroy (node* n)
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
   if(n != nullptr)
   {
      destroy (n -> lPtr);
      destroy (n -> rPtr);
      destroy n;
   }
//   else
//      destroy n;
}
int BST::max(int, int) const
{
   
}
node::BST::node* BST::find(node* leaf, const string& key)
{
   if (leaf != nullptr)
   {
      if(key ==leaf->value)
	 return leaf;
      if(key< leaf->value)
	 return find(leaf->lPtr, key);
      else
	 return find(leaf -> rPtr, key);
   }
   else
      return nullptr;
}

void BST::traverseInOrder(node* node, void (*f) (const string&, vector<string>&))
{
   // ??
}

void BST::insert(node*& leaf, const string& key)
{
   if (key< leaf->value)
   {
      if (leaf -> != nullptr)
	 insert(leaf-> lPtr, key);
      else
      {
	 leaf -> lPtr = new node;
	 leaf -> lPtr -> value = key;
	 leaf -> rPtr -> left = nullptr;
	 leaf -> lPtr -> rptr = nullptr;
      }
   }
   else if(key >= leaf->value)
   {
      if(leaf -> rPtr != nullptr)
	 insert(leaf-> rPtr, key);
      else
      {
	 leaf -> rPtr = new node;
	 leaf -> rPtr -> value = key;
	 leaf -> rPtr -> lPtr = nullptr;
	 leaf -> rPtr -> rPtr = nullptr;
      }
   }
}
