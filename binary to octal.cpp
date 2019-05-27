#include<stdio.h>
#include<math.h>
int main(){
	int n,d,r;
	int a=0;
	int i=0,j;
	printf(" enter a binary no. \n") ; 
	scanf("%d",&n) ; 
	while(n>0){
		j=n%10;
		n=n/10;
		a=a+j*pow(2,i);
		i++;
		} 
	printf(" the decimal no. %d", a);
	while(a>0){
		d= a%8  ;
		a=a/8 ; 
		r=r*10 + d;
		
	}
	printf(" \n the octal no. %d", r);	
return 0 ; 
}
