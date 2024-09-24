#pragma once
#include <iostream>
using namespace std;

// ������� ����� TrieNode ��� ����� ������ Trie
class TrieNode {

public:
   TrieNode* children[26];
   bool end_of_word;
   char letter;
   TrieNode();
};

// ������� ����� Trie ��� ������ � ������� Trie
class Trie {

public:
   TrieNode root;
   // ������ ����� �������� ������� �������� ���� ��� �������� �������. 
   void Insert(string str);
   // ���� ������ ����� � trie
   TrieNode* Search(string str);
   // ������� ����� � ��������� ��������� � ����������� �������
   void ShowLex(TrieNode* current, string prefix, string suffix);
};

   // �������� ��� ����� � ������ ������.
   // ��������� ������ ������ � ������
   // ���� �� ���� �� �������� ��������� �������� ���� �� �������� ������,
   // ������ ����� �������� ������� �������� ���� ��� �������� �������. 
   



