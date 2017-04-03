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
vector<string>& BST::operator[] (const string& k)
{
   //be sure to return a vector of strings *vstr
   if(find(root, k)== nullptr)//if the key is found
   {
      return insert(root, k) -> value;
   }
   return find(root, k) -> value;
}


void BST::traverse (void (*f)(const string &k, vector<string>& value))
{
}




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
      delete n;
   }
   delete n;
}
int BST::max(int, int) const
{
   
}
/*******************************************************
find function, searches the tree to find the key, if not
found return nullptr if found return the pointer's value
 *******************************************************/
BST::node* BST::find(node* leaf, const string& k)
{
   if (leaf != nullptr)
   {
      if(k== leaf->key)
	 return leaf;
      if(k< leaf->key)
	 return find(leaf->lPtr, k);
      else
	 return find(leaf -> rPtr, k);
   }
}

void BST::traverseInOrder(node* node, void (*f) (const string& k, vector<string>& val))
{
   // ??
}

/***********************************************
insert function, searches the tree to find out
where to place the key, if it's less than or grater
than the root recurses with a the child as the root
and keeps going and inserts it in the proper location
***********************************************/
/*void*/ BST::node* BST::insert(node*& leaf, const string& k)
{
   if (k< leaf->key)//less than
   {
      if (leaf -> lPtr != nullptr)
	 return insert(leaf-> lPtr, k);
      else
      {
	 leaf -> lPtr = new node;
	 leaf -> lPtr -> key = k;
	 //leaf -> rPtr -> left = nullptr;
	 //leaf -> lPtr -> rptr = nullptr;
	 return leaf-> lPtr;
      }
   }
   else if(k >= leaf->key)//grater than or equal to
   {
      if(leaf -> rPtr != nullptr)
	 return insert(leaf-> rPtr, k);
      else
      {
	 leaf -> rPtr = new node;
	 leaf -> rPtr -> key = k;//key or valur = k?
	 //leaf -> rPtr -> lPtr = nullptr;
	 //leaf -> rPtr -> rPtr = nullptr;
	 return leaf->rPtr;
      }
   }
}
