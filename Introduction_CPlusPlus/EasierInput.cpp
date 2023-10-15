#include <iostream>

using namespace std;

string inputLine(string prompt){
    string input;
    cout << prompt;
    getline(cin, input);
    return input;
}
double inputDouble(string prompt){
    double input;
    cout << prompt;
    cin >> input;
    return input;
}
double inputDouble(string prompt, double min, double max){
    double input = min -1;
    while(input < min || input > max){
        input = inputDouble(prompt);
    }
    return input;
}
int inputInt(string prompt){
    int input;
    cout << prompt;
    cin >> input;
    return input;
}
int inputInt(string prompt, int min, int max){
    int input = min -1;
    while(input < min || input > max){
        input = inputInt(prompt);
    }
    return input;
}

int main()
{
    string sinput = inputLine("Please enter a string: ");
    cout << "You entered: " << sinput << endl;
    double dinput = inputDouble("Please enter a double: ");
    cout << "You entered: " << dinput << endl;
    double dbinput = inputDouble("Please enter a double between 0 and 1: ", 0, 1);
    cout << "You entered: " << dbinput << endl;
    int iinput = inputInt("Please enter a int: ");
    cout << "You entered: " << iinput << endl;
    double ibinput = inputInt("Please enter a int between 0 and 10: ", 0, 10);
    cout << "You entered: " << ibinput << endl;
    
    
    return 0;
}