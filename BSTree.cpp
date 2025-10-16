#define MAX_LIMIT 15000

#include "BSTree.hpp"
#include "functions.hpp"

BST::BST() { rootNode = nullptr; }

BST::~BST() {} 

void BST::insertData(Product newData) {
  Node *newNode = new Node(newData);
  int newValue = newNode->dataId;
  
  if (!rootNode) {
    rootNode = newNode;
    return;
  }
  
  Node *currentNode = rootNode;
  
  int cycle = 0;
  while (currentNode && cycle++ < MAX_LIMIT) {
    int currentValue = currentNode->dataId;
    if (newValue >= currentValue) {
      if (currentNode->rightNode) {
        currentNode = currentNode->rightNode;
      } else {
        currentNode->rightNode = newNode;
        return;
      }
    }
    else if (newValue < currentValue) {
      if (currentNode->leftNode) {
        currentNode = currentNode->leftNode;
      } else {
        currentNode->leftNode = newNode;
        return;
      }
    }
  }
}

Product BST::findData(std::string id) {
  Product emptyProdcut;
  int value = stringToId(id);
  if (!rootNode) { return emptyProdcut; }

  Node *currentNode = rootNode;
  
  int cycle = 0;
  while (currentNode && cycle++ < MAX_LIMIT) {
    int currentValue = currentNode->dataId;
    if (value == currentValue) {
      return currentNode->getData();
    }
    else if (value >= currentValue) {
      currentNode = currentNode->rightNode;
    }
    else if (value < currentValue) {
      currentNode = currentNode->leftNode;
    }
  }

  return emptyProdcut;
}
