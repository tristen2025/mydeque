/*
 * mydeque.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: Tristen
 */
#include<cassert>
#include "mydeque.h"
namespace my_deque {
mydeque::mydeque() {
	// TODO Auto-generated constructor stub
	block_pointers = new vtp[10];
	first_bp = block_pointers + 2;
	last_bp = first_bp;
	*first_bp = new value_type[BLOCK_SIZE];
	front_ptr = *first_bp;
	back_ptr = front_ptr;
	std::cout<<"hi \n";




}
void mydeque::push_back(value_type a){
	std::cout<<"pushing "<<a<<"\n";
	if(*last_bp+BLOCK_SIZE-1 == back_ptr){
		std::cout<<"making new list"<<"\n";
		last_bp++;
		*last_bp = new value_type[BLOCK_SIZE];
		back_ptr = *last_bp;
		*back_ptr = a;
		//back_ptr++;
		//std::cout<<*last_bp[0]<<"\n";
///
	}
	else{
		back_ptr++;
		*back_ptr = a;


	}



}
void mydeque::push_front(value_type a){
	if(front_ptr == *first_bp){
	  *first_bp--;
		*first_bp = new value_type[BLOCK_SIZE];
		front_ptr = *first_bp+BLOCK_SIZE-1;
		*front_ptr = a;



	}
	else{
		front_ptr--;
		*front_ptr = a;


	}


}


mydeque::~mydeque() {
	// TODO Auto-generated destructor stub
	for(int i =0; i< 10;i++){
		//delete block_pointers+i;
		//delete block_pointers;
		vtp* cursor = first_bp;
		while(cursor != last_bp){
			vtp* del_c = cursor++;
			delete[] *del_c;

		}
		delete[] *first_bp;
		delete[] *last_bp;

		delete first_bp;
		delete last_bp;
		delete[]  block_pointers;

	}
}


void mydeque::pop_back(){
	assert(back_ptr != NULL);
	if(back_ptr == front_ptr){


		delete[] front_ptr;

	}
	else if(back_ptr == *last_bp){
		--last_bp;
		back_ptr = (*last_bp)+(BLOCK_SIZE-1);


	}
	else{
		--back_ptr;

	}




}
mydeque::value_type mydeque::get_back(){

	return *back_ptr;


}
mydeque::value_type mydeque::get_front(){
	return *front_ptr;



}
void mydeque::debug_print(){
	vtp* cursor = first_bp;
	while(first_bp != last_bp+1){
		vtp cursor_in = *cursor;
		while(cursor_in != *cursor+ BLOCK_SIZE){
			std::cout<<*cursor_in<<" ";

		}
		std::cout<<"\n";


	}



}


};//enf od namespace
