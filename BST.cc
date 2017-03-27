
/**********************************************
CPSC 2620, spring 2017
BY: Navraj (Raj)
Prof: Howard Cheng
description: binary search tree implementation
date: march, 27, 2017
*********************************************/


#include "BST.h"

vector<string>& operator[] (const string& key);
void traverse (void (*f)(const string &key, vector<string>& value));

bool find(const string& key);
void insert(string);
