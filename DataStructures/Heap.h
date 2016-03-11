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

#define LEFTCHILD(x) 2 * x + 1;
#define RIGHTCHILD(x) 2 * x + 2;
#define PARENT(x) (x - 1)/2;

class HeapNode{
private:
    int nodeData;
public:
    HeapNode(int data){
        nodeData = data;
    }
    
    int GetData();
};

class MinHeap{
private:
    int size;
    HeapNode *element;
    public:
    MinHeap(){
        size = 0;
        element = nullptr;
    }
    
    int GetSize();
    HeapNode GetElement();
};

class Heap{
private:
    HeapNode* heapNode;
    MinHeap* minHeap;
    void Swap(HeapNode* first, HeapNode* second){
        HeapNode temp = *first;
        *first = *second;
        *second = temp;
    }
public:
    Heap(){
        minHeap = new MinHeap();
    }
    ~Heap(){
        minHeap= nullptr;
    }
    
    void Heapify();
    void Insert(MinHeap* minHeap, int data);
    void Display();
    
    void Delete(MinHeap* minHeap);
};



#endif /* defined(__DataStructures__Heap__) */
