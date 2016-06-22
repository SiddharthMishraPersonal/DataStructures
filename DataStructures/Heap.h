//
//  Heap.h
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#ifndef __DataStructures__Heap__
#define __DataStructures__Heap__

#include <stdio.h>
#include "TreeNode.h"

class Heap{
private:
    TreeNode* headNode;
public:
    Heap(){
        headNode = new TreeNode(0);
    }
    ~Heap(){
        headNode= nullptr;
    }
    
    void Heapify();
    void Insert(int data);
    void Display();
    
    TreeNode* Delete(TreeNode* node);
    TreeNode* GetRoot();
};

#endif /* defined(__DataStructures__Heap__) */
