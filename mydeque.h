/*
 * mydeque.h
 *
 *  Created on: Mar 15, 2017
 *      Author: Tristen
 */

#ifndef MYDEQUE_H_
#define MYDEQUE_H_
#include<iostream>
namespace my_deque{
class mydeque {
public:

	static const std::size_t BLOCK_SIZE = 5;
	typedef int value_type;
	typedef value_type* vtp;

	vtp* block_pointers;
	vtp* block_pointers_end;

	vtp* first_bp;

	vtp* last_bp;

	vtp front_ptr;
	vtp back_ptr;


	mydeque();
	virtual ~mydeque();
	void push_back(value_type a);
	void push_front(value_type a);
	void pop_back();
	value_type get_back();
	value_type get_front();
	void debug_print();
};

};

#endif /* MYDEQUE_H_ */
