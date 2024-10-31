#include "include/Customer.hpp"
#include "include/Product.hpp"
#include "include/Order.hpp"
#include "include/Employee.hpp"
#include <iostream>
using namespace std;

int main()
{
  // Generamos los empleados:

  Employee EmployeeOne = Employee(100, "Empleado 1");
  Employee EmployeeTwo = Employee(200, "Empleado 2");

  // Generamos los clientes:
  Customer CustomerOne = Customer(1, "Pablo F");
  Customer CustomerTwo = Customer(2, "Pity Martinez");
  Customer CustomerThree = Customer(3, "JuanFer Q");

  // Generamos algunos productos:
  Product ProductOne = Product(1, "Ropa", 100);
  Product ProductTwo = Product(2, "Zapatos", 200);
  Product ProductThree = Product(3, "Antiparras", 300);


  // Generamos algunas ordenes:
  Order OrderOne = Order(100, CustomerOne, EmployeeOne);
  OrderOne.setProduct(ProductOne);
  OrderOne.setProduct(ProductTwo);
 

  Order OrderTwo = Order(200, CustomerTwo, EmployeeTwo);
  OrderTwo.setProduct(ProductOne);
  OrderTwo.setProduct(ProductTwo);
  OrderTwo.setProduct(ProductThree);


  // Mostramos las ordenes.
  OrderOne.showOrder();
  OrderTwo.showOrder();

  // Eliminamos el producto de una orden.
  OrderOne.deleteProduct(1);

  // Volvemos a mostrarla.
  OrderOne.showOrder();

  return 0;
}