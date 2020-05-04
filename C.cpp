//Rakibul Nahid
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==1&&b==1&&c==2)
        cout<<"Maruf";
    else if(a==2&&b==5&&c==3)
        cout<<"Monir";
    else if(a==4&&b==8&&c==2)
        cout<<"Mosaddek";
    else if(a==3&&b==9&&c==5)
        cout<<"Maria";
    else if(a==5&&b==9&&c==9)
        cout<<"Monika";
    else if(a==9&&b==1&&c==1)
        cout<<"Mehzabin";
    else
        cout<<"Your Number is Wrong";
    cout<<endl;
    return 0;
}