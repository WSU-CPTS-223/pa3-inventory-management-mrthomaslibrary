#pragma once

#include <string>

#include "BSTree.hpp"

int stringToId(std::string str);

void loadCSV(BST &tree);

std::string trim(std::string str);
