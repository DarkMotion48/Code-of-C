#include<iostream>
using namespace std;

int MIN(int a[ ],int k,int n,int loc)
{
    loc=k;
    int min = a[loc];
    int i;
    for(i=k+1;i<=n;i++){
        if(min > a[i]){
            loc=i;
            min=a[i];
        }
    }
    return loc;
}


int main()
{
    int k,n,loc,temp;
    cout << "Enter the Array Size: ";
    cin >> n;
    int a[n];
    cout << "Enter the Array Elements: ";
    for(k=1;k<=n;k++)
        cin >> a[k];
    for( k=1 ; k<=n ; k++){
        loc=0;
        loc=MIN(a,k,n,loc);
        temp=a[k];
        a[k]=a[loc];
        a[loc]=temp;
    }
    cout << "Array in Ascending Order: ";
    for( k=1 ; k<=n ; k++ )
        cout << a[k] <<"\t";
    cout << "\n\n" ;
    return 0;
}
