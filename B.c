//Aslam Mahmud Siam
#include<stdio.h>

int abs(int n){
    if(n<0)return n*-1;
    return n;
}
int main()
{
	int t,cs=1;
	scanf("%d",&t);
	while(t--){
	    int a,n;
	    scanf("%d%d",&a,&n);
	    if(a!=0)printf("Case %d: %d\n",cs++,abs(a));
	    else printf("Case %d: %d\n",cs++,n);
	}
}
