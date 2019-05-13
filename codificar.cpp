#include <iostream>
#include "codificar.h"
using namespace std;
void codificador(int a[], int b){
	int copia[8];
	int resultado[8];
	for(int i=0; i<8 ; i++){
		copia[i]=a[i];
	}
	cout<<"Ingresado: \n";
	for(int i=0; i<8 ; i++){
		cout<<copia[i]<<" , ";
	}
	cout<<"\n\n";
	
	for(int i=0; i<b ; i++){
		
		for(int j=0; j<8; j++){
			if(j==0){
				if(copia[1]==1){
					resultado[j]=1;
				}
				else{
					resultado[j]=0;
				}
			}
			if(j==7){
				if(copia[6]==1){
					resultado[j]=1;
				}
				else{
					resultado[j]=0;
				}
			}
			if((j>0)&&(j<7)){
				if(((copia[(j-1)]==1)&&(copia[(j+1)]==0))||((copia[(j-1)]==0)&&(copia[(j+1)]==1))){
					resultado[j]=1;
				}
				else{
					resultado[j]=0;
				}
				
			}
		}
		
		for(int k=0; k<8 ; k++){
		copia[k]=resultado[k];
		}
	}
	cout<<"Resultado:"<<endl;
	for(int i=0; i<8 ; i++){
		cout<<resultado[i]<<" , ";
	}
}
