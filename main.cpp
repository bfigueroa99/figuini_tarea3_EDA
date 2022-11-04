#include <iostream>
#include "include/trees/tree.hpp"
#include "include/trees/treeList.hpp"
#include "include/trees/treeListNode.hpp"
#include "include/trees/treeNode.hpp"

using namespace std;

int main(int argc, char* argv[]){

    trees::Tree tree;
    tree.setRoot(new trees::TreeNode("/"));
    tree.insert("caca", "/");
    tree.insert("a", "caca");
    tree.insert("b", "a");
    tree.insert("c", "/");
    tree.insert("d", "c");
    tree.insert("e", "d");

    tree.traverse();

    return 0;
}