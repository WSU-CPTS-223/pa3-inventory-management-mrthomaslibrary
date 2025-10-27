#include <string>
#include <sstream>

#include "product.hpp"
#include "functions.hpp"

Product parseProduct(std::string line) {
  Product newProduct;

  std::string token;
  std::stringstream stream(line);

  std::getline(stream, token, ',');
  if (token != "") newProduct.productId = token; else newProduct.productId = "NA";

  std::getline(stream, token, ',');
  if (token != "") newProduct.productName = token; else newProduct.productName = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.brandName = token; else newProduct.brandName = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.asin = token; else newProduct.asin = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") {
    newProduct.category = token;
    std::string categoryToken;
    std::stringstream categoryStream(token);
    for (int i = 0; i < 10; i++) {
      std::getline(categoryStream, categoryToken, '|');
      if (categoryToken != "") {
        newProduct.categories[i] = trim(categoryToken);
      } else newProduct.categories[i] = "NA";
    }
  } else {
    newProduct.category = "NA";
    for (int i = 0; i < 10; i++) {
      newProduct.categories[i] = "NA";
    }
  }

  std::getline(stream, token, ',');
  if (token != "") newProduct.upcEanCode = token; else newProduct.upcEanCode = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.listPrice = token; else newProduct.listPrice = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.sellingPrice = token; else newProduct.sellingPrice = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.quanity = token; else newProduct.quanity = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.modelNumber = token; else newProduct.modelNumber = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.aboutProduct = token; else newProduct.aboutProduct = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productSpecification = token; else newProduct.productSpecification = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.technicalDetails = token; else newProduct.technicalDetails = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.shippingWeight = token; else newProduct.shippingWeight = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productDimentions = token; else newProduct.productDimentions = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.image = token; else newProduct.image = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.variants = token; else newProduct.variants = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.sku = token; else newProduct.sku = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productUrl = token; else newProduct.productUrl = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.stock = token; else newProduct.stock = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productDetails = token; else newProduct.productDetails = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.dimentions = token; else newProduct.dimentions = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.color = token; else newProduct.color = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.ingredients = token; else newProduct.ingredients = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.directionsToUse = token; else newProduct.directionsToUse = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.isAmazonSeller = token; else newProduct.isAmazonSeller = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.sizeQuanityVariant = token; else newProduct.sizeQuanityVariant = "NA";
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productDescription = token; else newProduct.productDescription = "NA";

  return newProduct;
}

Product emptyProduct() {
  Product returnProduct;
  returnProduct.productName = "$EMPTYPRODUCT$";
  return returnProduct;
}
