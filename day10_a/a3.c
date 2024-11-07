#include <stdio.h>

int prime(int);

int main()
{
    int testCase, num, iter;
    
    printf("\nenter the no.of testcases: ");
    scanf("%d",&testCase);
    
    for(iter=0;iter<testCase;iter++)
    {
        printf("\nenter the value of num:");
        scanf("%d",&num);
        printf("\n%d",prime(num));
        
    }
    return 0;
}
int prime(int N)
{
    int output=0;
    int input=1;
    
    while(N>0)
    {
        int number=(N-1)%4;
        if(number==0)
        
            output+=2*input;
        
        else if(number==1)
            output+=3*input;
            
        else if(number==2)
            output+=5*input;
        
        else
        
           output+=7*input;
         
        
        input=input*10;
        N=(N-1)/4;
        
    }
    return output;

}