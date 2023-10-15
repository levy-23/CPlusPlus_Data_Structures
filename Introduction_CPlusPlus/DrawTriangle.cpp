#include <iostream>

using namespace std;

void printStar(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "*";
    }
}
void printSpace(int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << " ";
    }
}
void printTriangle(int size)
{
    for (int i = 1; i <= size; i++)
    {
        printSpace(size - i);
        printStar(i * 2 - 1);
        cout << endl;
    }
}

int main()
{
    int size = 11;
    while (size > 10)
    {
        cout << "Please enter a size for the triangle (size must be 10 or under). ";
        cin >> size;
    }
    printTriangle(size);

    return 0;
}