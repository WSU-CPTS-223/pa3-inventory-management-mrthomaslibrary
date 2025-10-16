#include "node.hpp"
#include "functions.hpp"

Node::Node(Product newData) {
  data = newData;
  dataId = stringToId(newData.productId);
  leftNode = nullptr;
  rightNode = nullptr;
}

Node::~Node() {}

Product Node::getData() { return data; }
