#include <iostream>
using namespace std;
int main()
{
    double numerator, denumerator, divide;
    cout << "enter numerator";
    cin >> numerator;
    cout << "enter denumerator";
    cin >> denumerator;
    try
    {
        if (denumerator == 0)
            throw 0;
        divide = numerator / denumerator;
        cout << "numerator" << "/" << "denumerator = " << divide << endl;
    }
    catch (int error)
    {
        cout << "Error cannot divide by " << error << endl;
    }
    return 0;
}