#include <string>
#include <sstream>

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

Product parseLine(std::string line) {
  Product newProduct;

  std::string token;
  std::stringstream stream(line);

  std::getline(stream, token, ',');
  newProduct.productId = token;
  std::getline(stream, token, ',');
  newProduct.productName = token;
  std::getline(stream, token, ',');
  newProduct.brandName = token;
  std::getline(stream, token, ',');
  newProduct.asin = token;
  std::getline(stream, token, ',');
  newProduct.category = token;
  std::getline(stream, token, ',');
  newProduct.upcEanCode = token;
  std::getline(stream, token, ',');
  newProduct.listPrice = token;
  std::getline(stream, token, ',');
  newProduct.sellingPrice = token;
  std::getline(stream, token, ',');
  newProduct.quanity = token;
  std::getline(stream, token, ',');
  newProduct.modelNumber = token;
  std::getline(stream, token, ',');
  newProduct.aboutProduct = token;
  std::getline(stream, token, ',');
  newProduct.productSpecification = token;
  std::getline(stream, token, ',');
  newProduct.technicalDetails = token;
  std::getline(stream, token, ',');
  newProduct.shippingWeight = token;
  std::getline(stream, token, ',');
  newProduct.productDimentions = token;
  std::getline(stream, token, ',');
  newProduct.image = token;
  std::getline(stream, token, ',');
  newProduct.variants = token;
  std::getline(stream, token, ',');
  newProduct.sku = token;
  std::getline(stream, token, ',');
  newProduct.productUrl = token;
  std::getline(stream, token, ',');
  newProduct.stock = token;
  std::getline(stream, token, ',');
  newProduct.productDetails = token;
  std::getline(stream, token, ',');
  newProduct.dimentions = token;
  std::getline(stream, token, ',');
  newProduct.color = token;
  std::getline(stream, token, ',');
  newProduct.ingredients = token;
  std::getline(stream, token, ',');
  newProduct.directionsToUse = token;
  std::getline(stream, token, ',');
  newProduct.isAmazonSeller = token;
  std::getline(stream, token, ',');
  newProduct.sizeQuanityVariant = token;
  std::getline(stream, token, ',');
  newProduct.productDescription = token;

  return newProduct;
}
