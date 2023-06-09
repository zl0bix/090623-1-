#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<iterator>
class Node {

	int _data;
public:
	Node(int data);
	Node* next;
	Node* prev;
	int GetData();
	~Node();
};
