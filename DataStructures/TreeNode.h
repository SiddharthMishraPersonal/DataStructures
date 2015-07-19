//
//  TreeNode.h
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#ifndef __DataStructures__TreeNode__
#define __DataStructures__TreeNode__

#include <stdio.h>

class TreeNode{
private:
    int cData;
    TreeNode* rightChild;
    TreeNode* leftChild;
    TreeNode* parent;
public:
    TreeNode(int data){
        cData = data;
        rightChild=nullptr;
        leftChild=nullptr;
        parent=nullptr;
    }
    
    void SetRightChild(TreeNode * node);
    void SetLeftChild(TreeNode* node);
    void SetParent(TreeNode* node);
    
    TreeNode* GetParent();
    TreeNode* GetLeftChild();
    TreeNode* GetRightChild();
    int GetData();
};

#endif /* defined(__DataStructures__TreeNode__) */
