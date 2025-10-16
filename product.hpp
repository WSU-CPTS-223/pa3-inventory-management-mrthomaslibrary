#pragma once

#include <string>

typedef struct {
  std::string productId;
  std::string productName;
  std::string brandName;
  std::string asin;
  std::string category;
  std::string upcEanCode;
  std::string listPrice;
  std::string sellingPrice;
  std::string quanity;
  std::string modelNumber;
  std::string aboutProduct;
  std::string productSpecification;
  std::string technicalDetails;
  std::string shippingWeight;
  std::string productDimentions;
  std::string image;
  std::string variants;
  std::string sku;
  std::string productUrl;
  std::string stock;
  std::string productDetails;
  std::string dimentions;
  std::string color;
  std::string ingredients;
  std::string directionsToUse;
  std::string isAmazonSeller;
  std::string sizeQuanityVariant;
  std::string productDescription;
} Product;

Product parseProduct(std::string line);

Product emptyProduct();
