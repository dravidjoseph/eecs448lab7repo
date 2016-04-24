
#include "Test.h"
void Test::runTests(){
	
	printHeader();					//prints top of the screen
	
	printIsEmptyTests();		//print helper in depth test results
	
	printSizeTests();
	
	printSearchTests();				//print search test results
	
	printAddBackTests();		//print addBack in depth tests result
	
	printAddFrontTests();	//print AddFront initial results
	
	printRemoveBackTests();			//print removeBack() initial test results
	
	printRemoveFrontTests();		//print removeFront() initial test results

	

	
	
}

/*******************************************************
* PRINT METHODS
********************************************************/

void Test::printHeader(){
	std::cerr << "\n\n=========================\n";
	std::cerr << "   TEST SUITE    \n";
	std::cerr << "=========================\n\n";
	
	std::cerr << "\n\n=========================\n";
	std::cerr << "   RULES AND ASSUMPTIONS    \n";
	std::cerr << "=========================\n\n";
	
	std::cerr << "1. LinkedList code will be run through a series of tests.\n";
	std::cerr << "2. Constructor tested implicitly; Destructor tested through valgrind (run program with valgrind)\n";
	std::cerr << "3. Each test will be given a number, description, and a flag detailing whether it passed or not.\n";
	std::cerr << "4. Testing will consist of both logical (true/false) and observational tests.\n";
	std::cerr << "5. If code passes a logical test, it will be marked \"PASS\",otherwise, \"FAIL.\"\n";
	std::cerr << "6. Observational tests will provide output to show what the list is doing, as well as a performance assessment.\n";
	std::cerr << "7. Due to necessary code dependencies, isEmpty() and size() were initially tested in conjunction with addFront(value).\n";
	std::cerr << "8. The list: 35 25 10 15 20 40 95 will be used in all tests that require a populated list unless otherwise specified.\n";
	std::cerr << "9. Final bug report is provided in a text file.\n\n";
	
}

void Test::printIsEmptyTests(){
	
	std::cerr << "\n\n=========================\n";
	std::cerr << "  isEmpty() TESTING    \n";
	std::cerr << "=========================\n\n";
	
	std::cerr << "1. We know addFront() successfully adds members to the list from initial testing.\n";
	std::cerr << "2. Since adding 1 node using addFront(value) is the same as adding many nodes, one test should be sufficient\n\n\n";
	
	
	std::cerr << "| TEST |                   DESCRIPTION                   | PERFORMANCE? |\n";
	std::cerr << "-------------------------------------------------------------------------\n";
	std::cerr << "|  1   |isEmpty() returns true on an empty list          |     "<<isEmptyOnEmptyList()<< "     |\n";
	std::cerr << "|  2   |isEmpty() returns false on an populated (1+) list|     "<<isEmptyOnPopulatedList()<< "     |\n";
	std::cerr << "-------------------------------------------------------------------------\n";
	
}

void Test::printSizeTests(){
	std::cerr << "\n\n=========================\n";
	std::cerr << "  size() TESTING    \n";
	std::cerr << "=========================\n\n";
	
	std::cerr << "1. We need to find what size() is at various list sizes.\n";
	std::cerr << "2. We know addFront() successfully adds members to the list from initial testing.\n\n\n";
	
	
	std::cerr << "| TEST |                 DESCRIPTION                    | VALUES? |\n";
	std::cerr << "------------------------------------------------------------------\n";
	std::cerr << "|  3   |Check what size() returns on a list of size zero|    "<<testSize(0)<< "    |\n";
	std::cerr << "|  4   |Check what size() returns on a list of size 5   |    "<<testSize(5)<< "    |\n";
	std::cerr << "|  5   |Check what size() returns on a list of size 10  |    "<<testSize(10)<< "   |\n";
	std::cerr << "|  6   |Check what size() returns on a list of size 15  |    "<<testSize(15)<< "   |\n";
	std::cerr << "|  7   |Check what size() returns on a list of size 20  |    "<<testSize(20)<< "   |\n";
	std::cerr << "|  8   |Check what size() returns on a list of size 100 |    "<<testSize(100)<< "  |\n";
	std::cerr << "|  9   |Check what size() returns on a list of size 300 |    "<<testSize(300)<< "  |\n";
	std::cerr << "|  10  |Check what size() returns on a list of size 500 |    "<<testSize(500)<< "  |\n";
	std::cerr << "|  11  |Check what size() returns on a list of size 1000|    "<<testSize(1000)<< " |\n";
	std::cerr << "|  12  |Check what size() returns on a list of size 1500|    "<<testSize(1500)<< " |\n";
	std::cerr << "------------------------------------------------------------------\n";
}

void Test::printSearchTests(){
	
	std::cerr << "\n\n=========================\n";
	std::cerr << "   search(value) TESTING    \n";
	std::cerr << "=========================\n\n";
	
	
	std::cerr << "--------------------------------------------------------------------------------------------\n";
	std::cerr << "| TEST |                             DESCRIPTION                             | PERFORMANCE? |\n";
	std::cerr << "--------------------------------------------------------------------------------------------\n";
	std::cerr << "|  13  |                   search(val) returns false on empty list           |     "<<searchOnEmptyList()<< "     |\n";
	std::cerr << "|  14  |  search(val) returns true on list of size 1 where val is in list    |     "<<searchOnOneElementList(true)<< "     |\n";
	std::cerr << "|  15  | search(val) returns false on list of size 1 where val is not in list|     "<<searchOnOneElementList(false)<< "     |\n";
	std::cerr << "|  16  |  search(val) returns true on list of size 2+ where val is in list   |     "<<searchOnMultipleElementList(true)<< "     |\n";
	std::cerr << "|  17  |search(val) returns false on list of size 2+ where val is not in list|     "<<searchOnMultipleElementList(false)<< "     |\n";
	std::cerr << "--------------------------------------------------------------------------------------------\n";
	
}

void Test::printAddBackTests(){
	
	std::cerr << "\n\n============================\n";
	std::cerr << "   addBack(value) TESTING   \n";
	std::cerr << "============================\n\n";
	
	std::cerr << "| TEST |                             DESCRIPTION                             | VALUES? |\n";
	std::cerr << "----------------------------------------------------------------------------------------\n";
	std::cerr << "|  18   |                      addBack() adds value to an empty list         |   "<<addBackValueOnEmptyList()<< "  |\n";
	std::cerr << "|  19   |                  addBack() increments size by 1 on empty list      |   "<<addBackValueOnEmptyListChangesSize()<< "  |\n";
	std::cerr << "|  20   |                  addBack() adds value to a populated (1+) list     |   "<<addBackValueOnPopulatedList()<< "  |\n";
	std::cerr << "|  21   |              addBack() increments size on a populated (1+) list    |   "<<addBackValueOnPopulatedListChangesSize()<< "  |\n";
	std::cerr << "----------------------------------------------------------------------------------------\n\n\n";
	
	std::cerr << "| TEST |# Calls|       EXPECTED        |     OBSERVED     |PERFORMANCE?|\n";
	std::cerr << "-----------------------------------------------------------------------\n";
	std::cerr << "|  22  |   1   |                   35  |"<<prettyPrintAddBack(1)<<"               |     "<<addBackPerformance(1)<<"   |\n";
	std::cerr << "|  23  |   2   |                35 25  |"<<prettyPrintAddBack(2)<<"            |     "<<addBackPerformance(2)<<"   |\n";
	std::cerr << "|  24  |   3   |             35 25 10  |"<<prettyPrintAddBack(3)<<"         |     "<<addBackPerformance(3)<<"   |\n";
	std::cerr << "|  25  |   4   |          35 25 10 15  |"<<prettyPrintAddBack(4)<<"      |     "<<addBackPerformance(4)<<"   |\n";
	std::cerr << "|  26  |   5   |       35 25 10 15 20  |"<<prettyPrintAddBack(5)<<"   |     "<<addBackPerformance(5)<<"   |\n";
	std::cerr << "|  27  |   6   |    35 25 10 15 20 40  |"<<prettyPrintAddBack(6)<<"|     "<<addBackPerformance(6)<<"   |\n";
	
	
	//35 25 10 15 20 40 95
}

void Test::printAddFrontTests(){
	
	std::cerr << "\n\n============================\n";
	std::cerr << "   addFront(value) TESTING   \n";
	std::cerr << "============================\n\n";
	
	std::cerr << "| TEST |                             DESCRIPTION                             | PERFORMANCE? |\n";
	std::cerr << "--------------------------------------------------------------------------------------------\n";
	
	std::cerr << "|  28  |             addFront() adds value to an empty list                  |     "<<addFrontValueOnEmptyList()<< "     |\n";
	std::cerr << "|  29  |             addFront() increments size by 1 on empty list           |     "<<addFrontValueOnEmptyListChangesSize()<< "     |\n";
	std::cerr << "|  30  |             addFront() adds value to a populated (1+) list          |     "<<addFrontValueOnPopulatedList()<< "     |\n";
	std::cerr << "|  31  |             addFront() increments size to a populated (1+) list     |     "<<addFrontValueOnPopulatedListChangesSize()<< "     |\n";
	std::cerr << "--------------------------------------------------------------------------------------------\n\n\n";
	
	std::cerr << "| TEST |# Calls|       EXPECTED        |     OBSERVED     |PERFORMANCE?|\n";
	std::cerr << "-----------------------------------------------------------------------\n";
	std::cerr << "|  32  |   1   |                   35  |"<<prettyPrintAddFront(1)<<"               |     "<<addFrontPerformance(1)<<"   |\n";
	std::cerr << "|  33  |   2   |                35 25  |"<<prettyPrintAddFront(2)<<"            |     "<<addFrontPerformance(2)<<"   |\n";
	std::cerr << "|  34  |   3   |             35 25 10  |"<<prettyPrintAddFront(3)<<"         |     "<<addFrontPerformance(3)<<"   |\n";
	std::cerr << "|  35  |   4   |          35 25 10 15  |"<<prettyPrintAddFront(4)<<"      |     "<<addFrontPerformance(4)<<"   |\n";
	std::cerr << "|  36  |   5   |       35 25 10 15 20  |"<<prettyPrintAddFront(5)<<"   |     "<<addFrontPerformance(5)<<"   |\n";
	std::cerr << "|  37  |   6   |    35 25 10 15 20 40  |"<<prettyPrintAddFront(6)<<"|     "<<addFrontPerformance(6)<<"   |\n";
	std::cerr << "------------------------------------------------------------------------\n";
	
	
}

void Test::printRemoveBackTests(){
	
	std::cerr << "\n\n=========================\n";
	std::cerr << "  removeBack() TESTING    \n";
	std::cerr << "=========================\n\n";
	
	
	std::cerr << "| TEST |                      DESCRIPTION                         | PERFORMANCE? |\n";
	std::cerr << "---------------------------------------------------------------------------------|\n";
	std::cerr << "|  38  |removeBack() returns false on an empty list               |     "<<checkRemoveBackOnEmptyList()<< "     |\n";
	std::cerr << "|  39  |removeBack() returns true on a list with 1 element        |     "<<checkRemoveBackOnListWithOneElement()<< "     |\n";
	std::cerr << "|  40  |removeBack() returns true on a list with multiple elements|     "<<checkRemoveBackOnListWithMultipleElements()<< "     |\n";
	std::cerr << "|  41  |removeBack() doesn't decrement the size on empty list     |     "<<removeBackOnEmptyListChangeSize()<< "     |\n";
	std::cerr << "|  42  |removeBack() decrements size by 1 on 1 element list       |     "<<removeBackOnListWithOneElementChangeSize()<< "     |\n";
	std::cerr << "|  43  |removeBack() decrements size by 1 on 2+ element list      |     "<<removeBackOnListWithManyElementChangeSize()<< "     |\n";
	std::cerr << "|  44  |removeBack() removes from front on 1 element list         |     "<<removeBackOneElementList()<< "     |\n";
	std::cerr << "--------------------------------------------------------------------------------\n\n\n";
	
	std::cerr << "1. We know removeBack() successfully decrements size, returns the correct boolean values on any size list, and works on a list of size 1.\n";
	std::cerr << "2. We need to show that removeBack() actually removes elements, and in the correct order.\n";
	std::cerr << "3. We use the list: 35 25 10 15 20 40 95 as the list to call removeBack() on.\n\n\n\n";
	
	std::cerr << "| TEST |# Calls|       EXPECTED        |     OBSERVED     |PERFORMANCE?|\n";
	std::cerr << "-----------------------------------------------------------------------\n";
	std::cerr << "|  45  |   2   |  35 25 10 15 20       |  "<<prettyPrintBack(2)<<" |     "<<removeBackPerformance(2)<<"   |\n";
	std::cerr << "|  46  |   3   |  35 25 10 15          |  "<<prettyPrintBack(3)<<"    |     "<<removeBackPerformance(3)<<"   |\n";
	std::cerr << "|  47  |   4   |  35 25 10             |  "<<prettyPrintBack(4)<<"       |     "<<removeBackPerformance(4)<<"   |\n";
	std::cerr << "|  48  |   5   |  35 25                |  "<<prettyPrintBack(5)<<"          |     "<<removeBackPerformance(5)<<"   |\n";
	std::cerr << "|  49  |   6   |  35                   |  "<<prettyPrintBack(6)<<"             |     "<<removeBackPerformance(6)<<"   |\n";
	std::cerr << "|  50  |   7   |                       |  "<<prettyPrintBack(7)<<"                |     "<<removeBackPerformance(7)<<"   |\n";
	std::cerr << "------------------------------------------------------------------------\n";
	
	
}

void Test::printRemoveFrontTests(){
	
	std::cerr << "\n\n=========================\n";
	std::cerr << "  removeFront() TESTING    \n";
	std::cerr << "=========================\n\n";
	

	
	std::cerr << "| TEST |                             DESCRIPTION                             | PERFORMANCE? |\n";
	std::cerr << "---------------------------------------------------------------------------------------------\n";
	std::cerr << "|  51  |                   removeFront() returns false on an empty list      |     "<<checkRemoveFrontOnEmptyList()<< "     |\n";
	std::cerr << "|  52  |             removeFront() returns true on a list with 1 element     |     "<<checkRemoveFrontOnListWithOneElement()<< "     |\n";
	std::cerr << "|  53  |         removeFront() returns true on a list with multiple elements |     "<<checkRemoveFrontOnListWithMultipleElements()<< "     |\n";
	std::cerr << "|  54  |             removeFront() doesn't decrement the size on empty list  |     "<<removeFrontOnEmptyListChangeSize()<< "     |\n";
	std::cerr << "|  55  |               removeFront decrements size by 1 on 1 element list    |     "<<removeFrontOnListWithOneElementChangeSize()<< "     |\n";
	std::cerr << "|  56  |               removeFront decrements size by 1 on 2+ element list   |     "<<removeFrontOnListWithManyElementChangeSize()<< "     |\n";
	std::cerr << "|  57  |               removeFront removes from front on 1 element list      |     "<<removeFrontOneElementList()<< "     |\n";
		std::cerr << "---------------------------------------------------------------------------------------------\n\n\n";
	
	
	std::cerr << "1. We know removeFront() successfully decrements size, returns the correct boolean values on any size list, and works on a list of size 1.\n";
	std::cerr << "2. We need to show that removeFront() actually removes elements, and in the correct order.\n";
	std::cerr << "3. We use the list: 35 25 10 15 20 40 95 as the list to call removeFront() on.\n\n\n\n";
	  
	std::cerr << "| TEST |# Calls|       EXPECTED        |     OBSERVED     |PERFORMANCE?|\n";
	std::cerr << "-----------------------------------------------------------------------\n";
	std::cerr << "|  58  |   2   |     10 15 20 40 95    |  "<<prettyPrintFront(2)<<" |     "<<removeFrontPerformance(2)<<"   |\n";
	std::cerr << "|  59  |   3   |        15 20 40 95    |  "<<prettyPrintFront(3)<<"    |     "<<removeFrontPerformance(3)<<"   |\n";
	std::cerr << "|  60  |   4   |           20 40 95    |  "<<prettyPrintFront(4)<<"       |     "<<removeFrontPerformance(4)<<"   |\n";
	std::cerr << "|  61  |   5   |              40 95    |  "<<prettyPrintFront(5)<<"          |     "<<removeFrontPerformance(5)<<"   |\n";
	std::cerr << "|  62  |   6   |                 95    |  "<<prettyPrintFront(6)<<"             |     "<<removeFrontPerformance(6)<<"   |\n";
	std::cerr << "|  63  |   7   |                       |  "<<prettyPrintFront(7)<<"                |     "<<removeFrontPerformance(7)<<"   |\n";
	std::cerr << "------------------------------------------------------------------------\n";

}


/*******************************************************
* isEmpty() Tests
********************************************************/

std::string Test::isEmptyOnEmptyList(){
	
	LinkedList<int> list;

	return list.isEmpty() ? "PASS":"FAIL";
	
}

std::string Test::isEmptyOnPopulatedList(){
	LinkedList<int> list = generateLinkedList();
	
	return !list.isEmpty() ? "PASS":"FAIL";
}

/*******************************************************
* size() Tests
********************************************************/

int Test::testSize(int length){
	
	LinkedList<int> list;
	
	//Add predetermined number of nodes
	for(int i = 0; i < length; i++){
		list.addFront(18);
	}
	
	return list.size();
	
}

/*******************************************************
*search(value) Tests
********************************************************/

std::string Test::searchOnEmptyList(){
	LinkedList<int> list;
	
	return !list.search(25) ? "PASS":"FAIL";
	
}

std::string Test::searchOnOneElementList(bool flag){
	
	LinkedList<int> list;
	list.addFront(35);
	
	//depending on whether element is or is not in the list, pass or fail
	return flag ? (list.search(35) ? "PASS":"FAIL"):(!list.search(28) ? "PASS":"FAIL");
}

std::string Test::searchOnMultipleElementList(bool flag){
	//generate full linked list
	LinkedList<int> list = generateLinkedList();
	//depending on whether you want the value found, pass or fail.
	return flag ? (list.search(20) ? "PASS":"FAIL"):(!list.search(83) ? "PASS":"FAIL");
}


/*******************************************************
* addBack(value) Tests
********************************************************/

std::string Test::addBackValueOnEmptyList(){
	LinkedList<int> list;
	
	list.addBack(7);

	std::vector<int> vec = list.toVector();
	
	return 7 == vec[0] ? "PASS":"FAIL";
}

std::string Test::addBackValueOnEmptyListChangesSize(){
	LinkedList<int> list;
	
	//size() returns an integer 
	int mySize = list.size();
	
	list.addBack(35);
	
	//use results from size testing to infer that size is just adding 1 to the actual length of the list
	return mySize + 1 == list.size() ? "PASS":"FAIL";
	
}

std::string Test::addBackValueOnPopulatedList(){
	LinkedList<int> list = generateLinkedList();
	
	list.addBack(96);
	std::vector<int> vec = list.toVector();
	
	//check that 95 (last value generated) and 96 are the last two elements of list
	return 95 == vec[vec.size()-2] && 96 == vec[vec.size()-1] ? "PASS":"FAIL";

}

std::string Test::addBackValueOnPopulatedListChangesSize(){
	LinkedList<int> list = generateLinkedList();
	
	//DOES NOT ASSUME SIZE WORKS, just that size returns an integer 
	int mySize = list.size();
	
	list.addBack(86);
	
	std::vector<int> vec = list.toVector();
	
	//we know mySize is one more than the actualy size
	return mySize == vec.size() ? "PASS":"FAIL";
}


std::string Test::prettyPrintAddBack(int calls){
	//generated list
	LinkedList<int> list = generateLinkedList();
	//empty list
	LinkedList<int> list2;
	
	//convert to vector
	std::vector<int> vec = list.toVector();
	
	//add list items to second list using addBack(), up until calls
	for(int i = 0; i < calls;i++){
		list2.addBack(vec[i]);
	}
	
	//convert added list to vector
	std::vector<int> vec2 = list2.toVector();
	
	//send vector to be printed to a string
	return prettyPrint(vec2);
}

std::string Test::addBackPerformance(int calls){
	
	LinkedList<int> list = generateLinkedList();
	LinkedList<int> list2;
	
	bool compare = true;
	
	std::vector<int> vec = list.toVector();
	
	for(int i = 0; i < calls;i++){
		list2.addBack(vec[i]);
	}
	
	std::vector<int> vec2 = list2.toVector();
	
	for(int i = 0; i < vec2.size();i++){
		if(vec[i] != vec2[i]){
			compare = false;
		}
	}
	
	
	return compare ? "PASS":"FAIL";
	
	
		
}

/*******************************************************
* addFront(value) Tests
********************************************************/

std::string Test::addFrontValueOnEmptyList(){
	LinkedList<int> list;
	
	list.addFront(7);

	std::vector<int> vec = list.toVector();
	
	return 7 == vec[0] ? "PASS":"FAIL";
}

std::string Test::addFrontValueOnEmptyListChangesSize(){
	LinkedList<int> list;
	
	//DOES NOT ASSUME SIZE WORKS, just that size returns an integer 
	int mySize = list.size();
	
	list.addFront(35);
	
	//use results from size testing to infer that size is just adding 1 to the actual length of the list
	return mySize + 1 == list.size() ? "PASS":"FAIL";
	
}

std::string Test::addFrontValueOnPopulatedList(){
	LinkedList<int> list = generateLinkedList();
	
	list.addFront(20);
	
	std::vector<int> vec = list.toVector();
	
	return 20 == vec[0] && 35 == vec[1] ? "PASS":"FAIL";
}

std::string Test::addFrontValueOnPopulatedListChangesSize(){
	LinkedList<int> list = generateLinkedList();
	
	//DOES NOT ASSUME SIZE WORKS, just that size returns an integer 
	int mySize = list.size();
	
	list.addFront(86);
	
	std::vector<int> vec = list.toVector();
	
	
	return mySize == vec.size() ? "PASS":"FAIL";	
}

std::string Test::prettyPrintAddFront(int calls){
	
	//35 25 10 15 20 40 95
	
	LinkedList<int> list = generateLinkedList();
	LinkedList<int> list2;
	
	std::vector<int> vec = list.toVector();
	
	for(int i = calls-1; i >= 0;i--){
		list2.addFront(vec[i]);
	}
	
	std::vector<int> vec2 = list2.toVector();
	
	
	return prettyPrint(vec2);
}

std::string Test::addFrontPerformance(int calls){
	LinkedList<int> list = generateLinkedList();
	LinkedList<int> list2;
	std::vector<int> vec = list.toVector();
	
	bool compare = true;
	
	for(int i = calls-1; i >=0;i--){
		list2.addFront(vec[i]);
	}
	
	std::vector<int> vec2 = list2.toVector();
	
	for(int i = 0; i < vec2.size();i++){
		if(vec[i] != vec2[i]){
			compare = false;
		}
	}
	
	return compare ? "PASS":"FAIL";
	
}

/*******************************************************
*removeBack() Tests
********************************************************/

std::string Test::checkRemoveBackOnEmptyList(){
	
	LinkedList<int> list;

	return !list.removeBack() ? "PASS":"FAIL";
	
	
}

std::string Test::checkRemoveBackOnListWithOneElement(){
	
	LinkedList<int> list;
	list.addFront(13);
	
	return list.removeBack() ? "PASS":"FAIL";
}

std::string Test::checkRemoveBackOnListWithMultipleElements(){
	
	LinkedList<int> list = generateLinkedList();
	
	return list.removeBack() ? "PASS":"FAIL";
}

std::string Test::removeBackOnEmptyListChangeSize(){
	LinkedList<int> list;
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeBack();
	vec2 = list.toVector();
	
	//compares an empty list to one that's had removeBack() applied
	return vec1.size() == vec2.size() ? "PASS":"FAIL";
}

std::string Test::removeBackOnListWithOneElementChangeSize(){
	LinkedList<int> list;
	list.addFront(13);
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeBack();
	vec2 = list.toVector();
	
	//compare a list with one element to one that has had removeBack() applied
	return vec1.size() == vec2.size() + 1 ? "PASS":"FAIL";
}

std::string Test::removeBackOnListWithManyElementChangeSize(){
	LinkedList<int> list = generateLinkedList();
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeBack();
	vec2 = list.toVector();
	
	//check that removeBack() removes elements on full list
	return vec1.size() == vec2.size() + 1 ? "PASS":"FAIL";
}

std::string Test::removeBackOneElementList(){
	LinkedList<int> list;
	list.addFront(13);
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeBack();
	vec2 = list.toVector();
	
	return vec2.size() == 0 ? "PASS":"FAIL";
}

std::string Test::removeBackMultipleElementList(){
	LinkedList<int> list = generateLinkedList();

	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeBack();
	vec2 = list.toVector();
	
	if(vec1[1] == vec2[0]){
		return "PASS";
	}
	else{
		return "FAIL";
	}
}


std::string Test::removeFrontPerformance(int calls){
	std::vector<int> vec1 = removeFromFront(calls);
	std::vector<int> vec2 = removeFromFront(0);
	
	bool compare = true;
	
	for(int i = 0; i < vec1.size();i++){
		if(vec1[i] != vec2[i+calls]){
			compare = false;
		}
	}

	return compare ? "PASS":"FAIL";
	
}

std::vector<int> Test::removeFromBack(int calls){
	LinkedList<int> list;
	
	std::vector<int> vec;
	
	vec.push_back(35);
	vec.push_back(25);
	vec.push_back(10);
	vec.push_back(15);
	vec.push_back(20);
	vec.push_back(40);
	vec.push_back(95);
	
	for(int i = vec.size()-1; i >= 0; i--){
		list.addFront(vec[i]);
	}
	
	for(int i = 0; i < calls;i++){
		bool holder = list.removeBack();
	}
	return list.toVector();
}

std::string Test::prettyPrintBack(int calls){
	
	std::vector<int> vec = removeFromBack(calls);
	
	return prettyPrint(vec);

}

std::string Test::removeBackPerformance(int calls){
	std::vector<int> vec1 = removeFromBack(calls);
	std::vector<int> vec2 = removeFromBack(0);
	
	bool compare = true;
	
	for(int i = 0; i < vec1.size();i++){
		if(vec1[i] != vec2[i
		]){
			compare = false;
		}
	}
	
	return compare ? "PASS":"FAIL";
	
}


/*******************************************************
*removeFront() Tests
********************************************************/

std::string Test::checkRemoveFrontOnEmptyList(){
	
	LinkedList<int> list;
	
	return !list.removeFront() ? "PASS":"FAIL";
	
	
}

std::string Test::checkRemoveFrontOnListWithOneElement(){
	LinkedList<int> list;
	list.addFront(13);
	
	return list.removeFront() ? "PASS":"FAIL";
}

std::string Test::checkRemoveFrontOnListWithMultipleElements(){
	
	LinkedList<int> list = generateLinkedList();

	return list.removeFront() ? "PASS":"FAIL";
	
}

std::string Test::removeFrontOnEmptyListChangeSize(){
	LinkedList<int> list;
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeFront();
	vec2 = list.toVector();
	
	return vec1.size() == vec2.size() ? "PASS":"FAIL";
}

std::string Test::removeFrontOnListWithOneElementChangeSize(){
	LinkedList<int> list;
	list.addFront(13);
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeFront();
	vec2 = list.toVector();
	
	return vec1.size() == vec2.size() + 1 ? "PASS":"FAIL";	
}

std::string Test::removeFrontOnListWithManyElementChangeSize(){
	LinkedList<int> list = generateLinkedList();
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeFront();
	vec2 = list.toVector();

	return vec1.size() == vec2.size() + 1 ? "PASS":"FAIL";
}

std::string Test::removeFrontOneElementList(){
	LinkedList<int> list;
	list.addFront(13);
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeFront();
	vec2 = list.toVector();
	
	return vec2.size() == 0 ? "PASS":"FAIL";
}

std::string Test::removeFrontMultipleElementList(){
	LinkedList<int> list = generateLinkedList();
	
	std::vector<int> vec1 = list.toVector();
	std::vector<int> vec2;
	bool holder = list.removeFront();
	vec2 = list.toVector();
	
	return vec1[1] == vec2[0] ? "PASS":"FAIL";
}

std::vector<int> Test::removeFromFront(int calls){
	
	LinkedList<int> list = generateLinkedList();
	
	for(int i = 0; i < calls;i++){
		bool holder = list.removeFront();
	}
	return list.toVector();
}

std::string Test::prettyPrintFront(int calls){
	
	std::vector<int> vec = removeFromFront(calls);
	
	return prettyPrint(vec);
}


/*******************************************************
*List generator
********************************************************/
LinkedList<int> Test::generateLinkedList(){
	//Generates the linked list 
	//35 25 10 15 20 40 95
	
	LinkedList<int> list;
	
	list.addFront(95);
	list.addFront(40);
	list.addFront(20);
	list.addFront(15);
	list.addFront(10);
	list.addFront(25);
	list.addFront(35);
	
	return list;
}

/********************
*Helper Methods
*********************/
std::string Test::prettyPrint(std::vector<int> vec){
	std::string pretty = "";
	//adds the contents of vector to the string
	for(int i = 0;i < vec.size(); i++){
		
		//taken from https://notfaq.wordpress.com/2006/08/30/c-convert-int-to-string/
		std::string s;
		std::stringstream out;
		out << vec[i];
		s = out.str(); 
		
		pretty.append(s);
		pretty.append(" ");
	}
	
	return pretty;
}