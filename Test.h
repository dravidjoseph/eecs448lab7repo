/*******************************************************
* @file: Test.h
* @author: Dravid Joseph
* @date: 4/18/16
* @brief: Header file for Test Class
********************************************************/
#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <string>
#include <sstream>

#include "LinkedList.h"

class Test{

	/***************************************************************
	* PUBLIC METHODS
	****************************************************************
	****************************************************************
	* 
	* All methods needed to check the test code.
	*
	*
	*
	*
	****************************************************************/
	
	
public:
	

	
	/***************************************************************
	* @pre :  None
	* @post : Container method to run all of the tests
	* @return : void-prints results to console
	* @scope: ONLY METHOD USER CAN ACCESS
	****************************************************************/
	
	void runTests();
		
private:	
	
	/*==============================================================
	* PRINTING FUNCTIONS: Any function that prints to console
	* CALLS ALL FUNCTIONS
	**=============================================================*/
	
	/***************************************************************
	* @pre :  None
	* @post : Prints header and testing rules
	* @return : void
	****************************************************************/
	void printHeader();
	
	/***************************************************************
	* @pre :  None
	* @post : Calls isEmpty() tests and formats result to console
	* @return : void
	****************************************************************/
	void printIsEmptyTests();
	
	
	/***************************************************************
	* @pre :  None
	* @post : Calls size() tests and formats result to console
	* @return : void
	****************************************************************/
	void printSizeTests();
	
	/***************************************************************
	* @pre :  None
	* @post : Calls search(value) tests and formats result to console
	* @return : void
	****************************************************************/
	void printSearchTests();
	
	/***************************************************************
	* @pre :  None
	* @post : Calls addBack() tests and formats result to console
	* @return : void
	****************************************************************/
	void printAddBackTests();
	
	/***************************************************************
	* @pre :  None
	* @post : Calls addFront() tests and formats result to console
	* @return : void
	****************************************************************/
	void printAddFrontTests();
	
	/***************************************************************
	* @pre :  None
	* @post : Calls removeBack() tests and formats result to console
	* @return : void
	****************************************************************/
	void printRemoveBackTests();
	
	/***************************************************************
	* @pre :  None
	* @post : Calls removeFront() tests and formats result to console
	* @return : void
	****************************************************************/
	void printRemoveFrontTests();
	

	
	/*=======================================================
	* isEmpty() TEST FUNCTIONS
	**=======================================================*/

	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether isEmpty() return true on empty list
	* @return : returns a "PASS" string if it does, "FAIL" otherwise
	****************************************************************/
	std::string isEmptyOnEmptyList();
	
	/***************************************************************
	* @pre :  Assumes addFront(value) is working properly (see tests)
	* @post : Tests whether isEmpty() return false on populated list
	* @return : returns a "PASS" string if it does, "FAIL" otherwise
	****************************************************************/
	std::string isEmptyOnPopulatedList();
	
	/*=======================================================
	* size() TEST FUNCTIONS
	**=======================================================*/
	
	/***************************************************************
	* @pre :  Assumes addFront() is working properly (see tests)
	* @post : Tests for what size() returns
	* @return : returns what it thinks the size of the list is
	****************************************************************/
	int testSize(int length);
	
	
	/*=======================================================
	* search(value) TEST FUNCTIONS
	**=======================================================*/
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether search(value) returns false on empty list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string searchOnEmptyList();
	
	/***************************************************************
	* @pre :  Assumes addFront() is working properly (see tests)
	* @pre : valid boolean
	* @post : Test whether search can return correct boolean in a 1-element list
	* @post : if value is in the list, does search return true
	* @post : If value is not in the list, does search return false
	* @return : "PASS" if it accomplishes the post condition, "FAIL" otherwise 
	****************************************************************/
	std::string searchOnOneElementList(bool flag);
	
	/***************************************************************
	* @pre :  Assumes addFront() is working properly (see tests)
	* @pre : valid boolean
	* @post : Test whether search can return correct boolean in a 2+-element list
	* @post : if value is in the list, does search return true
	* @post : If value is not in the list, does search return false
	* @return : "PASS" if it accomplishes the post condition, "FAIL" otherwise 
	****************************************************************/
	std::string searchOnMultipleElementList(bool flag);
	
	/*=======================================================
	* addBack(value) TEST FUNCTIONS
	**=======================================================*/
	
	/*===============
	* LOGICAL TESTING
	**=============*/
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether addBack bool returns true when value added
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addBackValueOnEmptyList();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether addBack successfully increments size
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addBackValueOnEmptyListChangesSize();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether addBack bool returns true when called with value
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addBackValueOnPopulatedList();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether addBack successfully increments size
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addBackValueOnPopulatedListChangesSize();
	
	/*=====================
	* OBSERVATIONAL TESTING
	**===================*/
	
	/***************************************************************
	* @pre :  Valid number of addBack calls (1-7)
	* @post : Calls addBack the specified number of times, the prints result
	* @post : formats list numbers in a console-friendly format
	* @return : a string containg list elements from left (head) to right(tail)
	****************************************************************/
	std::string prettyPrintAddBack(int calls);
	
	
	/***************************************************************
	* @pre :  Valid number of addBack calls (1-7)
	* @post : Calls addBack the specified number of times
	* @post : Determines whether addBack adds element successfully to back of list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addBackPerformance(int calls);
	
	/*=======================================================
	* addBack(value) TEST FUNCTIONS
	**=======================================================*/
	
	/*===============
	* LOGICAL TESTING
	**=============*/
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether addFront bool returns true when value is added
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addFrontValueOnEmptyList();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether addFront successfully increases size on call on empty list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addFrontValueOnEmptyListChangesSize();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : Tests whether addFront bool returns true when value is added
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addFrontValueOnPopulatedList();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : addFront successfully increases size on call on populated list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addFrontValueOnPopulatedListChangesSize();
	
	/*=====================
	* OBSERVATIONAL TESTING
	**===================*/
	
	/***************************************************************
	* @pre :  Valid number of addFront calls (1-6)
	* @post : Calls addFront the specified number of times, the prints result
	* @post : formats list numbers in a console-friendly format
	* @return : a string containg list elements from left (head) to right(tail)
	****************************************************************/
	std::string prettyPrintAddFront(int calls);
	
	/***************************************************************
	* @pre :  Valid number of addBack calls (1-6)
	* @post : Calls addFront the specified number of times
	* @post : Determines whether addFront adds element successfully to front of list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string addFrontPerformance(int calls);
	
	/*=======================================================
	* removeBack() TEST FUNCTIONS
	**=======================================================*/
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeBack() returns false on empty list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string checkRemoveBackOnEmptyList();
	
	/***************************************************************
	* @pre :  Assumes addFront() works
	* @post : check that removeBack() returns true on list with one element
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string checkRemoveBackOnListWithOneElement();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeBack() returns true on list with multiple elements
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string checkRemoveBackOnListWithMultipleElements();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeBack() decrements size by one after call
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeBackOnEmptyListChangeSize();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeBack() decrements size by one after call
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeBackOnListWithOneElementChangeSize();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeBack() decrements size by one after call
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeBackOnListWithManyElementChangeSize();
	
	/***************************************************************
	* @pre :  Assumes addFront(value) works properly
	* @post : check that removeBack() removes on a one-element list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeBackOneElementList();
	
	/***************************************************************
	* @pre :  Assumes addFront(value) works properly
	* @post : check that removeBack() removes from back on multielement list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeBackMultipleElementList();
	
	/*=====================
	* OBSERVATIONAL TESTING
	**===================*/
	
	/***************************************************************
	* @pre :  valid number of calls (1-7)
	* @post : removeBack for number of calls.
	* @return : list vector
	****************************************************************/
	std::vector<int> removeFromBack(int calls);
	
	/***************************************************************
	* @pre :  Assumes removeFromBack(calls) works
	* @post : takes vector and sends it to prettyPrint
	* @return : string from prettyPrint
	****************************************************************/
	std::string prettyPrintBack(int calls);
	
	/***************************************************************
	* @pre :  Assumes removeFromBack(calls) works
	* @post : checks if removeFromBack is removing from back
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std:: string removeBackPerformance(int calls);
	
	/*=======================================================
	* addBack(value) TEST FUNCTIONS
	**=======================================================*/
	
	/*===============
	* LOGICAL TESTING
	**=============*/
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeFront() returns false on empty list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string checkRemoveFrontOnEmptyList();
	
	/***************************************************************
	* @pre :  Assumes addFront() works
	* @post : check that removeFront() returns true on list with one element
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string checkRemoveFrontOnListWithOneElement();
	
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeFront() returns true on list with multiple elements
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string checkRemoveFrontOnListWithMultipleElements();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeFront() decrements size by one after call
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeFrontOnEmptyListChangeSize();
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeFront() returns true on list with multiple elements
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeFrontOnListWithOneElementChangeSize();
	
	
	/***************************************************************
	* @pre :  Assumes constructor has properly initialized the list
	* @post : check that removeFront() decrements size by one after call
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeFrontOnListWithManyElementChangeSize();
	
	
	/***************************************************************
	* @pre :  Assumes addFront(value) works properly
	* @post : check that removeFront() removes on a one-element list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeFrontOneElementList();
	
	/***************************************************************
	* @pre :  Assumes addFront(value) works properly
	* @post : check that removeFront() removes from back on multielement list
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std::string removeFrontMultipleElementList();
	
	/*=====================
	* OBSERVATIONAL TESTING
	**===================*/
	
	/***************************************************************
	* @pre :  valid number of calls (1-7)
	* @post : removeFront for number of calls.
	* @return : list vector
	****************************************************************/
	std::vector<int> removeFromFront(int calls);
	
	/***************************************************************
	* @pre :  Assumes removeFromFront(calls) works
	* @post : takes vector and sends it to prettyPrint
	* @return : string from prettyPrint
	****************************************************************/
	std::string prettyPrintFront(int calls);
	
	/***************************************************************
	* @pre :  Assumes removeFromFront(calls) works
	* @post : checks if removeFromBack is removing from back
	* @return : returns "PASS" if it does, "FAIL" otherwise
	****************************************************************/
	std:: string removeFrontPerformance(int calls);
	
	
	/*=======================================================
	* HELPER FUNCTIONS
	**=======================================================*/
	
	/***************************************************************
	* @pre :  Assumes constructor initializes correctly
	* @post : Creates the standard 7 item linked list to be used
	* @return : linked list
	****************************************************************/
	LinkedList<int> generateLinkedList();
	
	/***************************************************************
	* @pre :  Valid integer vector
	* @post : spits vector out into a string
	* @return : string
	****************************************************************/
	std::string prettyPrint(std::vector<int> vec);
};
#endif