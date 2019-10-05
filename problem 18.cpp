///Implement expectation handling in a C++ program, which throws a division by zero exception and catch it in catch block.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<< "Enter 2 numbers: ";
    cin>> a >> b;
    try
    {
        if (b != 0)
        {
            float div = (float)a/b;
            if (div < 0)
                throw 'e';
            cout<< "a/b = " << div;
        }
        else
            throw b;
    }
    catch (int e)
    {
        cout<< "Exception: Division by zero";
    }
    catch (char st)
    {
        cout<< "Exception: Division is less than 1";
    }
    catch(...)
    {
        cout<< "Exception: Unknown";
    }
    return 0;
}
