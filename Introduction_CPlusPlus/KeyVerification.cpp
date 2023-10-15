#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int emp = 686;
    int com = 1248;
    int keyEmp, keyCom, numPairs, matches;
    cout << "Please enter the number of pairs you would like to compare: ";
    cin >> numPairs;
    matches = 0;
    for (int i = 0; i < numPairs; i++)
    {
        emp = (emp * 692) % 308947;
        com = (com * 483) % 308947;
        if (bitset<32>(emp).to_string().substr(20) == bitset<32>(com).to_string().substr(20))
        {
            matches++;
        }
        // cout << "Emp: " << emp << endl << "Com: " << com << endl << bitset<32>(emp).to_string().substr(20) << endl << bitset<32>(com).to_string().substr(20);
        // cout << endl << endl << endl;
    }
    cout << "Matches: " << matches;

    return 0;
}
