#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  int ticA, ticB, ticC;
  double totalIncome;

  cout << "How many Class A tickets were sold?";
  cin >> ticA;
    
  cout << "How many Class B tickets were sold?";
  cin >> ticB;

  cout << "How many Class C tickets were sold?";
  cin >> ticC;

  totalIncome = ticA * 15 + ticB * 12 + ticC * 9;

  cout << showpoint << setprecision(2) << fixed;
  cout << "Income generated: $" << totalIncome;

  return 0;
}