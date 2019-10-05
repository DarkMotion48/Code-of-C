///Write a C++ program to find out cube and square of a number using multiple inheritance,
///multilevel inheritance and hierarchal inheritance

#include<bits/stdc++.h>
using namespace std;

class number3
{

};

class square : public number3
{
public:
    int a=3;
    square()
    {
        a=a*a;
        cout << "Square is: " << a << endl;
    }
};

class cube : public number3
{
public:
    int a=3;
    cube()
    {
        a=a*a*a;
        cout << "Cube is: " << a << endl;
    }
};

class number : public square , public cube
{

};

class number2 : public number
{

};

int main()
{
    number obj;
    number2 obj2;
    square obj3;
    cube obj4;
}


/*

///Write a C++ program to find out cube and square of a number using multiple inheritance.

#include<bits/stdc++.h>
using namespace std;

class square
{
public:
    int a=3;
    square()
    {
        a=a*a;
        cout << "Square is: " << a << endl;
    }
};

class cube
{
public:
    int a=3;
    cube()
    {
        a=a*a*a;
        cout << "Cube is: " << a << endl;
    }
};

class number : public square , public cube
{

};

int main()
{
    number obj;
}







///Write a C++ program to find out cube and square of a number using multilevel inheritance.

#include<bits/stdc++.h>
using namespace std;

class square
{
public:
    int a=3;
    square()
    {
        a=a*a;
        cout << "Square is: " << a << endl;
    }
};

class cube : public square
{
public:
    int a=3;
    cube()
    {
        a=a*a*a;
        cout << "Cube is: " << a << endl;
    }
};

class number : public cube
{

};

int main()
{
    number obj;
}












///Write a C++ program to find out cube and square of a number using hierarchal inheritance.

#include<bits/stdc++.h>
using namespace std;

class number
{

};

class square : public number
{
public:
    int a=3;
    square()
    {
        a=a*a;
        cout << "Square is: " << a << endl;
    }
};

class cube : public number
{
public:
    int a=3;
    cube()
    {
        a=a*a*a;
        cout << "Cube is: " << a << endl;
    }
};

int main()
{
    square obj1;
    cube obj2;
}

*/




