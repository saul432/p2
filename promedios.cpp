#include <iostream>
#include <conio.h>
#include "gotoxy.h"
using namespace std;


struct persona{
	char nom[10];
	float p1;
	float p2;
	float p3;
};
void entrada (persona a);

main (){
	persona a;
	entrada(a);

	
}
void entrada (persona a){
	gotoxy(10,5);cout<<"Nombre ";	
	gotoxy(25,5);cout<<"Parcial 1 ";	
	gotoxy(40,5);cout<<"Parcial 2 ";
	gotoxy(55,5);cout<<"Parcial 3 ";
	gotoxy(70,5);cout<<"Calificacion final";
	int lim;
	gotoxy(1,1);cout<<"Cuantos alumnos pondra: ";cin>>lim;
	
	int x;
	float s;
	s=0;
	for(x=1; x<=lim; x++){
	
	gotoxy(10,5+(x*2));cin>>a.nom;
	gotoxy(25,5+(x*2));cin>>a.p1;
	gotoxy(40,5+(x*2));cin>>a.p2;
	gotoxy(55,5+(x*2));cin>>a.p3;
	s=a.p1+a.p2+a.p3;
	s=s/3;
	gotoxy(70,5+(x*2));cout<<s;
	}
}
	



