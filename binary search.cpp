#include<iostream>
using namespace std ; 
int main(){
	int n;
	cout << " enter the size of the array ";
	cin>> n ; 
	int *a ; 
	a=new int[n] ; 
	cout << "\n enter the array of " << n << " enements " ; 
	for (int i=0 ; i<n; i++){
		cin >> a[i] ; 
	}
	cout << "\n your array " ; 
	for (int i=0 ; i<n; i++){
		cout<< a[i] << ","; 
	}
	int p=0 ; 
	for(int i=0 ; i<n-1; i++){
		for(int j=i+1 ; j<n; j++){
			if(a[i]>a[j]){
			p=a[i];
			a[i]=a[j] ; 
			a[j] = p ; 
		}
		}
	}
		cout << "\n your sorted array " ; 
	for(int i=0; i<n ; i++){
		cout<< a[i] << "," ; 
	}
	int u,l,m,k ; 
	l=0 ; 
	u=n-1;
	cout << "\n enter the element to search ";
	cin >> k ; 
	while(l<=u){
		m=(l+u)/2 ; 
		if(a[m]==k){
		
		cout<< " the element is present " ;
		//break;
		}
		else if(k>a[m])
		l=m+1;
		else
		u=m-1 ; 
		
	
	
	
	}
	
	
	
	
	
	
	
	
	
return 0 ; 	
}
