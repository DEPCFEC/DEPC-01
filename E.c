//Abid Hasan Roni
#include <stdio.h>
#include <string.h>

int main(){
    char txt[50],ans[50];
    int num;
    scanf("%d",&num);
    scanf("%*c%s",txt);
    int i,j=0,L=strlen(txt);
    for ( i = 0; i < L; i++){
        if(txt[i]-num<65){
            txt[i]=txt[i]-num+26;
        }
        else{
            txt[i]=txt[i]-num;
        }
    }
    printf("%s\n",txt);
    return 0;
}