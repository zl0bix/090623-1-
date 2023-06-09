#include"List.h"
#include"Node.h"


int main() {
	List list;
	list.AddHead(10);
	list.AddTail(20);
	list.ShowListFromHead();
	list.ShowListFromTail();

	list.DeleteElement(2);
}