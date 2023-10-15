#include <iostream>

using namespace std;

int main()
{
    int orig1, orig2, steps, prev, curr;
    string necklace;
    cout << "Please enter two digits seperated by a space: ";
    // Notice how we can read two values in one line
    cin >> orig1 >> orig2;
    prev = orig2;
    curr = (orig1 + orig2) % 10;
    necklace += to_string(orig1) + " " + to_string(orig2) + " " + to_string(curr);
    steps = 1;
    while (prev != orig1 || curr != orig2)
    {
        int temp = curr;
        curr = (prev + curr) % 10;
        prev = temp;
        necklace += " " + to_string(curr);
        steps++;
    }
    cout << necklace << endl
         << "Total Steps: " << steps;

    return 0;
}