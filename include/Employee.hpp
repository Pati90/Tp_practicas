#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include <iostream>
using namespace std;

class Employee
{

private:
  int _employee_id;
  string _employee_name;

public:
  Employee();
  Employee(int employee_id, string employee_name);
  ~Employee();

  int getId();
  string getName();
};

#endif