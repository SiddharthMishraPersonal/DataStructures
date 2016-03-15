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
#include "HeapNode.hpp"

#define LCHILD(x) 2 * x + 1
#define RCHILD(x) 2 * x + 2
#define PARENT(x) (x - 1) / 2


// MinHeap class inserts, deletes and heapify the heap.
class MinHeap{
private:
    int heapSize;
    HeapNode* element[20];
    
public:
    
    int GetHeapSize(){
        return heapSize;
    }
    
    HeapNode* GetParentNode(int index){
        return element[((index -1)/2)];
    }
    
    HeapNode* GetLeftChildNode(int index){
        return element[(2 * index + 1)];
    }
    
    HeapNode* GetRightChildNode(int index){
        return element[(2 * index + 2)];
    }
    
    void AddItemToArray(HeapNode* heapNode, int index){
        element[index] = heapNode;
        heapSize++;
    }
    
    
    
    void Swap(HeapNode* node1, HeapNode* node2);
    
    void Insert(int data);
    void Delete();
    void Heapify();
    
};

#endif /* defined(__DataStructures__Heap__) */
