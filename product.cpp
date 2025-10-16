#include <string>
#include <sstream>

#include "product.hpp"

Product parseProduct(std::string line) {
  Product newProduct;

  std::string token;
  std::stringstream stream(line);

  std::getline(stream, token, ',');
  if (token != "") newProduct.productId = token;

  std::getline(stream, token, ',');
  if (token != "") newProduct.productName = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.brandName = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.asin = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.category = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.upcEanCode = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.listPrice = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.sellingPrice = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.quanity = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.modelNumber = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.aboutProduct = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productSpecification = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.technicalDetails = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.shippingWeight = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productDimentions = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.image = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.variants = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.sku = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productUrl = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.stock = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productDetails = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.dimentions = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.color = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.ingredients = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.directionsToUse = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.isAmazonSeller = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.sizeQuanityVariant = token;
  
  std::getline(stream, token, ',');
  if (token != "") newProduct.productDescription = token;

  return newProduct;
}

Product emptyProduct() {
  Product returnProduct;
  returnProduct.productName = "$EMPTYPRODUCT$";
  return returnProduct;
}
