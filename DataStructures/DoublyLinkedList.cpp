//
//  DoublyLinkedList.cpp
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved./Users/SidMac15/Box Sync/Technical/AppleOSx/GitHubRepos/DataStructures/DataStructures/DoublyLinkedList.cpp
//

#include "DoublyLinkedList.h"
#include "Node.h"
#include "iostream"

void DoublyLinkedList::Display(){
    try {
    
    if(headNode==nullptr || headNode->GetNext() == nullptr){
        std::cout << "\nList is empty.\n";
        return;
    }
    
    std::cout << "\nDoubly List has following nodes:\n";
    Node* current = headNode->GetNext();
    
    while (current!=nullptr) {
        std::cout << current->GetData();
        std::cout << "\n";
        current = current->GetNext();
    }
        
    } catch (errno_t) {
        std::cout << "Error occurred while Displaying Doubly Linked List.";
    }
}

bool DoublyLinkedList::InsertAtBeginning(int data){
    
    try {
        Node* newNode = new Node(data);
        
        if(headNode->GetNext()==nullptr){
            headNode->SetNext(newNode);
            newNode->SetPrevious(headNode);
        }
        else{
            newNode->SetNext(headNode->GetNext());
            newNode->SetPrevious(headNode);
            headNode->SetNext(newNode);
        }
    } catch (errno_t) {
        std::cout << "Error occurred while inserting at beginning.";
        return false;
    }
    
    return true;
}

bool DoublyLinkedList::InsertAtEnd(int data){
    
    try {
        Node* newNode = new Node(data);
        if(headNode->GetNext()==nullptr){
            headNode->SetNext(newNode);
            newNode->SetPrevious(headNode);
        }
        else{
            Node* currentNode = headNode->GetNext();
            
            while (currentNode->GetNext()!=nullptr) {
                currentNode= currentNode->GetNext();
            }
            
            currentNode->SetNext(newNode);
            newNode->SetPrevious(currentNode);
        }
        
    } catch (errno_t) {
        std::cout << "Error occurred while inserting at end.";
        return false;
    }
    
    return true;
}

bool DoublyLinkedList::InsertInMiddle(int data){
    try {
        Node* newNode = new Node(data);
        
        if(headNode->GetNext() == nullptr){
            headNode->SetNext(newNode);
            newNode->SetPrevious(headNode);
        }
        else{
            Node* currentNode = headNode->GetNext();
            
            while (currentNode->GetNext()!=nullptr && currentNode->GetData() <= data) {
               currentNode = currentNode->GetNext();
            }
            
            newNode->SetNext(currentNode);
            newNode->SetPrevious(currentNode->GetPrevious());
            currentNode->GetPrevious()->SetNext(newNode);
            currentNode->SetPrevious(newNode);
            
            //newNode->SetNext(currentNode->GetNext());
            //newNode->SetPrevious(currentNode);
            //currentNode->SetNext(newNode);
        }
        
    } catch (errno_t) {
        std::cout << "Error occurred while inserting in middle.\n";
    }
    
    return true;
}