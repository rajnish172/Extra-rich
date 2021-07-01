#include<iostream>

#include<conio.h>

#include<stdio.h>

#include<stdlib.h>

using namespace std;

class bank //created a class bank
{
  char name[50], add[150], A_type, reason[500]; //taking variables
  float balance, amount;
  public:
    void Open_Account();
  void Close_Account();
  void Deposite_money();
  void Withdraw_Money();
  void Display_Details();
  void Register_Complain();
};

void bank::Open_Account() //defining fucntion Open account
{
  cout << "Enter Your Full name\n";
  cin.ignore(); //to clear the buffer created
  cin.getline(name, 50);
  /*used getline instead of only cin>> beacuse getline() is a standard library function that is used to read
	 a string or a line from an input stream while cin is just an instance of istream class.
   */
  cout << "Enter your address\n";
  cin.ignore();
  cin.getline(add, 150);
  cout << "What type of account you want to open \n TYPE 1.(s for Saving) \t 2. (c for Current)\n";
  cin >> A_type;
  while (A_type != 's' && A_type != 'c' && A_type != 'S' && A_type != 'C') {
    cout << "Invalid Account type. Please enter again\n";
    cin >> A_type;
  }
  cout << "Enter amount to deposit (Mimimum account Opening at Rs.500)\n";
  cout << "Rs.";
  cin >> balance;
  while (balance < 500) {
    cout << "Amount is less than required\n";
    cout << "Rs.";
    cin >> balance;
  }
  cout << "\n\t\t\t\tCONGRATULATIONS\n";
  cout << "\t\t\t   Your Account Is Created\n";
  printf("\t\t\t   Your account number is :: %d", rand());
}

void bank::Close_Account() {
  cout << "Enter Your Full name\n";
  cin.ignore(); //to clear the buffer created
  cin.getline(name, 50);
  cout << "\nPlease provide the reason for closign this account!!!\n";
  cin.getline(reason, 500);
  cout << "\t\t\t   SORRY For Any Inconvenience\n";
  cout << "\t\t\t   Your Account Will Be Closed In Few Days.";
}

void bank::Deposite_money() {
  cout << "Enter Amount of money to deposit :: Rs.";
  cin >> amount;
  balance += amount;
  cout << "\n Total Amount In Your Account Is :: Rs." << balance;
}

void bank::Withdraw_Money() {
  cout << "Enter The amount of money to withdraw :: Rs.";
  cin >> amount;
  balance -= amount;
  printf("You withdrew Rs.%d from your account", amount);
  cout << "\nTotal amount left in Your account :: Rs." << balance;
}

void bank::Display_Details() {
  cout << "Enter Your Full name :: \t" << name;
  cout << "Your address :: \t" << add;
  cout << "Type of account that you open (s or c):: \t" << A_type;
  cout << "Total balance :: \tRs." << balance;
}

void bank::Register_Complain() {
  cout << "Enter Your name :: \t" << name;
  cout << "Enter the Details of Complain\n";
  cin.getline(reason, 500);
  cout << "\t\t\t\tYour Complain has been registered\n";
  cout << "\t\t\t\tThank You For Your Feedback\n";
}

int main() {
  int start, enter, value;
  do {

    bank obj;
    for (int i = 0; i < 100; i++) {
      cout << "*";
    }
    cout << "\n\t\t\t\t\tWelcome To The Bank Interface\n\n";
    for (int i = 0; i < 100; i++) {
      cout << "*";
    }
    cout << "\n";

    for (int i = 0; i < 100; i++) {
      cout << "*";
    }
    cout << "\n1. Open Account \n";
    cout << "2. Close Account \n";
    cout << "3. Deposite Money \n";
    cout << "4. Withdraw Money \n";
    cout << "5. Display Account Details\n";
    cout << "6. Register Complain\n";
    cout << "7. Exit\n";
    cout << "Enter the numeric value to select the options\n";
    for (int i = 0; i < 100; i++) {
      cout << "*";
    }
    cout << "\n";

    cin >> start;
    switch (start) {
    case 1:
      cout << "1. Open Account " << endl;
      obj.Open_Account();
      break;
    case 2:
      cout << "2. Close Account " << endl;
      obj.Close_Account();
      break;
    case 3:
      cout << "3. Deposite Money " << endl;
      obj.Deposite_money();
      break;
    case 4:
      cout << "4. Withdraw money " << endl;
      obj.Withdraw_Money();
      break;
    case 5:
      cout << "5. Display account deails " << endl;
      obj.Display_Details();
      break;
    case 6:
      cout << "6. Register complain " << endl;
      obj.Register_Complain();
      break;
    case 7:
      if (start == 5) {
        exit(1);
      }
      default:
        cout << "This value in not in options try again!";

    }
    cout << "\nDo you want to See the Options,Type G\n";
    cout << "DO you want to exit\n";
    value = getch();
    if (value == 'n' || value == 'N') {
      exit(2);
    }
  }
  while (value == 'g' || value == 'G');

  getch();
  return 0;
}
