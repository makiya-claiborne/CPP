// user input: salary amount
// return how much user should be allocating to needs, wants, and savings

#include <iostream>
using namespace std;

void budget(double salary)
{
    double needs, wants, savings;
    needs = salary * 0.5;
    wants = salary * 0.3;
    savings = salary * 0.2;

    cout << "Needs: $" << needs << endl;
    cout << "Wants: $" << wants << endl;
    cout << "Savings: $" << savings << endl;
}
int main(int argc, char const *argv[])
{
    double salary;
    cout << "Welcome to the 50/30/20 budget calculator!" << endl;
    cout << "A 50/30/20 budget allocates your income in the following 3 categories" << endl;
    cout << "50%: Needs \n30%: Wants \n20%: Savings \n" << endl;
    cout << "Enter your salary: $";
    cin >> salary;

    budget(salary);
    return 0;
}
