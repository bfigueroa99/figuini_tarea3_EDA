#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

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
void treeT(trees::Tree *ptr, trees::TreeNode *current);
void find();
void exit();

int main(int argc, char* argv[]){

    trees::Tree *tree = new trees::Tree;
    tree->setRoot(new trees::TreeNode("/"));
    

    trees::TreeNode* currentPtr = tree->getRoot();
    cout << "$TreeSO" << endl << "¡Bienvenido a TreeSO!" << endl << "¡Autores:  Benjamin Figueroa y Stefano Romanini!\n";

    while(true)
    {
        string input = "";
        cout << currentPtr->getData() << "#";
        
        if(getline(cin, input) && !input.empty())
        {
            stringstream ss(input);
            vector<string> wordList {istream_iterator<string>(ss), istream_iterator<string>()};

            if(wordList[0] == "mkdir")
            {
                mkdir(wordList[1], currentPtr->getData(), tree);
            }
            else if(wordList[0] == "mkfile")
            {
                mkfile(wordList[2], currentPtr->getData(), tree);
            }
            else if(wordList[0] == "cd")
            {
    
            }
            else if(wordList[0] == "ls")
            {
                ls(currentPtr);
            }
            else if(wordList[0] == "rm")
            {
    
            }
            else if(wordList[0] == "tree")
            {
                treeT(tree, currentPtr);
            }
            else if(wordList[0] == "find")
            {
    
            }
            else if(wordList[0] == "exit")
            {
                break;
            }
            else
            {
                cout << "Este comando no existe...\n";
            }
        }
    }

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

void treeT(trees::Tree *ptr, trees::TreeNode *current)
{
    ptr->traverse_rec(current, 0);
}

void find()
{

}

void exit()
{

}