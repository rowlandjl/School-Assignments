#include <iostream>
bool validateDate(int, int, int);
using namespace std;
int main()
{ 
  const double priceHamburger = 2.50;
  const double priceChips = 0.50;
  const double priceDrinks = 1.00;
  int numHamburger;
  int numChips;
  int numDrinks;
  double costHamburger;
  double costChips;
  double costDrinks;
  double totalCost;

  
  
  
  
  
  cout << "Enter the number of hamburgers purchased: ";
  cin >> numHamburger;
  costHamburger = numHamburger * priceHamburger;
  
  cout << "Enter the number of chips purchased: ";
  cin >> numChips;
  costChips = numChips * priceChips;

  cout << "Enter the number of drinks purchased: ";
  cin >> numDrinks;
  costDrinks = numDrinks * priceDrinks;

  totalCost = costHamburger + costChips + costDrinks;
  cout << "Total Cost: $" << totalCost << endl;
  return 0;}
  

