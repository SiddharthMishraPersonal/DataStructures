//
//  HeapNode.hpp
//  DataStructures
//
//  Created by Siddharth Mishra on 3/14/16.
//  Copyright © 2016 Siddharth Mishra. All rights reserved.
//

#ifndef HeapNode_hpp
#define HeapNode_hpp

#include <stdio.h>


// HeapNode is unit of a heap.
class HeapNode{
private:
    int data;
public:
    HeapNode(int data){
        data = data;
    }
    
    int GetData();
};

#endif /* HeapNode_hpp */
