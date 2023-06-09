#include"Node.h"
Node::Node(int data): _data(data),next(nullptr),prev(nullptr){}
int Node::GetData() {return _data;}

Node::~Node() {
	std::cout << "Node delete" << '\n';
}
