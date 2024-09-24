#include "Trie.h"
#include<iostream>
using namespace std;

int main() {
   setlocale(LC_ALL, "");
   Trie T;

   // Вставляем слово в строку
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

   // Ищем префикс в trie
   string prefix("wa");

   TrieNode* current = T.Search(prefix);

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
         cout << "Слово, начинающееся на: " << prefix << endl;
         T.PrintLexical(current, prefix, "");
      }
   }
   return 0;
}
