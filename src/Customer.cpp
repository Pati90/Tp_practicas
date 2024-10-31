// Implementación de las cabeceras
#include "Customer.hpp"

Customer::Customer(){

};

Customer::Customer(int customer_id, string customer_name) //constructor de la clase Customer. La sintaxis Article::Article indica que este es el constructor de la clase Customer, y está siendo implementado fuera de la definición de la clase en el archivo de cabecera.
{
  this->_customer_id = customer_id;
  this->_customer_name = customer_name;
};

Customer::~Customer()
{
  cout << "Eliminando el cliente: " << this->_customer_name << " Con el id: " << this->_customer_id << endl;
};

int Customer::getId()
{
  return this->_customer_id;
};

string Customer::getName()
{
  return this->_customer_name;
};
