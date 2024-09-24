#pragma once

using namespace std;

class TrieNode {

public:
   //TrieNode* children[26];
    // Флаг, отмечающий, заканчивается ли слово на этом узле.
    //bool end_of_word;
    // Символ, хранящийся в этом узле
    //char letter;
   TrieNode(TrieNode* children[26], bool end_of_word, char letter);
   //~TrieNode();
};