#include <iostream>

using namespace std;

int main()
{
    string posi;
    int sum = 0;
    cout << "Please enter a positive integer: ";
    cin >> posi;
    for (int i = 0; i < posi.length(); i++)
    {
        sum += stoi(posi.substr(i, 1));
    }
    cout << "The sum of the digits is " << sum;

    return 0;
}