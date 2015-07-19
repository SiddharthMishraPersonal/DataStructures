//
//  Node.h
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#ifndef __DataStructures__Node__
#define __DataStructures__Node__

#include <stdio.h>

class Node {
    
private:
    int cData;
    Node *nextNode;
    Node *previousNode;
    
public :
    Node(int data){
        cData = data;
        nextNode=nullptr;
        previousNode=nullptr;
    }
    
    int GetData();
    void SetNext(Node *node);
    void SetPrevious(Node *node);
    
    Node* GetNext();
    Node* GetPrevious();
};

#endif /* defined(__DataStructures__Node__) */
