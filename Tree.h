#pragma once
#include<iostream>
#include<string>

using namespace std;

class Tree
{
public: 
	Tree() = default;
	~Tree();
		const int AlfabetSize = 26;
		const string getWord(void);
		void Searching();
		void Sorting();
		void Show();
		void AddWord(string word);
		string* GetWordList(string wordPart);
      
private:
	   string _word;
		string _wordPart;
};

