#include<iostream>
using namespace std;

int main() {
    int option = 0;
    string name;
    int deposit, balance = 0, withdraw;
    const double interestRate = 0.05;

    while (option != 6) {
        cout << "1)Create an Account" << endl;
        cout << "2)Account Balance Inquiry" << endl;
        cout << "3)Withdrawal" << endl;
        cout << "4)Deposit" << endl;
        cout << "5)Interest Calculation" << endl;
        cout << "6)Exit" << endl;
        cout << "Choose an Option:"<<endl;
        cin >> option;

        switch (option) {
        case 1:
            cout << "Enter Your Name:";
            cin >> name;
            cout << endl;
            cout << "Enter Your Deposit:";
            cin >> deposit;
            if (deposit < 100)
            {
                cout << "Initial deposit must be at least $100"<<endl;
                cout <<endl;
            }
            else
            {
                balance = deposit;
                cout << "Initial Deposit:" << deposit << endl;
            }
            break;

        case 2:
            
            cout << "Your account balance is:" << balance<<endl;
            break;

        case 3:
            cout << "Enter Withdrawal Amount:" << endl;
            cin >> withdraw;
            if (withdraw < balance)
            {
                balance -= withdraw;
                cout << "Your account balance is:" << balance << endl;
            }

            else
                cout << "Insufficient funds"<<endl;
            break;

        case 4:
            cout << "Enter Deposit Amount:" << endl;
            cin >> deposit;
            if (deposit < 50)
            {
                cout << "Deposit must be at least $50" << endl;
            }
                 
            else 
            {

                balance += deposit;
                cout << "Your account balance is:" << balance << endl;
            }
            break;

        case 5:
            balance += balance * interestRate;
            cout << "Interest calculated. Your new account balance after one year is: " << balance << endl;
            break;

        default:
            break;
        }
    }

    return 0;
}
