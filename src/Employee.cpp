#include "Employee.hpp"

Employee::Employee(){

};

Employee::Employee(int employee_id, string employee_name)
{
  this->_employee_id = employee_id;
  this->_employee_name = employee_name;
};

Employee::~Employee()
{
  cout << "Eliminando el cliente: " << this->_employee_name << " Con el id: " << this->_employee_id << endl;
};

int Employee::getId()
{
  return this->_employee_id;
};

string Employee::getName()
{
  return this->_employee_name;
};
