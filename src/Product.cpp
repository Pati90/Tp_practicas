#include "Product.hpp"

Product::Product(int id, string name, int price)
{
  this->_id = id;
  this->_name = name;
  this->_price = price;
}

Product::~Product()
{
  cout << "Eliminando el producto: " << this->_name << " Con el id: " << this->_id << endl;
}

int Product::getId()
{
  return this->_id;
}

string Product::getName()
{
  return this->_name;
}

int Product::getPrice()
{
  return this->_price;
}