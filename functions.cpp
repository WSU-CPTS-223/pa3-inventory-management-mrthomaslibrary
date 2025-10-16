#include <fstream>

#include "functions.hpp"
#include "product.hpp"

int stringToId(std::string str) {
  int value = 0;
  int length = str.length();

  for (int i = 0; i < length; i++) {
    int asci = str[i];
    value += asci * 10^(3 * i);
  }

  return value;
}

void loadCSV(BST &tree){
  std::ifstream inFile("marketing_sample_for_amazon_com-ecommerce__20200101_20200131__10k_data.csv");

  std::string line;
  std::getline(inFile, line);

  for (int i = 0; i < 15000; i++) {
    std::getline(inFile, line);
    tree.insertData(parseProduct(line));
  }

  inFile.close();
}
