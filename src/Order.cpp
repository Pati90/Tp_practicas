#include "Order.hpp"

Order::Order(int orderId, const Customer &customer, const Employee &employee)
{
  this->_orderId = orderId;
  this->_customer = customer;
  this->_employee = employee;
  this->_productsCounter = 0;
  this->_productsCapacity = 0;
  this->_products = new Product *[this->_productsCounter];
}

Order::~Order()
{
  for (int i = 0; i < this->_productsCounter; i++)
  {
    delete _products[i];

  } // Liberamos espacio en memoria de los punteros que utilizamos en este array
  delete[] _products;
  cout << "Eliminando la orden con el id: " << this->_orderId << endl;
}

void Order::setProduct(const Product &newProduct)
{
  if (this->_productsCounter >= this->_productsCapacity)
  {
    // Si el arreglo está lleno, aumentar su capacidad
    this->_productsCapacity++; // Aumentamos la capacidad +1

    Product **newProducts = new Product *[this->_productsCapacity]; // Creamos otro array con la nueva capacidad

    for (int i = 0; i < this->_productsCounter; i++) // Asignamos nuestros productos existentes al nuevo array
    {
      newProducts[i] = this->_products[i];
    }

    delete[] this->_products;      // Eliminamos de la memoria el array antiguo
    this->_products = newProducts; // Asignamos el nuevo array al puntero del array principal
  }
  this->_products[_productsCounter] = new Product(newProduct); // Agregamos el nuevo producto
  this->_productsCounter++;                                    // Aumentamos el product counter
}

void Order::deleteProduct(int productId)
{
  bool found = false;
  // Logica para eliminar el producto
  for (int i = 0; i < this->_productsCounter; i++)
  {
    if (this->_products[i]->getId() == productId)
    {
      delete this->_products[i]; // Liberar memoria del producto
      for (int j = i; j < this->_productsCounter - 1; j++)
      {
        this->_products[j] = this->_products[j + 1];
      }
      found = true;
      this->_productsCounter--; // Decrementamos el _productsCounter
      break;
    }
  }

  if (!found)
  {
    cout << "No se ha encontrado el producto con el id: " << productId << endl;
  }
}

void Order::showOrder()
{
  cout << "-------------------------------" << endl;
  cout << "Orden numero: " << this->_orderId << "\n"
       << "Cliente: " << this->_customer.getName() << "\n"
       << "Id del cliente: " << this->_customer.getId() << "\n"
       << "Orden generada por el empleado: " << this->_employee.getName() << " Con el id: " << this->_employee.getId() << endl;
  cout << "---------------------------------" << endl;
  cout << "Listado de productos: " << endl;
  for (int i = 0; i < this->_productsCounter; i++)
  {
    cout << "Id del producto: " << _products[i]->getId() << " Producto: " << _products[i]->getName() << " Valor: " << _products[i]->getPrice() << endl;
  }
  cout << "-------------------------------" << endl;
}