#include <iostream>

using namespace std;

int main()
{
    int sand;
    int fry;
    int soda;
    cout << "Please enter the number of Chicken Sandwiches: ";
    cin >> sand;
    cout << "Please enter the number of Waffle Fries: ";
    cin >> fry;
    cout << "Please enter the number of Sodas: ";
    cin >> soda;
    
    double sub = (double)sand*3.9 + (double)fry*2.2 + (double)soda*1.6;
    
    cout << "Subtotal: $" << sub << endl;
    cout << "Tax: $" <<sub*0.1 << endl;
    cout << "Total: $" << sub*1.1;
    
    return 0;
}