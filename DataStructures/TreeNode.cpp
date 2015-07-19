//
//  TreeNode.cpp
//  DataStructures
//
//  Created by Siddharth Mishra on 7/19/15.
//  Copyright (c) 2015 Siddharth Mishra. All rights reserved.
//

#include "TreeNode.h"
#include "iostream"

int TreeNode::GetData(){
    return cData;
}

void TreeNode::SetLeftChild(TreeNode *node){
    leftChild = node;
}

void TreeNode::SetRightChild(TreeNode *node){
    rightChild = node;
}

void TreeNode::SetParent(TreeNode *node){
    parent = node;
}

TreeNode* TreeNode::GetLeftChild(){
    return leftChild;
}

TreeNode* TreeNode::GetRightChild(){
    return rightChild;
}

TreeNode* TreeNode::GetParent(){
    return parent;
}