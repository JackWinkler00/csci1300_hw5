#include <iostream>
using namespace std;

const int VAULT_GOAL = 42500;

int daysToFund(int startBalance, int dailyDeposit)
{
    int balance = startBalance;
    int days = 0;

    while (balance < VAULT_GOAL)
    {
        balance += dailyDeposit;
        days++;

        cout << "Day " << days
             << ": deposited " << dailyDeposit
             << ", balance now " << balance << endl;
    }

    return days;
}

int main()
{
    int startBalance, dailyDeposit;

    cout << "Enter the starting Vault balance: ";
    cin >> startBalance;

    cout << "Enter the daily deposit amount: ";
    cin >> dailyDeposit;

    cout << "--- Vault Savings Plan ---" << endl;

    int days = daysToFund(startBalance, dailyDeposit);

    cout << "The Vault was funded in " << days << " days!" << endl;

    return 0;
}