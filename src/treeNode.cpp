/*
 * treeNode.cpp
 *
 *  Created on: Aug 30, 2022
 *      Author: jsaavedr
 */

#include "trees/treeNode.hpp"
#include <string>
using namespace std;

namespace trees {

TreeNode::TreeNode(): parent(nullptr), data(" "), children(new TreeList()) {
}

TreeNode::TreeNode(string val): parent(nullptr), data(val), children(new TreeList()) {
}

void TreeNode::setParent(TreeNode* node){
	parent = node;
}
void TreeNode::setData(string val){
	data = val;
}
void TreeNode::setIsFile(int n)
{
	_isFile = n;
}
void TreeNode::setChildren(TreeList* list){
	children = list;
}
TreeNode* TreeNode::getParent(){
	return parent;
}
string TreeNode::getData(){
	return data;
}
int TreeNode::getIsFile(){
	return _isFile;
}
TreeList* TreeNode::getChildren(){
	return children;
}

TreeNode::~TreeNode() {
	//action when a treeNode is deleted
	//delete the descendants only
	if (children != nullptr){
		delete children;
	}
}

} /* namespace trees */
