///Write a C++ program that can read an integer array(one dimensional array) and sorts its elements in ascending order using class and object concept.

#include<bits/stdc++.h>
using namespace std;

class sorting
{
public:
    sorting()
    {

    }
    void arraysort(int a[],int n)
    {
        int i,j,temp;
        for(i=1;i<n;++i){
            for(j=0;j<(n-i);++j)
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
        }
	cout<<"Sorted Array: ";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
    cout << endl;
    }
};
int main()
{
    int a[5] = {5,4,3,2,1};
    sorting obj;
    obj.arraysort(a,5);
}

