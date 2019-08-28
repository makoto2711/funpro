#include <iostream>
#include <cstring>
#include "windows.h"
#include <stdlib.h>

using namespace std;

int op;


void cond()
{
	if (op==1 || op==2 || op==3 || op==4)
	{
		system("cls");
	}
	
}


void menu()
{
	
	cout<<endl<<endl;
	cout<<"\t    ************************  "<<endl;
	cout<<"\t    *  B I E N V E N I D O *  "<<endl;
	cout<<"\t    ************************  "<<endl;
	cout<<endl<<endl<<endl;
	
	cout<<"  1) REGISTRO "<<endl;
	cout<<"  2) MOSTRAR DATOS DEL REGISTRO"<<endl;
	cout<<"  3) BUSCAR POR DNI"<<endl;
	cout<<"  4) ELIMINAR VENDEDEOR"<<endl; cin>>op;
	
	cond();	
}


void registro()
{
	
	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	int cantEstudiantes=100,m;
	
	struct estudiante
	{
		int codigo;
		string nombre;
		string apellidos;
		int nota;
		
	}arrEstudiantes[cantEstudiantes];
	
	
	//cout<<endl<<"  Ingrese la cantidad de estudiantes a registrar:  "; cin>> cantEstudiantes;
	cout<<endl<<endl;
	cin.ignore();
	cout<<endl<<"             INGRESE LA INFORMACION DEL VENDEDOR  "<<endl<<endl<<endl;
	
	for	(int i=0; i<cantEstudiantes;i++)
	{
		cout<<endl<<endl<<endl<<"   Vendedor Nro  "<<i+1<<endl<<endl;
		cout<<endl<<"   Ingrese su Nombre: ";
		getline(cin,arrEstudiantes[i].nombre);
		cout<<endl<<"   Ingrese su Apellido: ";
		getline(cin,arrEstudiantes[i].apellidos);
		cout<<endl<<"   Ingrese su Codigo: ";
		cin>>arrEstudiantes[i].codigo;
		cout<<endl<<"   Ingrese su Nota: ";
		cin>>arrEstudiantes[i].nota;
		cin.ignore();
		
	}
	
	
	
	cout<<"Regresar al menu (1):  ";  cin>>m;
	if (m==1)
	{
		menu();
	}
	
	
	
	
}



void sas()
{
	switch(op)
	{
		case 1: registro();break;
		case 2:break;
		case 3:break;
		case 4:break;
	}
	
}




int main()
{
	menu(); 
	sas();
	
	return 0;
}




/*

int me()
{
	
		
	cout<<endl<<endl<<endl;
	cout<<"   *** REPORTE DE ALUMNOS ***   ";
	cout<<endl<<endl;
	for(int i=0; i<cantEstudiantes; i++)	
	{
	 cout<<endl;
	 cout<<endl<<"   Codigo: \t"<<arrEstudiantes[i].codigo<<endl;
	 cout<<endl<<"   Nombre: \t"<<arrEstudiantes[i].nombre<<endl;
	 cout<<endl<<"   Apellido: \t"<<arrEstudiantes[i].apellidos<<endl;
	 cout<<endl<<"   Nota: \t"<<arrEstudiantes[i].nota<<endl;
	}	
	
}*/












