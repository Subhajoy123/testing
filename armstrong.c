#include<stdio.h>
#include<string.h>
#include<math.h>
}
int main(){
	int n,d,s=0,m;
	char m[25] =n ;
	printf(" enter ant no. ");
	scanf("%d",&n);
	m=n;
	while(n>0){
		d=n%10;
		n=n/10;
		s=s+pow(d, strlen(m)) ;
	}
	printf("%d", s) ; 
	if(m==s)
	printf( " armstrong ") ; 
	else
	printf(" not armstrong ") ; 
	return 0 ; 
}
