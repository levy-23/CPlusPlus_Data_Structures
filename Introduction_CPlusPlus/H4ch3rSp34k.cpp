#include <iostream>

using namespace std;

int main()
{
    string input, og;
    cout << "Please enter your phrase: ";
    getline(cin, input);
    og = input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'A' || input[i] == 'a')
        {
            input.replace(i, 1, "4");
        }
        else if (input[i] == 'E' || input[i] == 'e')
        {
            input.replace(i, 1, "3");
        }
        else if (input[i] == 'I' || input[i] == 'i')
        {
            input.replace(i, 1, "1");
        }
        else if (input[i] == 'O' || input[i] == 'o')
        {
            input.replace(i, 1, "0");
        }
    }
    cout << og << " in H4ch3r Sp34k: " << input;

    return 0;
}