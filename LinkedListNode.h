/*
 * LinkedListNode.h
 *
 *  Created on: 02-Dec-2019
 *      Author: yoges
 */

#ifndef LINKEDLISTNODE_H_
#define LINKEDLISTNODE_H_
template <typename T>
class LinkedListNode {
	T data;
	LinkedListNode *next;
public:
	LinkedListNode(){}
	LinkedListNode(T data):data(data){next = nullptr;}
	virtual ~LinkedListNode(){}

	T getData() const {
		return data;
	}

	void setData(T data) {
		this->data = data;
	}

	 LinkedListNode* getNext() {
		return next;
	}

	void setNext( LinkedListNode *next) {
		this->next = next;
	}
};

#endif /* LINKEDLISTNODE_H_ */
