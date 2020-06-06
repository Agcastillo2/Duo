#include "Arreglo.cpp"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]){
	
	int n,mcd,mcm;
	Arreglo vector =Arreglo();
	cout<<"Ingrese la cantidad de numeros"<<endl;
	cin >> n;
	int *v= new int [n];
	vector.encerar(v,n);
	vector.imprimir(v,n);

	vector.ingresar(v,n);
	vector.imprimir(v,n);

	mcd=vector.mcd(v,n);
	mcm = vector.mcm(v,n);
	
	cout<<"el mcd es :"<< mcd<<"y el mcm es : "<<mcm<<endl;
	system("pause");
	free(v);
	system("pause");
	return 0;
}
