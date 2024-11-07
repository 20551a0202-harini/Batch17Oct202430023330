#include <stdio.h>


int printSpaces(int N, int i) {
    for (int j = 1; j <= N - i; j++) {
        printf(" ");
    }
}
int alphabetTriangle(int N) {
    for (int i = 1; i <= N; i++) {
      
        printSpaces(N, i);
        
        for (int j = 1; j <= i; j++) 
            printf("%c", 'A' + j - 1);
    

       
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }

       
        printf("\n");
    }
}


void printTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        
        printSpaces(N, i);

        for (int j = 1; j <= i; j++) 
            printf("%d", j);
        

        for (int j = i - 1; j >= 1; j--) 
            printf("%d", j);

        printf("\n");
    }
}

int validInput() 
{
    int N;
    while (1) {
        if (scanf("%d", &N) != 1 || N <= 0) 
        {
            printf("Invalid input. Please enter a positive integer: ");
            while (fgetc(stdin) != '\n');  
        } 
        else 
        {
            return N;
        }
    }
}

int main() 
{
    int N;

    printf("Enter the value of N: ");
    N = validInput();

    printf("\nAlphabet Triangle:\n");
    alphabetTriangle(N);

    printf("\nNumber Triangle:\n");
    printTriangle(N);

    return 0;
}




