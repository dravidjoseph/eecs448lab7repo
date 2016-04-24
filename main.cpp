/*******************************************************
* @file: main.cpp
* @author: Dravid Joseph
* @date: 9/14/15
* @brief: Driver for LinkedList Program
********************************************************/

#include "LinkedList.h"
#include "Test.h"

#include <iostream>



/*******************************************************
* @pre :  None
* @post : Prints Menu (does not do anything else)
* @return : void
********************************************************/

int main(){
	
	Test myTest = Test();
	
	myTest.runTests();
	
	//Destructor test-use valgrind to check for memory leaks
	LinkedList<int>* ll = new LinkedList<int>();
	
	for(int i = 0; i < 100;i++){
		ll->addFront(35);
	}
	
	delete ll;
	ll = nullptr;
	 
	
	
	return 0;

}