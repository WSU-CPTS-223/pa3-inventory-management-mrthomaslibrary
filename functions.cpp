#include <fstream>

#include "functions.hpp"
#include "product.hpp"

int stringToId(std::string str) {
  int value = 0;
  int length = str.length();

  if (str == "NA") return 0;

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

std::string trim(std::string str) {
  size_t firstChar = str.find_first_not_of(" ");
  size_t lastChar = str.find_last_not_of(" ");
  return str.substr(firstChar, (lastChar - firstChar + 1));
}
