//
// CS 2620 Assignment 4 Solution
//
// Howard Cheng
// Oct 30, 2013
//
// This is a program that recognizes all anagrams from the input.  We
// assume that all input words consist of only upper case letters.
//

#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

// Computes the signature of the string, which is the original string
// arranged in alphabetical order.
//
// Assumes that the string w consists of only upper case letters.
string signature(const string& w);

// prints all the anagrams in the map
void printAnagrams(const map<string, vector<string>>& signatureList);

int main(void)
{
  string w, s;
  map<string, vector<string>> signatureList;

  // read all words
  while (cin >> w) {
    // compute signature and store it into the list
    s = signature(w);
    signatureList[s].push_back(w);
  }

  // print the results
  printAnagrams(signatureList);

  return 0;
}

// Computes the signature of the string, which is the original string
// arranged in alphabetical order.
//
// Assumes that the string w consists of only upper case letters.
string signature(const string& w)
{
  string s = w;
  sort(s.begin(), s.end());
  return s;
}

// prints all the anagrams in the map
void printAnagrams(const map<string, vector<string>>& signatureList)
{
  for (const auto &p : signatureList) {
    const auto& v = p.second;
    for (unsigned int j = 0; j < v.size()-1; j++) {
      cout << v[j] << " ";
    }
    cout << v[v.size()-1] << endl;
  }
}
