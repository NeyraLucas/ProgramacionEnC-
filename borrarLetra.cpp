//eliminar 1er vocal-- corrimiento a la derecha
//Autor: Luis Neyra
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	
	char arreglo[10]=" ";
	int i=0;
	cout<<"Ingrese un texto:";
	gets(arreglo);
	
	cout<<endl<<arreglo<<endl;
	
	for(i=0;i<10;i++){		
		if(arreglo[i]=='a'||arreglo[i]=='e'||arreglo[i]=='i'
		||arreglo[i]=='o'||arreglo[i]=='u'){
			arreglo[i]=' ';
			i=11;
		}	
	}

	cout<<endl<<arreglo<<endl;
	system("pause");
}
