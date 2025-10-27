#pragma once

#include "node.hpp"

class BST {
private:
  Node* rootNode;
public:
  BST();
  ~BST();
  void insertData(Product newData);
  Product findDataById(std::string id);
  Product findDataByName(Node *nextNode, std::string name);
  Product findDataByName(std::string name);
  void listDataByCategory(Node *nextNode, std::string category);
  void listDataByCategory(std::string category);
};
