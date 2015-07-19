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

void TestDataStructures::SinglyLinkedListOperations(){
    SinglyLinkedList* list = new SinglyLinkedList();
    
    list->InsertInMiddle(9);
    list->InsertInMiddle(3);
    list->InsertInMiddle(5);
    list->InsertInMiddle(8);
    list->InsertInMiddle(7);
    list->InsertInMiddle(4);
    std::cout << "\nThe List.\n";
    list->DisplayList();
    std::cout << "\n";
    
    /*
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
     */
    
    list->ReverseList();
    std::cout << "\n";
    std::cout << "\nReverse of the List.\n";
    list->DisplayList();
    std::cout << "\n";

}
