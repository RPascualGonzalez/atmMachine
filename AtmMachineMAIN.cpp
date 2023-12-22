#include <iostream>
#include <vector>
#include "MoneyClass.h"

using namespace NspMoneyClass;
using namespace std;

int main()
{
    vector<MoneyClass> money = {
        MoneyClass(500, "bill", 2),
        MoneyClass(200, "bill", 3),
        MoneyClass(100, "bill", 5),
        MoneyClass(50, "bill", 12),
        MoneyClass(20, "bill", 20),
        MoneyClass(10, "bill", 50),
        MoneyClass(5, "bill", 100),
        MoneyClass(2, "coin", 250),
        MoneyClass(1, "coin", 500)
    };

    int moneyToWithdraw;
    cout << "Insert amount of money to withdraw \n";
    cin >> moneyToWithdraw;

    int totalMoneyInATM = 0;
    for (MoneyClass& m : money) {
        totalMoneyInATM += m.GetTotalMoneyWithThisValue();
    }

    if (moneyToWithdraw > totalMoneyInATM)
    {
        cout << "ATM doesnt have that much money \n";
    }
    else {
        while (moneyToWithdraw > 0)
        {
            for (MoneyClass& m : money) {
                if (m.GetTotalMoneyWithThisValue() > 0 and moneyToWithdraw >= m.GetValue())
                {
                    moneyToWithdraw = moneyToWithdraw - m.GetValue();
                    m.DecreaseNumberUnits();
                    m.IncreaseQuantityOfUnitsToGive();
                    break;
                }
            }
        }
    }
    
    for (MoneyClass& m : money) {
        if (m.GetQuantityOfUnitsToGive() > 0)
        {
            cout << m.GetQuantityOfUnitsToGive() << " " << m.GetMoneyType() << " of " << m.GetValue() << endl;
        }
    }
}

