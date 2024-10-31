#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include <iostream>
using namespace std;

class Customer
{
private: //solo se acceden desde la clase
  int _customer_id;
  string _customer_name;

public: //se puede acceder por fuera de la clase
  Customer();
  Customer(int customer_id, string customer_name);
  ~Customer();

  int getId();
  string getName();
};

#endif