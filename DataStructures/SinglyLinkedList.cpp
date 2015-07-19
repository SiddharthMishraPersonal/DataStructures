//
//  SinglyLinkedList.cpp
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#include "SinglyLinkedList.h"


void SinglyLinkedList::DisplayList(){
    Node* currentNode;
    currentNode = headNode->GetNext();
    
    while (currentNode!=nullptr) {
        std::cout << currentNode->GetData();
        std::cout << "\n";
        currentNode= currentNode->GetNext();
    }
}

bool SinglyLinkedList::InsertAtBegin( int data){
    
    try {
    // Create a new Node
    Node* newNode = new Node(data);
    
    // Insert to next to Head node if list is empty.
    // If list is not empty then add Node in between head and the next node.
    if(headNode->GetNext()==nullptr){
        headNode->SetNext(newNode);
        return true;
    }else{
        Node* nextNode = headNode->GetNext();
        newNode->SetNext(nextNode);
        headNode->SetNext(newNode);
    }
        
    } catch (errno_t) {
        std::cout << "Error occurred while inserting at begining.";
        return false;
    }
    
    return true;
}

bool SinglyLinkedList::InsertAtEnd(int data){
    try {
            Node* newNode = new Node(data);
    if(headNode->GetNext()==nullptr){
        headNode->SetNext(newNode);
        return true;
    }else{
        Node* currentNode = headNode->GetNext();
        
        while (currentNode->GetNext()!=nullptr) {
            currentNode= currentNode->GetNext();
        }
        currentNode->SetNext(newNode);
    }
        
    } catch (errno_t) {
        std::cout << "Error occurred while inserting at end.";
        return false;
    }

    return true;
}

bool SinglyLinkedList::InsertInMiddle(int data){
    try {
        
        Node* newNode = new Node(data);
        if(headNode->GetNext()==nullptr){
            headNode->SetNext(newNode);
        }
        else{
            Node* currentNode = headNode->GetNext();
            Node* previousNode = headNode;
            
            //We will check whether we are at the end of the list (current node == null) or the current node data is greater than the new data.
            while (currentNode!= nullptr && currentNode->GetData() <= data ) {
                previousNode = currentNode;
                currentNode = currentNode->GetNext();
            }
            
            // Insert new Node in between Previous and Current Node.
            // In case if the current node is the last node then Next to Previous node will be null.
            newNode->SetNext(previousNode->GetNext());
            previousNode->SetNext(newNode);
           
        }
        
    } catch (errno_t) {
        std::cout << "Error occurred while inserting in middle.";
        return false;
    }
    return true;
}

Node* SinglyLinkedList::DeleteFromBegin(){
    
    try {
        Node* deletedNode = headNode->GetNext();
        headNode->SetNext(deletedNode->GetNext());
        return deletedNode;
    } catch (errno_t) {
        std::cout << "Error while deleting from the Begining of the list.";
    }
    
    return nullptr;
}

Node* SinglyLinkedList::DeleteFromEnd(){
    try {
        Node* currentNode = headNode->GetNext();
        Node* previousNode = headNode;
        
        if(currentNode == nullptr){
            std::cout << "List is empty.";
        }
        else{
            while (currentNode->GetNext()!=nullptr) {
                previousNode = currentNode;
                currentNode = currentNode->GetNext();
            }
            
            previousNode->SetNext(currentNode->GetNext());
            return currentNode;
        }
        
    } catch (errno_t) {
        std::cout << "Error while deleting node from the end of the list.";
    }
    return nullptr;
}

Node* SinglyLinkedList::DeleteNode(int data){
    try {
        Node* currentNode = headNode->GetNext();
        Node* previousNode = headNode;
        
        if(currentNode==nullptr){
            std::cout << "List is Empty.";
        }
        else{
            while (currentNode!=nullptr && currentNode->GetData()!= data) {
                previousNode = currentNode;
                currentNode = currentNode->GetNext();
            }
            
            if(currentNode==nullptr){
                std::cout << "Node doesn't exist in the list.";
            }
            else{
                previousNode->SetNext(currentNode->GetNext());
            }
            
            return currentNode;
        }
        
    } catch (errno_t) {
        std::cout << "Error while deleting the node.";
    }
    return nullptr;
}

void SinglyLinkedList::ReverseList(){
    try {
        if(headNode->GetNext()==nullptr){
            std::cout << "Empty List.";
            return;
        }
        
        Node* current = headNode->GetNext()->GetNext();
        Node* previous = headNode->GetNext();
        
        while (current!=nullptr) {
            previous->SetNext(current->GetNext());
            current->SetNext(headNode->GetNext());
            headNode->SetNext(current);
            current = previous->GetNext();
        }
        
    } catch (errno_t) {
        std::cout << "Error while reversing the list.";
    }
}
