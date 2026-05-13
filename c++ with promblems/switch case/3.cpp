#include <iostream>
using namespace std;

int main() {
  double balance = 5000;
  double money;
  double withdraw;
  int choice;

  cout << "ATM menu system\n";

  cout << "1 to Check Balance\n";
  cout << "2 to Deposit Money\n";
  cout << "3 to Withdraw Money\n";
  cout << "4 to Exit\n";

  cout << "Enter choice: ";
  cin >> choice;

  switch (choice) {

  case 1:
    cout << "Your balance is: Rs. " << balance;
    break;

  case 2:
    cout << "Enter the amount you want to deposit: ";
    cin >> money;

    balance = balance + money;

    cout << "Amount deposited successfully.\n";
    cout << "New balance is: Rs. " << balance;
    break;

  case 3:
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdraw;

    if (withdraw > balance) {
      cout << "Insufficient funds!";
    } else {
      balance = balance - withdraw;
      cout << "Withdrawal successful.\n";
      cout << "New balance is: Rs. " << balance;
    }
    break;

  case 4:
    cout << "Thank you! Goodbye";
    break;

  default:
    cout << "Invalid choice!";
  }

  return 0;
}
