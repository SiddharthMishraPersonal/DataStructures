//
//  Heap.cpp
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#include "Heap.h"
#include "TreeNode.h"
#include "iostream"

void Heap::Insert(int data){
    try {
        if(headNode==nullptr){
            headNode = new TreeNode(data);
        }
        else{
            
        }
    } catch (errno_t) {
        std::cout << "Error occurred while inserting data into Heap.\n";
    }
}