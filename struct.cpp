#include <iostream>
#include <conio.h>
#include "gotoxy.h"
using namespace std;


struct persona{
	char nom[10];
	int edad;
	char sexo;
	float sueldo; 
};
void entrada (persona a);
void lectura(persona a);
main (){
	persona a;
	entrada(a);
	lectura(a);
	
}
void entrada (persona a){
	gotoxy(10,5);cout<<"Nombre: ";	
	gotoxy(25,5);cout<<"Edad: ";	
	gotoxy(40,5);cout<<"Sexo: ";
	gotoxy(55,5);cout<<"Sueldo: ";

}
void lectura(persona a){
	int lim=2;
	int x,s;
	s=0;
	for(x=1; x<=lim; x++){
	
	gotoxy(10,5+(x*2));cin>>a.nom;
	gotoxy(25,5+(x*2));cin>>a.edad;
	gotoxy(40,5+(x*2));cin>>a.sexo;
	gotoxy(55,5+(x*2));cin>>a.sueldo;
		s=s+a.sueldo;
}
	cout<<s;
	}




