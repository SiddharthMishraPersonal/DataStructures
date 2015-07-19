//
//  Node.cpp
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#include "Node.h"

int Node::GetData(){
    return cData;
}

void Node::SetNext(Node *node){
    nextNode = node;
}

void Node::SetPrevious(Node *node){
    previousNode = node;
}

Node* Node::GetNext(){
    return nextNode;
}

Node* Node::GetPrevious(){
    return previousNode;
}
