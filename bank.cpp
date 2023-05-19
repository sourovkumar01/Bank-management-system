#include <bits/stdc++.h>
using namespace std;

void clear() {
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    cout << "\x1B[2J\x1B[H";
}

//* 1. Complete the class accordingly
//* 2. Create an object
//* 3. function define
//* 4. EXIT function()

class Account {
    public:
    double accountMoney = 500.0;
    string accountName, accountOwnerName;
    int accountNumber, accountOwnerNID;
    Account() {
        //account
    }

    double withdraw(double amount) {
        cout << "Enter Amount" << endl;
        cin >> amount;
        accountMoney -= amount;
    }

    double deposit(double amount) {
        cout << "Enter Amount" << endl;
        cin >> amount;
        accountMoney += amount;

    }

    void getAccountInfo() {

        cout << "Account Owner Name: " << accountOwnerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accountMoney << endl;
    }

    void setAccountInfo() {


        cout << "Enter Your Name: ";
        cin >> accountName;
        cout << "Enter Mobile: ";
        cin >> accountNumber;
        cout << "Enter Owner Name: ";
        cin >> accountOwnerName;
        cout << "Enter Owner NID: ";
        cin >> accountOwnerNID;
    }
};

int main()
{
    Account ob;
    ob.setAccountInfo();

    int choice;

    cout << "C++Kash" << endl;
    cout << "1. Send Money" << endl;
    cout << "2. Mobile Recharge" << endl;
    cout << "3. Cash In" << endl;
    cout << "4. Cash out" << endl;
    cout << "5. My Account" << endl;
    cout << "Enter: ";
    cin >> choice;

    clear();

    switch(choice) {
        case 1:
        cout << "Send Money" << endl;
        // Send Money : user input
        ob.withdraw(0);
        cout << "Transaction Successful" << endl;

        ob.getAccountInfo();
        break;

        case 2:
        cout << "Mobile Recharge" << endl;
        // Mobile Recharge
        ob.withdraw(0);
        cout << "Mobile Recharge Successful" << endl;
        ob.getAccountInfo();
        break;

        case 3:
        cout << "Cash In" << endl;
        // Cash In
        ob.deposit(0);
        cout << "Cash In Successful" << endl;
        ob.getAccountInfo();
        break;

        case 4:
        cout << "Cash Out" << endl;
        // Cash Out
        ob.withdraw(0);
        cout << "Cash Out Successful" << endl;
        ob.getAccountInfo();
        break;

        case 5:
        cout << "My Account" << endl;
        // account info
        ob.getAccountInfo();
        break;
    }
}
