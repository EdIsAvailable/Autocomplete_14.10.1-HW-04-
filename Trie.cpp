#include "Trie.h"

TrieNode::TrieNode() {
   end_of_word = false;
   for (int i = 0; i < 26; i++) {
      children[i] = nullptr;
   }
   letter = '\0';
}

void Trie::Insert(string str) {
   TrieNode* current = &root;
   for (size_t i = 0; i < str.size(); i++) {
      if (current->children[str.at(i) - 'a'] == nullptr) {
         current->children[str.at(i) - 'a'] = new TrieNode;
         current->children[str.at(i) - 'a']->letter = str.at(i);
      }
      current = current->children[str.at(i) - 'a'];
   }
   current->end_of_word = true;
}

TrieNode* Trie::Search(string str) {
   TrieNode* current = &root;
   for (size_t i = 0; i < str.size(); i++) {
      if (current->children[str.at(i) - 'a']) {
         current = current->children[str.at(i) - 'a'];
      }
      else {
         current = nullptr;
         break;
      }
   }
   return current;
}

void Trie::PrintLexical(TrieNode* current, string prefix, string suffix) {
   if (current->end_of_word and suffix.size() != 0) {
      cout << prefix + suffix << endl;
   }
   for (int i = 0; i < 26; i++) {
      string temp = suffix;
      if (current->children[i]) {
         temp += current->children[i]->letter;
         PrintLexical(current->children[i], prefix, temp);
      }
   }
}


/*Trie::Trie(TrieNode root) {}

   //TrieNode root;

   // �������� ��� ����� � ������ ������.
   // ��������� ������ ������ � ������
   // ���� �� ���� �� �������� ��������� �������� ���� �� �������� ������,
   // ������ ����� �������� ������� �������� ���� ��� �������� �������. 
   void Insert(string str) {
      TrieNode* current = &root;
      for (size_t i = 0; i < str.size(); i++) {
         if (current->children[str.at(i) - 'a'] == NULL) {
            current->children[str.at(i) - 'a'] = new TrieNode;
            current->children[str.at(i) - 'a']->letter = str.at(i);
         }
         current = current->children[str.at(i) - 'a'];
      }
      current->end_of_word = true;
   }

   // ���� ������ ����� � trie
   TrieNode* Search(string str) {
      TrieNode* current = &root;
      for (size_t i = 0; i < str.size(); i++) {
         if (current->children[str.at(i) - 'a']) {
            current = current->children[str.at(i) - 'a'];
         }
         else {
            current = NULL;
            break;
         }
      }
      return current;
   }

   // ������� ����� � ��������� ��������� � ����������� �������
   void PrintLexical(TrieNode* current, string prefix, string suffix) {
      if (current->end_of_word and suffix.size() != 0) {
         cout << prefix + suffix << endl;
      }
      for (int i = 0; i < 26; i++) {
         string temp = suffix;
         if (current->children[i]) {
            temp += current->children[i]->letter;
            PrintLexical(current->children[i], prefix, temp);
         }
      }
   }
   */