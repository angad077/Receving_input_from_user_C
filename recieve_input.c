#include <stdio.h>
int main()
{
    // RECIEVING INPUT FROM USER
    // SYNTAX FOR USING SCANF --> scanf("%d",&a);
    // & IS ADDRESS OF A
    int a, b;
    printf("Enter your a value\n");
    scanf("%d", &a);
    printf("Enter your b value\n");
    scanf("%d", &b);
    printf("your total is %d \n", a + b);
    return 0;
}
