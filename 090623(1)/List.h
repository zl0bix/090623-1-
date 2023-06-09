#pragma once
#include<iostream>
#include"Node.h"
class List {
	Node* _head;
	Node* _tail;
	int _size;
	bool AddMain(Node* node);
public:
	List();
	void AddTail(int data);

	void AddHead(int data);

	void ShowListFromHead();

	void ShowListFromTail();

	void DeleteAll();
	
	void DeleteElement(int index);

	Node* FindElements(int index);
};