#pragma once
#include<iostream>
#include<string>
#include<array>

using namespace std;

class TrieNode
{
public:
  TrieNode(char letter);
  ~TrieNode();
   const int AlfabetSize = 26;
   bool wordEnd = false;
   const  string getLetter() const;
   void AddLetter(char letter, string restWord);
   bool searchLetter(char letter, string restWord);

private:
   char _letter;
   //string _restWord;
   //string _key;
   array<TrieNode, 26> childNodes;
   TrieNode* letters[];
};

