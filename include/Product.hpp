#ifndef PRODUCT_HPP
#define PRODUCT_HPP
#include <iostream>

using namespace std;

class Product
{
private:
  int _id;
  int _price;
  string _name;

public:
  Product(int id, string name, int price);
  ~Product();
  int getId();
  int getPrice();
  string getName();
};

#endif