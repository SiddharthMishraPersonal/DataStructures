//
//  SinglyLinkedList.h
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#ifndef __DataStructures__SinglyLinkedList__
#define __DataStructures__SinglyLinkedList__

#include <stdio.h>
#include "iostream"
#include "Node.h"

class SinglyLinkedList{
private:
    Node* headNode;
    
public:
    SinglyLinkedList(){
        headNode = new Node(0);
    }
    
    ~SinglyLinkedList(){
        headNode=nullptr;
    }
    
    void DisplayList();
    bool InsertAtBegin( int data);
    bool InsertAtEnd(int data);
    bool InsertInMiddle(int data);
    Node* DeleteFromEnd();
    Node* DeleteFromBegin();
    Node* DeleteNode(int data);
    void ReverseList();
};


#endif /* defined(__DataStructures__SinglyLinkedList__) */
