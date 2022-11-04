/*
 * childrenList.hpp
 *
 *  Created on: Aug 31, 2022
 *      Author: jsaavedr
 */

#ifndef CHILDRENLIST_HPP_
#define CHILDRENLIST_HPP_


//FIGUE RUTAS
#include "/home/figue/Documents/Codigos/EDA/Tareas/tarea3/figuini_tarea3_EDA/trees/include/trees/treeListNode.hpp"

//ROMANINI RUTAS 

namespace trees {

class TreeNode;
class TreeListNode;
class TreeList {
private:
	TreeListNode* head;
public:
	TreeList();
	TreeListNode* getHead();
	void insertFirst(TreeNode* treeNode);
	void removeFirst();
	void remove(int val);
	void removeAll();
	bool isEmpty();
	TreeNode* find(int val);
	void print();
	virtual ~TreeList();
};

} /* namespace trees */

#endif /* CHILDRENLIST_HPP_ */
