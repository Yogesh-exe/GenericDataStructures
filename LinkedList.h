#include "LinkedListNode.h"

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

template <typename T1>
class LinkedList {
LinkedListNode<T1>* head;
LinkedListNode<T1>* tail;
public:
	LinkedList(){head =nullptr; tail =nullptr;}
	virtual ~LinkedList(){}
	void insert(T1);
	void insert(T1,int position);
	void print();
};


template<typename T1>
inline void LinkedList<T1>::insert(T1 data) {
	LinkedListNode<T1> *node = new LinkedListNode<T1>(data);
	if(head==nullptr){
		head=node;
	}
	else
	{
		LinkedListNode<T1>* temp =head;
		while(temp->getNext())
			temp= temp->getNext();
	temp->setNext(node);

	}
}


template<typename T1>
inline void LinkedList<T1>::insert(T1 data,int position) {

	LinkedListNode<T1> *node = new LinkedListNode<T1>(data);
	if(head==nullptr){
		head=node;
		throw "List was empty";
	}
	else
	{
		LinkedListNode<T1>* temp =head;
		while(temp->getNext() && --position)
			temp= temp->getNext();
	node->setNext(temp->getNext());
	temp->setNext(node);

	}

}

template<typename T1>
inline void LinkedList<T1>::print() {
	LinkedListNode<T1> *temp =head;
	while(temp)
	{
		std::cout<<temp->getData();
		temp = temp->getNext();
}
}

#endif /* LINKEDLIST_H_ */
