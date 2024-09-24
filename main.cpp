#include "TrieNode.h"
#include<iostream>
using namespace std;

int main() {
   setlocale(LC_ALL, "");
   // ������� ������ Trie
   Trie T;

   // ��������� ��������� ���� � ������ (��������)
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

   cout << "������� ������ �����" << endl;
   string prefix;
   cin >> prefix;

   TrieNode* current = T.Search(prefix);

   // ������� �� ������
   if (current == NULL or current == &T.root) {
      cout << "�� ������� ���� � ��������������� ���������" << endl;
   }
   else {
    
      // ������� ��� ������ � ������, ����� �������� ��������
      bool haschildren = false;
      for (int c = 0; c < 26; c++) {
         if (current->children[c] != NULL) {
            haschildren = true; break;
         }
      }
      // �� ������� ���� � ��������� (������ ������ �������)
      if (haschildren == false) {
         cout << "�� ������� ���� � ��������������� ���������" << endl;
      }
      else {
         cout << "�����, ������������ ��: " << prefix << endl;
         T.ShowLex(current, prefix, "");
      }
   }
   return 0;
}
