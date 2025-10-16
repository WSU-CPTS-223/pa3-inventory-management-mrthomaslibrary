#pragma once

#include "node.hpp"

class BST {
private:
  Node* rootNode;
public:
  BST();
  ~BST();
  void insertData(Product newData);
  Product findData(std::string id);
};
