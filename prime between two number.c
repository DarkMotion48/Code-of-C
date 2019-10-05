#include <stdio.h>
int Prime(int num);
int printPrimes(int n1, int n2);


int main()
{
    int n1, n2;

    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &n1, &n2);

    Primes(n1, n2);

    return 0;
}

int Primes(int n1, int n2)
{
    printf("All prime number between %d to %d are: ", n1, n2);

    while(n1 <= n2)
    {
        if(Prime(n1))
        {
            printf("%d, ", n1);
        }

        n1++;
    }
}

int Prime(int num)
{
    int i;

    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
