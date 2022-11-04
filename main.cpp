#include <iostream>
#include <string>
#include "include/trees/tree.hpp"
#include "include/trees/treeList.hpp"
#include "include/trees/treeListNode.hpp"
#include "include/trees/treeNode.hpp"

using namespace std;

void mkdir(string val, string val_parent, trees::Tree *ptr);
void mkfile(string val, string val_parent, trees::Tree *ptr);
void cd();
void ls(trees::TreeNode* current);
void rm();
void treeT(trees::Tree *ptr);
void find();
void exit();

int main(int argc, char* argv[]){

    trees::Tree *tree = new trees::Tree;
    tree->setRoot(new trees::TreeNode("/"));
    

    // trees::TreeNode* currentPtr = tree->getRoot();

    mkdir("caca", "/", tree);
    mkdir("a", "caca", tree);
    mkdir("x", "caca", tree);
    mkdir("y", "caca", tree);
    mkdir("c", "/", tree);
    mkdir("d", "c", tree);

    mkfile("b", "a", tree);
    mkfile("l", "caca", tree);
    mkfile("m", "caca", tree);
    mkfile("e", "d", tree);

    trees::TreeNode* currentPtr = tree->find("caca");

    tree->traverse_rec(currentPtr, 0);

    // treeT(tree);
    ls(currentPtr);

    return 0;
}

void mkdir(string val, string val_parent, trees::Tree *ptr)
{
    trees::TreeNode *tmp;
    tmp = ptr->find(val_parent);
    if(tmp->getIsFile() == 1){
        ptr->insert(val, val_parent, 1);
    }
    else{
        cout << val_parent << " is not a directory...\n";
    }
}

void mkfile(string val, string val_parent, trees::Tree *ptr)
{
    trees::TreeNode *tmp;
    tmp = ptr->find(val_parent);
    if(tmp->getIsFile() == 1){
        ptr->insert(val, val_parent, 0);
    }
    else{
        cout << val_parent << " is not a directory...\n";
    }
}

void cd()
{

}

void ls(trees::TreeNode* current)
{
    trees::TreeList* bruh = current->getChildren();
    bruh->print();
}

void rm()
{

}

void treeT(trees::Tree *ptr)
{
    ptr->traverse();
}

void find()
{

}

void exit()
{

}