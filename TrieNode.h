#pragma once

using namespace std;

class TrieNode {

public:
   //TrieNode* children[26];
    // ����, ����������, ������������� �� ����� �� ���� ����.
    //bool end_of_word;
    // ������, ���������� � ���� ����
    //char letter;
   TrieNode(TrieNode* children[26], bool end_of_word, char letter);
   //~TrieNode();
};