#pragma once

#include <string>

#include "product.hpp"

class Node {
private:
  Product data;
public:
  Node(Product newData);
  ~Node();
  int dataId;
  Node *leftNode;
  Node *rightNode;
  Product getData();
};
