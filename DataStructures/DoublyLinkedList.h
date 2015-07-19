//
//  DoublyLinkedList.h
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#ifndef __DataStructures__DoublyLinkedList__
#define __DataStructures__DoublyLinkedList__

#include <stdio.h>
#include "Node.h"

class DoublyLinkedList{
private:
    Node* headNode;
public:
    DoublyLinkedList(){
        headNode = new Node(0);
        headNode->SetNext(nullptr);
        headNode->SetPrevious(nullptr);
    };
    ~DoublyLinkedList(){
        headNode=nullptr;
    };
    bool InsertAtBeginning(int data);
    bool InsertAtEnd(int data);
    bool InsertInMiddle(int data);
    
    void Display();
    
    Node* DeleteFromBeginning();
    Node* DeleteFromEnd();
    Node* DeleteNode(int data);
    
    void ReverseList();
};

#endif /* defined(__DataStructures__DoublyLinkedList__) */
