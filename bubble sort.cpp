#include<iostream>
using namespace std ;
int main (){
	int a[10] ; 
	cout << " enter the array " ;
	for(int i=0; i<10 ; i++){
		cin>> a[i] ; 
	}
	cout << "\n your entered array " ; 
	for(int i=0; i<10 ; i++){
		cout<< a[i] << "," ; 
	}
	int p=0 ; 
	for(int i=0; i<10 ; i++){
		for(int j=0 ; j<10-i-1; j++){
			if(a[j]>a[j+1]){
				p=a[j] ; 
				a[j]=a[j+1];
				a[j+1] = p;
			}
		}
	}
	cout << "\n the sorted array " ; 
	for(int i=0; i<10 ; i++){
		cout<< a[i] << ","; 
	}
}
