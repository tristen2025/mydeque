/*
 * main.cpp
 *
 *  Created on: Mar 15, 2017
 *      Author: Tristen
 */


#include<iostream>
#include"mydeque.h"

using namespace my_deque;

using namespace std;

int main(){

	cout<<"hell0 \n";
	mydeque d;
	d.push_back(5);
	cout<<d.get_back()<<"\n";
	d.push_back(6);
	cout<<d.get_back()<<"\n";

	d.push_back(7);
	d.push_back(7);
	d.push_back(5);
	d.push_back(1);
/*	d.push_back(8);
	d.push_back(4);
	d.push_back(4);
	d.push_back(4);
	d.push_back(67);*/
	//d.debug_print();
	//cout<<d.get_back()<<"\n";
	//d.push_back(56);
	//cout<<d.get_back()<<"\n";
	//cout<<d.get_front()<<"\n";





	cout<<"did not seqfualt \n";


	return 0;
}
