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
 
   // Вставьте это слово в строку поиска.
   // Проверьте каждый символ в строке
   // Если ни один из дочерних элементов текущего узла не содержит символ,
   // создаём новый дочерний элемент текущего узла для хранения символа. 
   void Insert(string str);

   // Ищем нужное слово в trie
   TrieNode* Search(string str);

   // Выводим слова с указанным префиксом в лексическом порядке
   void PrintLexical(TrieNode* current, string prefix, string suffix);
};*/