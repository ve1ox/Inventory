#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

//Inventory object constructor
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

//Reduces amount of stock to reflect a transaction
void Inventory::sell()
{
 if(m_in_stock > 0) 	
	m_in_stock--;
 else
	 std::cout << "Sorry, that item is out of stock" << std::endl;
}

//Overloads an operator to output information about the object when used
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
