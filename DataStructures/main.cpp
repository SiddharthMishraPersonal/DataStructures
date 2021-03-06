//
//  main.cpp
//  DataStructures
//
//  Created by Siddharth Mishra on 7/18/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#include <iostream>
#include "SinglyLinkedList.h"
#include "Node.h"
#include "TestDataStructures.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    TestDataStructures* test = new TestDataStructures();
    
    // Test SinglyLinkedList
    std::cout << "Running SinglyDataStructure test.\n";
    test->SinglyLinkedListOperations();
    
    // Test DoublyLinkedList
    std::cout << "Running DoublyLinkedList test.\n";
    test->DoubltLinkedListOperations();
    
    std::cout << "Running Heap test.\n";
    test->HeapOperations();
    
    return 0;
}

