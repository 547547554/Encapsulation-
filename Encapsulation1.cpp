// wrapping up of data & information in a single unit,while controlling access to them.
// not given direct access in my data (data hide karke rakhte hai



#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_no, balance, age;

public:
    Customer(string name, int acc_no, int balance, int age)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        this->age = age;
    }

    void diposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid amount\n";
        }
    }
    void withdraw(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
        }
    }

    void updateage(int age)
    {
        if (age > 0 && age <= 100)
        {
            this->age=age;
        }
        else
        {
            cout<<"Invalid age \n";
        }
    }

    void display()
    {
        cout << name << " " << acc_no << " " << balance <<" "<< age<< endl;
    }
};

int main()
{
    Customer A1("Rakesh", 1, 1000, 3);
    Customer A2("Rakesh", 2, 2000, 4);
    Customer A3("Rakesh", 3, 3000, 8);

    A1.diposit(-20);
    A1.updateage(18);
    A1.display();
}
  
   