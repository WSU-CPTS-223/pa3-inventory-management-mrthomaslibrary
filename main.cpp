#include <iostream>
#include <string>

#include "functions.hpp"
#include "BSTree.hpp"
#include "product.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void printHelp()
{
    cout << "Supported list of commands: " << endl;
    cout << " 1. find <inventoryid> - Finds if the inventory exists. If exists, prints details. If not, prints 'Inventory not found'." << endl;
    cout << " 2. listInventory <category_string> - Lists just the id and name of all inventory belonging to the specified category. If the category doesn't exists, prints 'Invalid Category'.\n"
         << endl;
    cout << " Use :quit to quit the REPL" << endl;
}

bool validCommand(string line)
{
    return (line == ":help") ||
           (line.rfind("find", 0) == 0) ||
           (line.rfind("listInventory") == 0);
}

void evalCommand(string line, BST &tree)
{
    if (line == ":help")
    {
        printHelp();
    }
    // if line starts with find
    else if (line.rfind("find", 0) == 0)
    {
        // Look up the appropriate datastructure to find if the inventory exist
        string foundName = line.substr(5);
        Product foundProduct = tree.findDataByName(foundName);
        if (foundProduct.productName.compare("$EMPTYPRODUCT$") == 0) {

        } else {
          if (foundProduct.productId != "") cout << "Product Unique ID:\t" << foundProduct.productId << endl;
          if (foundProduct.productName != "") cout << "Product Name:\t" << foundProduct.productName << endl;
          if (foundProduct.brandName != "") cout << "Brand Name:\t"<< foundProduct.brandName << endl;
          if (foundProduct.asin != "") cout << "Asin:\t" << foundProduct.asin << endl;
          if (foundProduct.category != "") cout << "Category:\t" << foundProduct.category << endl;
          if (foundProduct.upcEanCode != "") cout << "Upc Ean Code:\t" << endl;
          if (foundProduct.listPrice != "") cout << "List Price:\t" << endl;
          if (foundProduct.sellingPrice != "") cout << "Selling Price:\t" << endl;
          if (foundProduct.modelNumber != "") cout << "Model Number:\t" << endl;
          if (foundProduct.aboutProduct != "") cout << "About Product:\t" << endl;
          if (foundProduct.technicalDetails != "") cout << "Technical Details:\t" << endl;
          if (foundProduct.image != "") cout << "Image:\t" << endl;
          if (foundProduct.productUrl != "") cout << "Product Url:\t" << endl;
          if (foundProduct.dimentions != "") cout << "Dimentions:\t"<< endl;
          if (foundProduct.directionsToUse != "") cout << "Directions To Use:\t" << endl;
          if (foundProduct.isAmazonSeller != "") cout << "Is Amazon Seller:\t" << endl;
          if (foundProduct.sizeQuanityVariant != "") cout << "Size Quanity Variant:\t" << endl;
          if (foundProduct.productDescription != "") cout << "Product Description:\t" << endl;
        }
    }
    // if line starts with listInventory
    else if (line.rfind("listInventory") == 0)
    {
        // Look up the appropriate datastructure to find all inventory belonging to a specific category
        cout << "YET TO IMPLEMENT!" << endl;
    }
}

void bootStrap(BST &tree)
{
    cout << "\n Welcome to Amazon Inventory Query System" << endl;
    cout << " enter :quit to exit. or :help to list supported commands." << endl;
    cout << "\n> ";
    // TODO: Do all your bootstrap operations here
    // example: reading from CSV and initializing the data structures
    // Don't dump all code into this single function
    // use proper programming practices
  
  loadCSV(tree);
}

int main(int argc, char const *argv[])
{
    BST tree;
    string line;
    bootStrap(tree);
    while (getline(cin, line) && line != ":quit")
    {
        if (validCommand(line))
        {
            evalCommand(line, tree);
        }
        else
        {
            cout << "Command not supported. Enter :help for list of supported commands" << endl;
        }
        cout << "> ";
    }
    return 0;
}
