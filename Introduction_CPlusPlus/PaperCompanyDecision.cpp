#include <iostream>

using namespace std;

int main()
{
    int reams;
    double ms, dm;
    cout << "Please enter the number of reams: ";
    cin >> reams;
    
    ms = (double)reams*4.09;
    if(reams <= 1000){
        dm = (double)reams*4.59;
    } else if(reams<=2500){
        dm = 3.99*((double)reams-1000) + 1000*4.59;
    } else {
        dm = 3.59*((double)reams-2500) + 1000*4.59 + 1500*3.99;
    }
    
    cout << "Cost for Dunder Mifflin: " << dm << endl;
    cout << "Cost for The Michael Scott Paper Company: " << ms << endl;
    
    if(ms<dm){
        cout << "You should switch to The Michael Scott Paper Company";
    } else {
        cout << "You should stay with Dunder Mifflin";
    }
    
    
    return 0;
}