#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int ans;
    float answ;
    printf("Enter Number:- ");
    scanf("%d", &a);
    printf("Enter Number:- ");
    scanf("%d", &b);
    printf("Enter Conversion:- ");
    scanf("%d", &c);
    getchar();
    if ( c == 1)
    {
        ans = a + b;
        printf("Answer:- %d", ans);
    }
    
    else if ( c == 2)
    {
        ans = a - b;
        printf("Answer:- %d", ans);
    }
    
    else if ( c == 3)
    {
        ans = a * b;
        printf("Answer:- %d", ans);
    }
    
    else if ( c == 4)
    {
        ans = a / b;
        printf("Answer:- %d", ans);
    }
    
    else if(c == 5)
    {
        answ = a % b;
        printf("Answer:- %f", answ);
    }
    else
    {
        printf("1=+, 2=-, 3=*, 4=/, 5=modulus");
    }
    printf("\nThank You");
    getchar();
}