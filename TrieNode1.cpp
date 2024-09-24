#include "TrieNode.h"
#include<iostream>

using namespace std;

TrieNode::TrieNode(TrieNode* children[26], bool end_of_word, char letter)
   {
      end_of_word = false;
      for (int i = 0; i < 26; i++) {
         children[i] = NULL;
      }
      letter = '\0';
   }