#include <iostream>
#include <map>
#include <vector>

using namespace std;

struct Transaction {
    string type;
    double amount;
};

struct Account {
    string password;
    double balance;
    vector<Transaction> history;
};

map<string, Account> accounts;

void createAccount() {
    string name, password;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Password: ";
    cin >> password;

    if (accounts.find(name) != accounts.end()) {
        cout << "Account already exists!\n";
        return;
    }

    accounts[name] = {password, 0.0, {}};
    cout << "Account created successfully!\n";
}

void deposit(string name) {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    accounts[name].balance += amount;
    accounts[name].history.push_back({"Deposit", amount});
    
    cout << "Deposited $" << amount << " | New Balance: $" << accounts[name].balance << "\n";
}

void withdraw(string name) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > accounts[name].balance) {
        cout << "Insufficient funds!\n";
    } else {
        accounts[name].balance -= amount;
        accounts[name].history.push_back({"Withdraw", amount});
        cout << "Withdrawn $" << amount << " | New Balance: $" << accounts[name].balance << "\n";
    }
}

void transfer(string sender) {
    string recipient;
    double amount;

    cout << "Enter recipient's name: ";
    cin >> recipient;

    if (accounts.find(recipient) == accounts.end()) {
        cout << "Recipient not found!\n";
        return;
    }

    cout << "Enter amount to transfer: ";
    cin >> amount;

    if (amount > accounts[sender].balance) {
        cout << "Insufficient funds!\n";
        return;
    }

    accounts[sender].balance -= amount;
    accounts[recipient].balance += amount;

    accounts[sender].history.push_back({"Transfer to " + recipient, amount});
    accounts[recipient].history.push_back({"Transfer from " + sender, amount});

    cout << "Transferred $" << amount << " to " << recipient << "\n";
}

void checkBalance(string name) {
    cout << "Balance: $" << accounts[name].balance << "\n";
}

void viewHistory(string name) {
    cout << "Transaction History for " << name << ":\n";
    for (auto& tx : accounts[name].history) {
        cout << tx.type << " - $" << tx.amount << "\n";
    }
}

void changePassword(string name) {
    string oldPass, newPass;
    cout << "Enter current password: ";
    cin >> oldPass;

    if (oldPass != accounts[name].password) {
        cout << "Incorrect password!\n";
        return;
    }

    cout << "Enter new password: ";
    cin >> newPass;
    accounts[name].password = newPass;

    cout << "Password changed successfully!\n";
}

void login() {
    string name, password;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Password: ";
    cin >> password;

    if (accounts.find(name) == accounts.end()) {
        cout << "Account not found!\n";
        return;
    }

    if (accounts[name].password != password) {
        cout << "Incorrect password!\n";
        return;
    }

    int choice;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Transfer\n4. Check Balance\n5. View History\n6. Change Password\n7. Logout\nEnter choice: ";
        cin >> choice;

        if (choice == 1) deposit(name);
        else if (choice == 2) withdraw(name);
        else if (choice == 3) transfer(name);
        else if (choice == 4) checkBalance(name);
        else if (choice == 5) viewHistory(name);
        else if (choice == 6) changePassword(name);

    } while (choice != 7);
}

void adminPanel() {
    int choice;
    do {
        cout << "\n--- Admin Panel ---\n";
        cout << "1. View All Accounts\n2. Delete Account\n3. Exit Admin Mode\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "All Accounts:\n";
            for (auto& acc : accounts) {
                cout << "User: " << acc.first << " | Balance: $" << acc.second.balance << "\n";
            }
        } 
        else if (choice == 2) {
            string name;
            cout << "Enter account to delete: ";
            cin >> name;
            if (accounts.erase(name)) {
                cout << "Account deleted.\n";
            } else {
                cout << "Account not found!\n";
            }
        }
    } while (choice != 3);
}

int main() {
    int option;
    do {
        cout << "\n1. Create Account\n2. Login\n3. Admin Mode\n4. Exit\nEnter choice: ";
        cin >> option;

        if (option == 1) createAccount();
        else if (option == 2) login();
        else if (option == 3) adminPanel();

    } while (option != 4);

    return 0;
}