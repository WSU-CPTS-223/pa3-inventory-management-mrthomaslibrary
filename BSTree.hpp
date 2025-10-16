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
  Product findDataByName(Node *next, std::string name);
  Product findDataByName(std::string name);
};
