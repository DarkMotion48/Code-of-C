#include<iostream>
using namespace std;

int getMax(int a[], int n)
{
    int mx = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > mx)
            mx = a[i];
    return mx;
}

void countSort(int a[], int n, int exp)
{
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i < n; i++)
        count[ (a[i]/exp)%10 ]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--){
        output[count[ (a[i]/exp)%10 ] - 1] = a[i];
        count[ (a[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
        a[i] = output[i];
}

void radixsort(int a[], int n)
{
    int m = getMax(a, n);
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(a, n, exp);
}

void print(int a[], int n)
{
    cout << "Array Elements in Ascending Order: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n\n";
}

int main()
{
    int n,i;
    cout << "Enter the size of Array: ";
    cin >> n;
    int a[n];
    cout << "Enter Array Elements: ";
    for(i=0;i<n;i++)
        cin >> a[i];
    radixsort(a, n);
    print(a, n);
    return 0;
}
