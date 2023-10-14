#include <iostream>

using namespace std;

int main()
{
    // Enter your code here
    int amt;
    int q;
    int d;
    int n;
    int p;
    cout << "Please entere an amount (less than 1000 cents): ";
    cin >> amt;

    q = amt / 25;
    amt = amt % 25;
    d = amt / 10;
    amt = amt % 10;
    n = amt / 5;
    amt = amt % 5;
    p = amt;

    cout << "Quarters: " << q << endl
         << "Dimes: " << d << endl
         << "Nickles: " << n << endl
         << "Pennies: " << p;

    return 0;
}