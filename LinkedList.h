#include "LinkedListNode.h"

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

template <typename T1>
class LinkedList {
LinkedListNode<T1>* head;
LinkedListNode<T1>* tail;
int _length;
public:
	LinkedList(){head =nullptr; tail =nullptr;_length=0;}
	virtual ~LinkedList(){
		LinkedListNode<T1> *temp=head;
		while(head)
		{
			temp=head;
			head = head->getNext();
			delete temp;
		}
		//delete temp;
	}
	void insert(T1);
	inline void insertAtHead(T1);
	void removeAtHead();
	void insert(T1,int position);
	void print();
	int length(){return _length;}
};



template<typename T1>
inline void LinkedList<T1>::insertAtHead(T1 data) {
	LinkedListNode<T1> *node = new LinkedListNode<T1>(data);
	if(head==nullptr){
		head=tail=node;
	}
	else
	{
		node->setNext(head);
		head=node;
	}
	_length++;
}

template<typename T1>
inline void LinkedList<T1>::insert(T1 data) {
	LinkedListNode<T1> *node = new LinkedListNode<T1>(data);
	if(head==nullptr){
		head=tail=node;
	}
	else
	{
		tail->setNext(node);
	tail=node;
	}
	_length++;
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
	_length++;
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
