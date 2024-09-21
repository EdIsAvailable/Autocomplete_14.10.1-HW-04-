#include "TrieNode.h"
#include<iostream>
#include<string>

TrieNode::TrieNode(char letter)
{
	_letter = letter;
	childNodes = new array<TrieNode, 26>();
	letters = new TrieNode[26]();
}