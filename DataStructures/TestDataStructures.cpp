//
//  TestDataStructures.cpp
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#include "TestDataStructures.h"
#include "Node.h"
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

void TestDataStructures::SinglyLinkedListOperations(){
    SinglyLinkedList* list = new SinglyLinkedList();
    
    list->InsertInMiddle(9);
    list->InsertInMiddle(3);
    list->InsertAtEnd(5);
    list->InsertInMiddle(8);
    list->InsertInMiddle(7);
    list->InsertInMiddle(4);
    std::cout << "\nThe List.\n";
    list->DisplayList();
    std::cout << "\n";
    
    
    Node* deletedNode = list->DeleteNode(8);
    std::cout << "Deleted Node: ";
    std::cout << deletedNode->GetData();
    std::cout << "\n";
    std::cout << "\n";
    list->DisplayList();
    std::cout << "\n";
     
    deletedNode = list->DeleteFromBegin();
    std::cout << "Deleted Node: ";
    std::cout << deletedNode->GetData();
    std::cout << "\n";
    std::cout << "\n";
    list->DisplayList();
    std::cout << "\n";
     
    deletedNode = list->DeleteFromEnd();
    std::cout << "Deleted Node: ";
    std::cout << deletedNode->GetData();
    std::cout << "\n";
    std::cout << "\n";
    list->DisplayList();
    std::cout << "\n";
    
    list->ReverseList();
    std::cout << "\n";
    std::cout << "\nReverse of the List.\n";
    list->DisplayList();
    std::cout << "\n";

}

void TestDataStructures::DoubltLinkedListOperations(){
    DoublyLinkedList* list = new DoublyLinkedList();
    
    // Display
    list->Display();
    
    std::cout << "Insert at beginning.\n";
    // Insert at begining
    list->InsertAtBeginning(3);
    list->InsertAtBeginning(4);
    list->InsertAtBeginning(2);
    list->InsertAtBeginning(6);
    list->InsertAtBeginning(8);
    
    // Display
    list->Display();
    
    std::cout << "Insert at End.\n";
    // Insert at begining
    list->InsertAtEnd(3);
    list->InsertAtEnd(4);
    list->InsertAtEnd(2);
    list->InsertAtEnd(6);
    list->InsertAtEnd(8);
    
    // Display
    list->Display();
    
    list = new DoublyLinkedList();
    
    std::cout << "Insert at Middle.\n";
    // Insert at begining
    list->InsertInMiddle(3);
    list->InsertInMiddle(4);
    list->InsertInMiddle(2);
    list->InsertInMiddle(6);
    list->InsertInMiddle(8);
    
    // Display
    list->Display();
}

void TestDataStructures::HeapOperations(){
    
}
