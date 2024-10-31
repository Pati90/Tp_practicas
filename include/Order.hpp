#ifndef ORDER_HPP
#define ORDER_HPP
#include <iostream>
#include <Product.hpp>
#include <Customer.hpp>
#include <Employee.hpp>

using namespace std;

class Order
{
private:
  int _orderId;
  int _productsCounter;
  int _productsCapacity;
  Product **_products;
  Customer _customer;
  Employee _employee;

public:
  Order(int orderId, const Customer &customer, const Employee &employee);
  ~Order();
  void setProduct(const Product &newProduct);
  void deleteProduct(int productId);
  void showOrder();
};

#endif