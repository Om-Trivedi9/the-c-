#include <iostream>
using namespace std;

class BankAccount
{
protected:
     int accountNumber;
    char accoutHolder[40];

    double a, b, c;

public:
    double balance;
    double setdata()
    {
        cout << endl
             << "Enter your Account Number : ";
        cin >> this->accountNumber;
        cout << "Enter Account Holder Name : ";
        cin >> this->accoutHolder;

    label:
        cout << "Enter Your Balance :";
        cin >> a;
        if (a >= 1000)
            this->balance = this->balance + a;
        else
        {
            
            this->balance = this->balance + a;
            cout << "Your Minimum 1000 Balance requaid " << endl;
            goto label;
        }
        
    }

    void deposit()
    {
        cout << "Enter Deposit value   :";
        cin >> a;
        if (a > 0)
        {
            this->balance = this->balance + a;
            cout << "Deposit Successfull......" << endl;
            cout << "Your New Balance is  : " << this->balance << endl;
        }
    }

    void withdraw()
    {
        int a = 0;
        for (; a >= 0;)
        {
            cout << "Enter withdarw value :";
            cin >> b;
            c = balance - b;
            if (c >= 1000)
            {
                if (b > balance)
                {
                    cout << "Insufficient Balance" << endl;
                    a--;
                }
                else
                {
                    balance = balance - b;
                    cout << "Withdraw Successfull" << endl;
                    a--;
                }
                a--;
            }
            else if (50000 <= b)
            {
                cout << " *** Over Draft Limit ***";
                a++;
            }
            else if (b >= balance)
            {
                cout << "Minimum Left Amount must be 1000" << endl;
                cout << "     PLEASE TRY AGAIN.....     ";
                a++;
            }
            else
            {
                cout << endl << "Your Withdraw can't Done Properly" << endl;
                cout << "     PLEASE TRY AGAIN.....     " << endl;
                a++;
            }
        }
    }
    void display()
    {
        cout << endl
             << "Account Number\t: " << this->accountNumber << endl
             << "Accout Holder Name:" << this->accoutHolder << endl
             << "Account Balance\t: " << this->balance << endl;
    }
};

class SavingAccount : public BankAccount
{
    double interestRate, interest;

public:
    double satINTdata()
    {
        cout << "Enter Interest Rate :";
        cin >> interestRate;
        return interestRate;
    }

     void setCeldata(double interestRate, double myBalance)
    {
        cout << endl <<"Your Current Balance is " << myBalance << endl
             << endl;
        interest = (myBalance * interestRate) / 100;

        cout << "Commen Interest For " << interestRate << " % " << " is " << interest << endl
             << endl;
    }
};

class CheckingAccount : public BankAccount
{

    static double overdraftLimit;

public:
    void setoverdraftdata()
    {
        if (a < overdraftLimit)
            cout << " ..Overdraft Limit.." << overdraftLimit;
    }
};

double CheckingAccount::overdraftLimit = 300000;

class FixDepositeAccount : public BankAccount
{
    double fixRate = 10, fixInterest;
    int t;

public:
    int setfdData()
    {
        cout << "Enter Duration in Month :";
        cin >> t;
        return t;
    }
    void setCeldata(double a, double your)
    {
        fixInterest = (a * fixRate * your) / 1200;
        cout << "Your Inetrest with 10" << "%" << " and " << t << " Months Will be : " << fixInterest << endl;
    }
};



int main()
{
    BankAccount b1;
    SavingAccount s1;
    CheckingAccount c1;
    FixDepositeAccount f1;
    int o = 1, m = 0;

    for (; o != 0;)
    {

        cout << endl
             << "1.login" << "2.logout...";
        cout << "Enter Your Choice :";
        cin >> o;
        switch (o)
        {
        case 1:
            if (m == 0)
            {
                b1.setdata();
                m++;
                
            }
            cout << "1.Saving Accout\n2.Checking Account\n3.Fixed Deposit Account\n"
                 << endl;
            cout << "Enter Your choice :";
            cin >> m;
           
            switch (m)
            {
            case 1:
                cout << "1.Deposit\n2.Withdraw\n3.continue"
                     << endl;
                cout << "Enter your choice :";
                cin >> o;
              
                switch (o)
                {
                case 1:
                    b1.deposit();
                    break;
                case 2:
                    b1.withdraw();
                }
                s1.setCeldata(s1.satINTdata(), b1.balance);
                break;

            case 2:
               
                b1.display();

                break;
            case 3:
                cout << "1.Deposit\n2.Withdraw\n3.continue"
                     << endl;
                cin >> o;

                switch (o)
                {
                case 1:
                    b1.deposit();
                    break;
                case 2:
                    b1.withdraw();
                }
                f1.setCeldata(f1.setfdData(), b1.balance);
            }
            break;
        case 2:
            cout << "Thank you for visit.....";
            break;
        default:
        {
            cout << "\n***Invalid choice.........****\n";
            break;
        }
        }
    }
}