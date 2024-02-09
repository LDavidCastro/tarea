#include<iostream>
#include<conio.h>
#include <windows.h>
using namespace std;

void menu1();
void menu2();
void menu3();
void salir();

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

float velocidad1, velocidad2, tiempo, distancia, difrenciaVelocidad;
float velocidadInicial, aceleracion, velocidadFinal;

int main() {

	menu1();
	salir();
	
	return 0;
}


void menu1() {
	int op1;
	do{
		system("cls");
		gotoxy(30, 10);cout << " Menu Principal";
		gotoxy(30, 12);cout << " 1. Movimiento Rectilineo Uniforme";
		gotoxy(30, 13);cout << " 2. Movimiento Rectilineo Uniforme variado";
		gotoxy(30, 14);cout << " 3. salir";
		gotoxy(30, 15);cout << "Ingrese su opcion: ";
		gotoxy(49, 15);cin >> op1;
	switch (op1){
	case 1: menu2(); break;
	case 2: menu3(); break; }

	} while (op1 != 3);
}

void menu2() {
	int op2;
	do{
		system("cls");
		gotoxy(30, 10);cout << "Submenu Movimiento Rectilineo Uniforme";
		gotoxy(30, 12);cout << "1. Calcular distancia";
		gotoxy(30, 13);cout << "2. Calcular tiempo";
		gotoxy(30, 14);cout << "3. Calcular velocidad";
		gotoxy(30, 15);cout << "4. tiempo de alcance";
		gotoxy(30, 16);cout << "5. Volver al menú principal";
		gotoxy(30, 17);cout << "Ingrese su opcion: ";
		cin >> op2;

		switch (op2)
		{
		case 1:

			system("cls");
			gotoxy(30,  10);cout << "1. Calcular distancia";
			gotoxy(30, 12);cout << "Ingrese la velocidad (m/s): "; cin >> velocidad1;
			gotoxy(30, 13);cout << "Ingrese el tiempo (s): ";      cin >> tiempo;

			gotoxy(30, 15);cout << "La distancia recorrida es: " << velocidad1 * tiempo;
			_getch();
			    break;
		case 2:
			system("cls");
			gotoxy(30, 10);cout << "2. Calcular tiempo";
			gotoxy(30, 12);cout << "Ingrese la distancia recorrida(m): "; cin >> distancia;
			gotoxy(30, 13);cout << "Ingrese la velocidad (m/s): ";        cin >> velocidad1;
			if (velocidad1==0){
				gotoxy(30, 15);cout << "Error: La velocidad no puede ser Cero.";}
			else{
				gotoxy(30, 15);cout << "El tiempo trscurrido es: " << distancia / velocidad1 << "s";
			}
			_getch();
			 break;
		case 3:
			system("cls");
			gotoxy(30, 10);cout << "3. Calcular velocidad";
			gotoxy(30, 12);cout << "Ingrese la distancia recorrida (m): "; cin >> distancia;
			gotoxy(30, 13);cout << "Ingrese el tiempo trascurrido(s): ";   cin >> tiempo;
			if (tiempo==0)
			{
				gotoxy(30, 15);cout << "Error: El tiempo no puede ser cero.";
			}
			else{
				gotoxy(30, 15);cout << " la velocidad es: " << distancia / tiempo << "(m/s): ";
			}
			_getch();
			    break;
		case 4: 
			system("cls");
			gotoxy(30, 10);cout << "4. tiempo de alcance";
			gotoxy(30, 12);cout << "Ingrese la distancia inicial entre los dos objetos(m): "; cin >> distancia;
			gotoxy(30, 13);cout << "Ingrese la velocidad del primer objeto (m/s): ";          cin >> velocidad1;
			gotoxy(30, 14);cout << "Ingrese la velocidad del segundo objeto (m/s); ";         cin >> velocidad2;
			if (velocidad1 <= velocidad2) {
				gotoxy(30, 16);cout << "Er1ror: La velocidad del primer objeto debe se mayor que la del segundo objeto.";
			}
			else
			{
				gotoxy(30, 16);cout << " El tiempo de alcance entre los dos objetos es: " << distancia / (velocidad1 - velocidad2) << "s";
			}
			_getch();
			break;
			
		}
	} while (op2!=5);
}

void menu3() {
	int op3;
	do{
	system("cls");
	gotoxy(30, 10);cout << "Submenú Movimiento Rectilíneo Uniforme Variado";
	gotoxy(30, 12);cout << "1. Calcular Velocidad Final";
	gotoxy(30, 13);cout << "2. Calcular Aceleracion";
	gotoxy(30, 14);cout << "3. Calcular Velocidad Inicial";
	gotoxy(30, 15);cout << "4. Calcular Velocidad Final";
	gotoxy(30, 16);cout << "5. Volver al menú principal";
	gotoxy(30, 17);cout << "Ingrese su opcion: ";
	cin >> op3;
	
	switch (op3)
	{
	case 1:
		system("cls");
		gotoxy(30, 10);cout << "1. Calcular Velocidad Final";
		gotoxy(30, 12);cout << "Ingrese la velocidad inicial(m/s): "; cin >> velocidadInicial;
		gotoxy(30, 13);cout << "Ingrese la aceleracion (m/s^2): ";    cin >> aceleracion;
		gotoxy(30, 14);cout << "ingrese el tiempo (s): ";             cin >> tiempo;

		gotoxy(30, 16);cout << "la velocidad final es: " << velocidadInicial + (aceleracion * tiempo) << "m/s";
		_getch();
		break;
	case 2:
		system("cls");
		gotoxy(30, 10);cout << "2. Calcular Aceleracion";
		gotoxy(30, 12);cout << "Ingrese la velocidad inicial (m/s): "; cin >> velocidadFinal;
		gotoxy(30, 13);cout << "Ingrese la velocidad final (m/s): ";   cin >> velocidadInicial;
		gotoxy(30, 14);cout << "ingrese el tiempo (s): ";              cin >> tiempo;

		if (tiempo == 0){
			gotoxy(30, 16);cout << "Error: El tiempo no puede ser cero.";}
		else {
			gotoxy(30, 16);cout << "La aceleracion es: " << (velocidadFinal - velocidadInicial) / tiempo << "m/s^2.";
		}
		_getch();
		break;
	case 3:
		system("cls");
		gotoxy(30, 10);cout << "3. Calcular Velocidad Inicial";
		gotoxy(30, 12);cout << "Ingrese la velocidad final (m/s): "; cin >> velocidadFinal;
		gotoxy(30, 13);cout << "Ingrese la aceleracion (m/s^2): ";   cin >> aceleracion;
		gotoxy(30, 14);cout << "ingrese el tiempo (s): ";            cin >> tiempo;

		gotoxy(30, 16);cout << "La velocidad inicial es: " << velocidadFinal - (aceleracion * tiempo) << "m/s";
		_getch();
		break;
	case 4:
		system("cls");
		gotoxy(30, 10);cout << "4. Calcular Velocidad Final";
		gotoxy(30, 12);cout << "Ingrese velocidad inicial (m/s): "; cin >> velocidadInicial;
		gotoxy(30, 13);cout << "ingrese la aceleracion (m/s^2): "; cin >> aceleracion;
		gotoxy(30, 14);cout << "Ingrese el tiempo (s): "; cin >> tiempo;

		gotoxy(30, 16);cout << "La velocidad final es: " << velocidadInicial + (aceleracion * tiempo) << "m/s.";
		_getch();
		break;}

	} while (op3!=5);
	
}

void salir() {
	system("cls");
	gotoxy(45, 10);cout << " Saliendo del programa";
	_getch();
}