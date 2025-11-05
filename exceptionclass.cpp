#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    try
    {
        int arr[5] = {1, 2, 3, 4, 5};
        cout << arr[5];
        throw out_of_range("cought an out_of_range error");
        throw runtime_error("A runtime error occured");
    }
    catch (runtime_error &e)
    {
        cout << "cought a runtime_error :" << e.what() << endl;
    }
    catch (out_of_range &e)
    {
        cout << "cought an out_of_range :" << e.what() << endl;
    }
    return 0;
}