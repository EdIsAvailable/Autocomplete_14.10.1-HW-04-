#include "TrieNode.h"
#include<iostream>
using namespace std;

int main() {
   setlocale(LC_ALL, "");
   // Создаем объект Trie
   Trie T;

   // Вставляем несколько слов в дерево (словарик)
   T.Insert("we");
   T.Insert("walk");
   T.Insert("want");
   T.Insert("wish");
   T.Insert("wit");
   T.Insert("am");
   T.Insert("yo");
   T.Insert("will");
   T.Insert("wee");
   T.Insert("war");
   T.Insert("warp");
   T.Insert("win");

   cout << "Введите начало слова" << endl;
   string prefix;
   cin >> prefix;

   TrieNode* current = T.Search(prefix);

   // Префикс не найден
   if (current == NULL or current == &T.root) {
      cout << "Не найдено слов с соответствующим префиксом" << endl;
   }
   else {
    
      // Префикс был найден в дереве, ищием дочерние элементы
      bool haschildren = false;
      for (int c = 0; c < 26; c++) {
         if (current->children[c] != NULL) {
            haschildren = true; break;
         }
      }
      // Не найдено слов с префиксом (найден только префикс)
      if (haschildren == false) {
         cout << "Не найдено слов с соответствующим префиксом" << endl;
      }
      else {
         cout << "Слова, начинающееся на: " << prefix << endl;
         T.ShowLex(current, prefix, "");
      }
   }
   return 0;
}
