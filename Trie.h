#pragma once
#include <iostream>
using namespace std;

class TrieNode {

public:
   TrieNode* children[26];
   bool end_of_word;
   char letter;
   TrieNode();
};

class Trie {

public:
   TrieNode root;
   void Insert(string str);
   TrieNode* Search(string str);
   void PrintLexical(TrieNode* current, string prefix, string suffix);
};
/*class Trie {

public:
   Trie(TrieNode root);
 
   // �������� ��� ����� � ������ ������.
   // ��������� ������ ������ � ������
   // ���� �� ���� �� �������� ��������� �������� ���� �� �������� ������,
   // ������ ����� �������� ������� �������� ���� ��� �������� �������. 
   void Insert(string str);

   // ���� ������ ����� � trie
   TrieNode* Search(string str);

   // ������� ����� � ��������� ��������� � ����������� �������
   void PrintLexical(TrieNode* current, string prefix, string suffix);
};*/