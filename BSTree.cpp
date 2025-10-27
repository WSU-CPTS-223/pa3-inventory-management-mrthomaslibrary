#include <list>
#define MAX_LIMIT 15000

#include <iostream>

#include "BSTree.hpp"
#include "functions.hpp"
#include "product.hpp"

BST::BST() { rootNode = nullptr; }

BST::~BST() {} 

void BST::insertData(Product newData) {
  Node *newNode = new Node(newData);
  int newValue = newNode->dataId;
  
  if (!rootNode) {
    rootNode = newNode;
    return;
  }

  if (newNode->dataId == 0) return;
  
  Node *currentNode = rootNode;
  
  int cycle = 0;
  while (currentNode && cycle++ < MAX_LIMIT) {
    //std::cout << currentNode->dataId << std::endl;
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

Product BST::findDataById(std::string id) {
  int value = stringToId(id);
  if (!rootNode) return emptyProduct(); 

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

  return emptyProduct();
}

Product BST::findDataByName(Node *nextNode, std::string name){
  if (!nextNode) return emptyProduct();
  //std::cout << next->getData().productDescription << std::endl;
  if (nextNode->getData().productName.compare(name) == 0) return nextNode->getData(); 
  Product foundProduct = findDataByName(nextNode->leftNode, name);
  if (foundProduct.productName.compare("$EMPTYPRODUCT$") != 0) return foundProduct;
  return findDataByName(nextNode->rightNode, name);
}

Product BST::findDataByName(std::string name) {
  if (!rootNode) return emptyProduct();
  return findDataByName(rootNode, name);
}

void BST::listDataByCategory(Node *nextNode, std::string category) {
  if (!nextNode) return;
  for (int i = 0; i < 10; i++) {
    if (nextNode->getData().categories[i].compare(category) == 0) {
      std::cout << nextNode->getData().productName << std::endl;
      break;
    }
  }
  listDataByCategory(nextNode->leftNode, category);
  listDataByCategory(nextNode->rightNode, category);
}

void BST::listDataByCategory(std::string category) {
  if (!rootNode) return;
  listDataByCategory(rootNode, category);
}
