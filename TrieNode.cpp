#include "TrieNode.h"

// Реализуем класс TrieNode для узлов дерева Trie
// где у каждого узла есть массив дочерних элементов, флаг конца слова и символ
TrieNode::TrieNode() {
    // Создаем конструктор, инициализирующий дочерние элементы как NULL и символ как пустой
   end_of_word = false;
   for (int i = 0; i < 26; i++) {
      children[i] = nullptr;
   }
   letter = '\0';
}

// реализуем класс Trie для работы с деревом Trie
// У каждого узла есть массив дочерних элементов, флаг конца слова и символ
void Trie::Insert(string str) {
   TrieNode* current = &root;
   for (size_t i = 0; i < str.size(); i++) {
      // В методе Insert добавляем слово в дерево, расширяя его при необходимости
      if (current->children[str.at(i) - 'a'] == nullptr) {
         current->children[str.at(i) - 'a'] = new TrieNode;
         current->children[str.at(i) - 'a']->letter = str.at(i);
      }
      current = current->children[str.at(i) - 'a'];
   }
   current->end_of_word = true;
}
// В методе Search ищем слово в дереве по префиксу
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
// В методе PrintLexical рекурсивно выводим слова с указанным префиксом в лексическом порядке
void Trie::ShowLex(TrieNode* current, string prefix, string suffix) {
   if (current->end_of_word and suffix.size() != 0) {
      cout << prefix + suffix << endl;
   }
   for (int i = 0; i < 26; i++) {
      string temp = suffix;
      if (current->children[i]) {
         temp += current->children[i]->letter;
         ShowLex(current->children[i], prefix, temp);
      }
   }
}
