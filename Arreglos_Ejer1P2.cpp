/*Paola Fernanda Nolasco Ramirez
Diseño Electronico y Sistemas inteligentes
2°k
A20110308*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct Estudiante
{
	char nombre [10];
	float cal_par1, cal_par2, cal_par3, cal_prom;
} est [5];

float CalProm (float a, float b, float c); 

int main()
{
	int numEst, promM = 0, promm = 0;
	float cal_par1, cal_par2, cal_par3;
	float mayor = 0, menor = 999999;
	
	cout << "Ingrese el numero de alumnos: ";
	cin >> numEst;
	system ("CLS");
	
	for (int i=0; i<numEst; i++)
	{
		fflush(stdin);
		cout << endl << i+1 << ". Ingresa tu nombre: " << endl;
		cin.getline(est[i].nombre, 10, '\n');
		cout << "Ingresa la calificacion del parcial 1: " << endl;
		cin >> est[i].cal_par1;
		cout << "Ingresa la calificacion del parcial 2: " << endl;
		cin >> est[i].cal_par2;
		cout << "Ingresa la calificacion del parcial 3: " << endl;
		cin >> est[i].cal_par3;
		est[i].cal_prom = CalProm(est[i].cal_par1, est[i].cal_par2, est[i].cal_par3);
		cout << "Tu promedio es: " <<est[i].cal_prom << endl; 
		
		if (est[i].cal_prom > mayor)
		{
			mayor = est[i].cal_prom;
			promM = i;
		}
		
		if (est[i].cal_prom < menor)
		{
			menor = est[i].cal_prom;
			promm = i;
			
			system("CLS");
		}
	}	
	
	
	cout << "\nEstudiante con MAYOR promedio:" << endl;
	cout << "Nombre: " << est[promM].nombre << endl;
	cout << "Promedio: " << est[promM].cal_prom << endl;
	
	cout << "\nEstudiante con MENOR promedio:" << endl;
	cout << "Nombre: " << est[promm].nombre << endl;
	cout << "Promedio: " << est[promm].cal_prom << endl;
	
	system("PAUSE");
	
	return 0;
}



float CalProm (float a, float b, float c)
{
	
	return (a+b+c)/3;
	
}
