#include <iostream>
#include <iomanip>

int main() {

std::cout << std::setprecision(2) << std::fixed;

double mealCost;
double tipPercentage;

std::cout << "Please input meal cost: ";
std::cin >> mealCost;
std::cout << "Please input tip percentage: ";
std::cin >> tipPercentage;
std::cout << "\n";

double taxAmount = .075 * mealCost;
double tipAmount = (tipPercentage / 100.0) * mealCost;

std::cout << "Restaurant Bill\n";
std::cout << "===================\n";
std::cout << "Subtotal: $" << mealCost << "\n";
std::cout << "Taxes: $" << taxAmount << "\n";
std::cout << "Tip: $" << tipAmount << "\n";
std::cout << "===================\n";
std::cout << "Total: $" << mealCost + taxAmount + tipAmount;
std::cout << "\n";

return 0;

}
