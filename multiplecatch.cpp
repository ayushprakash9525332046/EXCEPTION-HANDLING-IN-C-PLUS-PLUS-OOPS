#include <iostream>
using namespace std;
int main()
{
    double numerator, denumerator, arr[4] = {0.0, 0.1, 0.2, 0.3};
    int index;
    cout << "enter index number";
    cin >> index;
    try
    {
        if (index >= 4)
            throw "error ! out side overflow index";

        cout << "enter numerator";
        cin >> numerator;
        cout << "enter denumerator";
        cin >> denumerator;
        if (denumerator == 0)
            throw 0;

        arr[index] = numerator / denumerator;
        cout << arr[index];
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (int num)
    {
        cout << "error! cannot divide with zero " << endl;
    }
    catch (...)
    {
        cout << "unexpected exception !" << endl;
    }
    return 0;
}