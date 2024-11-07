#include <stdio.h>
int numGen(int);

int main()
{
    int num;
    printf("\nenter the number:");
    scanf("%d",&num);
    numGen(num);
    
    return 0;
}
int numGen(int N)
{
    int digits[]={1,4,6,9};
    int n1[10];
    int number=0;
    int itr;
    while(N>0)
    {
        n1[number++] = digits[(N-1)%4];
        N=(N-1)/4;
    }
    for(itr=number-1;itr>=0;itr--)
       printf("%d",n1[itr]);
       
       printf("\n");
}