//
//  Heap.cpp
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#include "Heap.h"
#include "HeapNode.hpp"
#include "iostream"

void MinHeap::Insert(int data){
    int size = GetHeapSize();
    HeapNode* newNode = new HeapNode(data);
    if(size == 0){
        AddItemToArray(newNode, 0);
    }
    else{
        int index = size++;
        HeapNode* parentNode = GetParentNode(index);
        
        while (parentNode->GetData() > data) {
            AddItemToArray(parentNode, index);
            index = PARENT(index);
        }
        
        AddItemToArray(newNode, index);
    }
}


void MinHeap::Delete(){
    
}


void MinHeap::Heapify(){
    
}




void MinHeap::Swap(HeapNode* node1, HeapNode* node2){
    HeapNode temp = *node1;
    *node1 = *node2;
    *node2 = temp;
}
