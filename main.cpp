#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double n_shares_sold_bought;
  double purshace_price;
  double selling_price;

  double amount_invested;
  double total_service_charge;
  double amount_gainedorlost;
  double amount_received;

  cout<< "Calculates Investments for Stocks." <<endl; 
  cout<< endl;
  cout<< "Enter the Number of Shares being bought or Sold: " <<endl;
  cin >> n_shares_sold_bought;
  cout<< "Enter the Purshace Price Per Stock: " <<endl;
  cin >> purshace_price;
  cout<< "Enter the Selling Price Per Stock: " <<endl;
  cin >> selling_price;
  cout<< endl;

  amount_invested= n_shares_sold_bought*purshace_price;
  amount_received= (n_shares_sold_bought*selling_price);
  total_service_charge= 0.015*(amount_invested+amount_received);
  amount_gainedorlost= amount_received-amount_invested-total_service_charge;

  cout<<fixed<<setprecision(2);
  cout<< "Amount Invested: $" <<setw(15)<<amount_invested<< "." <<endl;
  cout<< "Amount Received: $" <<setw(15)<<amount_received<< "." <<endl;
  cout<< "Total Service Charge:  $" <<setw(9)<<total_service_charge<< "." <<endl;
  cout<< "Amount Gained or Lost: $" <<setw(9)<<amount_gainedorlost<< "." <<endl;
return 0;
}