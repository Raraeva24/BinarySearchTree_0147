#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // constructor for the node class
    Node()
    {
        leftchild = nullptr;
        rightchild = nullptr;
    }
};

class BinaryTree
{
public:
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initializing ROOT to null
    }

    void insert() // Insert a node in the binary search tree
    {
        int x;
        cout << "Masukkan Nilai: ";
        cin >> x;

        // step 1 allocate memory for the new node
        Node *newNode = new Node();

        // step 2 assign value to the data field of new node
        newNode->info = x;

        // step 3 make the left and rigth child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // step 4: locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);
