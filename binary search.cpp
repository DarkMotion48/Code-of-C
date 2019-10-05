#include<iostream>
using namespace std;

int  binary_search(int a[ ],int lb,int ub,int item,int loc)
{
    int beg,end,mid;
    beg=lb;
    end=ub;
    mid=int((beg+end)/2);
    while(beg<=end && a[mid]!=item){
        if(item < a[mid])
            end=mid-1;
        else
            beg=mid+1;
        mid=int((beg+end)/2);
    }
    if(a[mid]== item)
        return mid;
    else
        return -1;
}

int main()
{
    int n;
    cout<< "Enter the Array Size: ";
    cin >> n;
    int a[n];
    int i;
    cout<< "Enter the Array Elements: ";
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    int item,loc;
    cout << "Enter the item: ";
    cin >> item;
    if(binary_search(a,0,n-1,item,loc) == -1)
        cout << "Item is not in that Array.";
    else
        cout << "Item in that Array.";
}
