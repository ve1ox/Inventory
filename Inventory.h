#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

/*Inventory Class
 * -------------
 *  Contains variables and methods
 *  for objects users want to stock.
 */

class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
