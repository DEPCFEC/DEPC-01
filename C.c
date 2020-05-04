//Abid Hasan Roni
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==1&&b==1&&c==2)
        printf("Maruf");
    else if(a==2&&b==5&&c==3)
        printf("Monir");
    else if(a==4&&b==8&&c==2)
        printf("Mosaddek");
    else if(a==3&&b==9&&c==5)
        printf("Maria");
    else if(a==5&&b==9&&c==9)
        printf("Monika");
    else if(a==9&&b==1&&c==1)
        printf("Mehzabin");
    else
        printf("Your Number is Wrong");
    printf("\n");
    return 0;
}