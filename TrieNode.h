#pragma once
#include <iostream>
using namespace std;

// Создаем класс TrieNode для узлов дерева Trie
class TrieNode {

public:
   TrieNode* children[26];
   bool end_of_word;
   char letter;
   TrieNode();
};

// Создаем класс Trie для работы с деревом Trie
class Trie {

public:
   TrieNode root;
   // создаём новый дочерний элемент текущего узла для хранения символа. 
   void Insert(string str);
   // Ищем нужное слово в trie
   TrieNode* Search(string str);
   // Выводим слова с указанным префиксом в лексическом порядке
   void ShowLex(TrieNode* current, string prefix, string suffix);
};

   // Вставьте это слово в строку поиска.
   // Проверьте каждый символ в строке
   // Если ни один из дочерних элементов текущего узла не содержит символ,
   // создаём новый дочерний элемент текущего узла для хранения символа. 
   



