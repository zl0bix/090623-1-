#include"List.h"

bool List::AddMain(Node* node){
	if (AddMain(node))return false;

	_head = node;
	_tail = node;
	_size++;
	return true;
}

List::List():_head(nullptr),_tail(nullptr),_size(0){}

void List::AddTail(int data) {
	Node* newNode = new Node(data);
	if (AddMain(newNode))return;
	
	newNode->next = _tail;
	_tail->prev = newNode;
	_tail = newNode;
	_size++;
	return;
}

void List::AddHead(int data) {
	Node* newHead = new Node(data);
	_size++;
	if (_head == nullptr) {
		_head = newHead;
		_tail = newHead;
		return;
	}
	_head->next = newHead;
	newHead->prev = _head;
	_head = newHead;
}

void List::ShowListFromHead(){
	if (_size == 0) {
		std::cout << "No elements" << std::endl;
		return;
	}
	for (auto node = _head; node != nullptr; node = node->prev)
		std::cout << node->GetData() << ' ';
	std::cout << std::endl;
}

void List::ShowListFromTail(){
	if (_size == 0) {
		std::cout << "No elements" << std::endl;
		return;
	}
	for (Node* node = _tail; node != nullptr; node = node->next)
		std::cout << node->GetData() << " ";
	std::cout << std::endl;
}

void List::DeleteAll(){
	for (Node* node = _tail; node != nullptr; ) {
		Node* tmp = node;
		node = node->next;
			delete(tmp);
			_size--;
	}
		
	std::cout << std::endl;
}

void List::DeleteElement(int index){
	if (index > _size || index <= 0) return;
	Node* node = _head;
	while (index != 0) {
		node = node->prev;
		index--;
	}
	delete(node);
}

Node* List::FindElements(int index){

	Node* node = _head;
	index--;
	while (index != 0) {
		node = node->prev;
		index--;
	}
	return node;
}
