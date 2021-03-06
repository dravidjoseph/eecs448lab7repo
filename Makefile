LinkedList: main.o Test.o
	g++ -g -std=c++11 main.o Test.o -o LinkedList
	
main.o: main.cpp LinkedList.h LinkedList.hpp Node.h Node.hpp
	g++ -g -std=c++11 -c main.cpp
	
Test.o: Test.h Test.cpp
	g++ -g -std=c++11 -c Test.cpp
	
clean:
	rm *.o LinkedList
	echo clean done