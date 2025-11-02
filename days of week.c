#include<stdio.h>
int main()
{
    int a ;
    scanf("%d", &a);
    switch(a)
    {
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thruesday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("saturday");
        break;
        default:
        printf("error");
        break;
    }

    return 0;
}
