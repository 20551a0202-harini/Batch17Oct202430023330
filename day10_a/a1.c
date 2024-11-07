#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0
#define bool int


int numofWays(int limit, bool primes[]) {
   
    for (int i = 0; i <= limit; i++) {
        primes[i] = true;
    }


    primes[0] = primes[1] = false;

    
    for (int i = 2; i * i <= limit; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= limit; j += i) {
                primes[j] = false;
            }
        }
    }
}


int primePairs(int n, bool primes[]) {
    int count = 0;

    for (int p1 = 2; p1 <= n / 2; p1++) {
        int p2 = n - p1;
        
        if (primes[p1] && primes[p2] && p1 <= p2) {
            printf("%d = %d + %d\n", n, p1, p2);
            count++;
        }
    }

    if (count == 0) 
        printf("NoofWays = -1\n");
     else 
        printf("NoofWays = %d\n", count);
    
}

int pInteger() 
{
    int n;
    while (1) {
        printf("Enter a positive integer: ");
        if (scanf("%d", &n) != 1 || n <= 0)
        
            printf("Invalid input. Please enter a positive integer.\n");
            
        else 
    
            break;
    }
    return n;
}

int main() 
{
   
    int n =pInteger();
    
    bool primes[n + 1];

  
    numofWays(n, primes);
    primePairs(n, primes);

    return 0;
}