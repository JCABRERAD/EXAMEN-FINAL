#include <iostream>
#include <stdlib.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<fstream>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;

class Password{
	private:
	int administrador=1031, colab1=3217;
	int admin2, admin3;
	float x1, y1;
	
	public: 
	Password(int,int); 
	Password(float, float);
	int getAdministrador(){
	return administrador;
	}
	int getColab1(){
	return colab1;
	}
};

Password::Password(int _admin2, int _admin3){ admin2= _admin2; admin3=_admin3; 
}

Password::Password(float _x1, float _y1){ x1=_x1; 	y1=_y1;
}



void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}

void cuadro(int x1, int y1, int x2, int y2){
    int i;
    for (i=x1;i<x2;i++){	
		gotoxy(i,y1);printf("Ä") ; //linea horizontal superior 
		gotoxy(i,y2);printf("Ä") ; //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){	
		gotoxy(x1,i);printf("³") ; //linea vertical izquierda
		gotoxy(x2,i);printf("³") ; //linea vertical derecha
    }
    
    gotoxy(x1,y1); printf("Ú"); 
    gotoxy(x1,y2); printf("À");
    gotoxy(x2,y1); printf("¿");
    gotoxy(x2,y2); printf("Ù");
}
int devolver();
ifstream archivo;
string texto;

ofstream hora1;
void hora11(){
int argc; char *argv[0];
hora1.open("hora1.txt",ios::out|ios::app);
 if(hora1.is_open()){
    

time_t now = time(0);

tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;

//Formato=hoy miercoles, 27 de mayo del 2015

system("PAUSE");

hora1 << endl << "Hoy " << dia_semana[time->tm_wday] << ", "<< time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    hora1 .close();
}
ofstream hora2;
void hora22(){
int argc; char *argv[0];
hora2.open("hora2.txt",ios::out|ios::app);
 if(hora2.is_open()){
    
time_t now = time(0);

tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year; //Formato=hoy miercoles, 27 de mayo del 2015

system("PAUSE");

hora2 << "Hoy " << dia_semana[time->tm_wday] << ", "<< time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    hora2 .close();
}
ofstream hora3;
void hora33(){
int argc; char *argv[0];
hora3.open("hora3.txt",ios::out|ios::app);
 if(hora3.is_open()){
    
time_t now = time(0);

tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;
system("PAUSE");

hora3 << "Hoy " << dia_semana[time->tm_wday] << ", "<< time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    hora3.close();
}

void lecturaminoristas(){
	ifstream archivo;
	string nombreArchivo,texto;
	
	
	archivo.open("minorista.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
}


void lecturamayoristas(){
	ifstream archivo;
	string texto;
	
	
	archivo.open("mayorista.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //Cerramos el archivo
	
}


ofstream agregarclientea; 
ofstream minorista;
ofstream mayorista; 
ifstream consultaa; 
char primernombre[50];
char segundonombre[50];
char primerapellido[50];
char segundoapellido[50];
char nit[50];
int edad; 
int compra; 
int codigoa; 
int auxCodigoa;
bool repetidoa=false;
void agregarclientea1(){

agregarclientea.open("clientealeatorio.txt",ios::out|ios::app);
consultaa.open("clientealeatorio.txt",ios::in);
    if(agregarclientea.is_open() && consultaa.is_open()){
    fflush(stdin);	
	cout << "                  INGRESA LA CLAVE DEL CLIENTE "; 
	cin >> auxCodigoa;
	consultaa>>codigoa; 
    while(!consultaa.eof()){
	consultaa>>primernombre>>segundonombre>>primerapellido>>segundoapellido>>nit>>compra>>edad; 
        if(auxCodigoa==codigoa){
                cout<<"Ya Existe un Registro con esta Clave";
                repetidoa=true;
                break;
            }
            consultaa>>codigoa;
        }
        if(repetidoa==false){
    
    fflush(stdin);	

	cout << "               DIGITA EL PRIMER NOMBRE: " ;
	cin.getline(primernombre,50,'\n');
	cout << "               DIGITA EL SEGUNDO NOMBRE: " ;
	cin.getline(segundonombre,50,'\n');
	cout << "               DIGITE EL PRIMER APELLIDO DEL CLIENTE " ; 
	cin.getline(primerapellido,50,'\n');
	cout << "               DIGITE EL PRIMER APELLIDO DEL CLIENTE " ; 
	cin.getline(segundoapellido,50,'\n');
	cout << "               DIGITE EL NIT DEL CLIENTE " ; 
	cin.getline(nit,50,'\n');
	cout << "               DIGITE LA CANTIDAD COMPRADA "; 
	cin >>compra;
	cout << "               DIGITE LA EDAD DEL CLIENTE " ; 
	cin>>edad; 
agregarclientea<<auxCodigoa<<"  "<<primernombre<<"  "<<segundonombre<<"  "<<primerapellido<<"  "<<segundoapellido<<"  "<<nit<<"  "<<compra<<"  "<<edad<<"  "<<endl; 
            cout<<"Registro Agregagado"<<endl;
        }

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    agregarclientea.close();
    consultaa.close();
    
    if(compra>=0 && compra<=5000){
system("cls");
getch();
system("COLOR A0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("CLASIFICADO COMO MINORISTA");
getch();
minorista.open("minorista.txt",ios::out|ios::app);
if(minorista.is_open()){

minorista << " CODIGO DEL CLIENTE " << auxCodigoa << " " << codigoa << " PROMEDIO DE COMPRA " << compra << endl; 
	
} else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
 minorista.close();   
    
	} else if (compra >5000 && compra<=1000000000){
getch();
system("COLOR A0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("CLASIFICADO COMO MAYORISTA");
getch();
mayorista.open("mayorista.txt",ios::out|ios::app);

getch();
system("cls");

if(mayorista.is_open()){

mayorista << " CODIGO DEL CLIENTE " << auxCodigoa << " "  << " PROMEDIO DE COMPRA " << compra << endl; 
} else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
 mayorista.close();   

	}
    
}//Fin funcion altas

void mostrarclientea(){
	ifstream lectura; 
	lectura.open("clientealeatorio.txt",ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "                       VISUALIZACION DE LOS DATOS DE LOS CLIENTES INGRESADOS " << endl << endl;

lectura >> codigoa; 
while(!lectura.eof()){

lectura>>primernombre>>segundonombre>>primerapellido>>segundoapellido>>nit>>compra>>edad; 

cout << "              NOMBRES " << primernombre <<" "<< segundonombre<< endl;
cout << "              APELLIDOS " << primerapellido << "  " << segundoapellido << endl; 
cout << "              NIT DEL CLIENTE " << nit << endl; 
cout << "              CANTIDAD CONSUMIDA Q." << compra <<".00"<<endl; 
cout << "              EDAD DEL CLIENTE " << edad << endl; 
  
lectura >> codigoa; 
cout << endl << endl; 

}}else {
	cout << "           NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} 
lectura.close();

 }

char aprimernombre[50];
char asegundonombre[50];
char aprimerapellido[50];
char asegundoapellido[50];
    
void modificacionesa(){
    bool encontradoa=false;
	ofstream aux;
    ifstream lectura;
    
    int auxClave=0;
    aux.open("auxiliar.txt",ios::out);
    lectura.open("clientealeatorio.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"           INGRESE LA CLAVE DEL CLIENTE A MODIFICAR: ";
        cin>>auxClave;
        lectura>>codigoa;
        while(!lectura.eof()){
        lectura>>primernombre>>segundonombre>>primerapellido>>segundoapellido>>nit>>compra>>edad; 
 
if(auxClave==codigoa){
encontradoa=true;
cout<<"          __________________________"<<endl;
cout << "                CODIGO DEL CLIENTE " << codigoa;
cout << "                NOMBRES " << primernombre <<" "<< segundonombre<< endl;
cout << "                APELLIDOS " << primerapellido << "  " << segundoapellido << endl; 
cout << "                NIT DEL CLIENTE " << nit << endl; 
cout << "                CANTIDAD CONSUMIDA Q." << compra <<".00"<<endl; 
cout << "                EDAD DEL CLIENTE " << edad << endl; 
cout<<"          __________________________"<<endl;
fflush(stdin);	

cout<<"              INGRESE EL NUEVO PRIMER NOMBRE DEL CLIENTE CON CLAVE "<<codigoa<<": ";
cin.getline(aprimernombre,50,'\n');
cout<<"              INGRESE EL NUEVO SEGUNDO NOMBRE DEL CLIENTE CON CLAVE "<<codigoa<<": ";
cin.getline(asegundonombre,50,'\n');
cout<<"              INGRESE EL NUEVO PRIMER APELLIDO DEL CLIENTE CON CLAVE "<<codigoa<<": ";
cin.getline(aprimerapellido,50,'\n');
cout<<"              INGRESE EL NUEVO SEGUNDO DEL CLIENTE CON CLAVE "<<codigoa<<": ";
cin.getline(asegundoapellido,50,'\n');
	
aux<<codigoa<<"  "<<aprimernombre<<"  "<<asegundonombre<<"  "<<aprimerapellido<<"  "<<asegundoapellido<<"  "<<nit<<"  "<<compra<<"  "<<edad<<"  "<<endl; 
    
   		cout<<"Registro Modificado"<<endl;
        }else{
aux<<codigoa<<"  "<<primernombre<<"  "<<segundonombre<<"  "<<primerapellido<<"  "<<segundoapellido<<"  "<<nit<<"  "<<compra<<"  "<<edad<<"  "<<endl; 
		}
        lectura>>codigoa;
        }
    }else{
        cout<<"               No se pudoAbrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradoa==false){
        cout<<"               No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("clientealeatorio.txt");
    rename("auxiliar.txt","clientealeatorio.txt");
 }

char anit[50];
    
void modificacionesnit(){
    bool encontradoa=false;
	ofstream aux;
    ifstream lectura;
    
    int auxClave=0;
    aux.open("auxiliar.txt",ios::out);
    lectura.open("clientealeatorio.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"                  INGRESE LA CLAVE DEL CLIENTE A MODIFICAR: ";
        cin>>auxClave;
        lectura>>codigoa;
        while(!lectura.eof()){
        lectura>>primernombre>>segundonombre>>primerapellido>>segundoapellido>>nit>>compra>>edad; 
 
if(auxClave==codigoa){
encontradoa=true;
cout<<"                __________________________"<<endl;
cout << "                       NOMBRES " << primernombre <<" "<< segundonombre<< endl;
cout << "                       APELLIDOS " << primerapellido << "  " << segundoapellido << endl; 
cout << "                       NIT DEL CLIENTE " << nit << endl; 
cout << "                       CANTIDAD CONSUMIDA Q." << compra <<".00"<<endl; 
cout << "                       EDAD DEL CLIENTE " << edad << endl; 
cout<<"                __________________________"<<endl;
fflush(stdin);	

cout<<"                 INGRESE EL NUEVO NIT DEL CLIENTE CON CLAVE "<<codigoa<<": ";
cin.getline(anit,50,'\n');
	
aux<<codigoa<<"  "<<primernombre<<"  "<<segundonombre<<"  "<<primerapellido<<"  "<<segundoapellido<<"  "<<anit<<"  "<<compra<<"  "<<edad<<"  "<<endl; 
    
   		cout<<"         Registro Modificado"<<endl;
        }else{
aux<<codigoa<<"  "<<primernombre<<"  "<<segundonombre<<"  "<<primerapellido<<"  "<<segundoapellido<<"  "<<nit<<"  "<<compra<<"  "<<edad<<"  "<<endl; 
		}
        lectura>>codigoa;
        }
    }else{
        cout<<"         No se pudoAbrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradoa==false){
        cout<<"         No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("clientealeatorio.txt");
    rename("auxiliar.txt","clientealeatorio.txt");
 }

bool encontrarclientealeatorio=false;
int auxCodigoclientealeatorio;

buscarclientealeatorio(){
	
ifstream lectura; 

lectura.open("clientealeatorio.txt",ios::out|ios::in);
fflush(stdin);
if(lectura.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"                ____________________________________________"<< endl;
cout << "                         BUSCADOR " << endl; 
cout << endl;
cout << "               ___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "               INGRESA EL CODIGO DEL CLIENTE A BUSCAR " << endl; 
cout << "               ------------------->";
cin>>auxCodigoclientealeatorio;

lectura >> codigoa; 
encontrarclientealeatorio=false; 

while(!lectura.eof()){
	
lectura>>primernombre>>segundonombre>>primerapellido>>segundoapellido>>nit>>compra>>edad; 
 		
		if(auxCodigoclientealeatorio==codigoa){
cout<<"                 __________________________"<<endl;
cout << "                 NOMBRES " << primernombre <<" "<< segundonombre<< endl;
cout << "                 APELLIDOS " << primerapellido << "  " << segundoapellido << endl; 
cout << "                 NIT DEL CLIENTE " << nit << endl; 
cout << "                 CANTIDAD CONSUMIDA Q." << compra <<".00"<<endl; 
cout << "                 EDAD DEL CLIENTE " << edad << endl; 
cout<<"                 __________________________"<<endl;
cout << endl; 
encontrarclientealeatorio = true; 			
		}
	
	lectura >> codigoa; 
}
	if(encontrarclientealeatorio==false){
		
		cout << "          NO SE ENCONTRO LA PELICULA CON EL CODIGO  "  <<auxCodigoclientealeatorio<< endl; 
}
}else{
	cout << "              NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura.close();	
	
}

void eliminarclientealeatorio(){
ofstream auxa;
ifstream lectura;
bool encontrado=false;
int auxClavea=0;
auxa.open("auxiliar.txt",ios::out);
lectura.open("clientealeatorio.txt",ios::in);
if(auxa.is_open() && lectura.is_open()){
cout<<"                   INGRESE EL CODIGO DEL CLIENTE A ELIMINAR: ";
cin>>auxClavea;
lectura>>codigoa;
while(!lectura.eof()){
lectura>>primernombre>>segundonombre>>primerapellido>>segundoapellido>>nit>>compra>>edad; 
if(auxClavea==codigoa){
encontrado=true;
cout<<"                   REGISTRO ELIMINADO"<<endl;
}else{
auxa<<codigoa<<"  "<<primernombre<<"  "<<segundonombre<<"  "<<primerapellido<<"  "<<segundoapellido<<"  "<<anit<<"  "<<compra<<"  "<<edad<<"  "<<endl; 

}
lectura>>codigoa;
}
}else{
cout<<"                    No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
}
if(encontrado==false){
cout<<"                    No se encontro ningun registro con clave "<<auxClavea<<endl;
}
auxa.close();
lectura.close();
remove("clientealeatorio.txt");
rename("auxiliar.txt","clientealeatorio.txt");
}
ofstream agregarclienteminorista; 
ifstream consultaclienteminorista; 
char nombreminorista1[50];
char nombreminorista2[50];
char apellidominorista1[50];
char apellidominorista2[50];
char nitminorista[50];
int compraminorista; 
int codigominorista; 
int auxCodigominorista=0;
bool repetidominorista=false;
void agregarminorista(){

agregarclienteminorista.open("clienteminorista.txt",ios::out|ios::app);
consultaclienteminorista.open("clienteminorista.txt",ios::in);
    if(agregarclienteminorista.is_open() && consultaclienteminorista.is_open()){
    fflush(stdin);	
	cout << "                   INGRESA LA CLAVE DEL CLIENTE "; 
	cin >> auxCodigominorista;
	consultaclienteminorista>>codigominorista; 
    while(!consultaclienteminorista.eof()){
	consultaclienteminorista>>nombreminorista1>>nombreminorista2>>apellidominorista1>>apellidominorista2>>nitminorista>>compraminorista; 
        if(auxCodigominorista==codigominorista){
                cout<<"         Ya Existe un Registro con esta Clave";
                repetidominorista=true;
                break;
            }
            consultaclienteminorista>>codigominorista;
        }
        if(repetidominorista==false){
    
    fflush(stdin);	

	cout << "                    DIGITA EL PRIMER NOMBRE: " ;
	cin.getline(nombreminorista1,50,'\n');
	cout << "                    DIGITA EL SEGUNDO NOMBRE: "  ;
	cin.getline(nombreminorista2,50,'\n');
	cout << "                    DIGITE EL PRIMER APELLIDO DEL CLIENTE " ; 
	cin.getline(apellidominorista1,50,'\n');
	cout << "                    DIGITE EL PRIMER APELLIDO DEL CLIENTE " ; 
	cin.getline(apellidominorista2,50,'\n');
	cout << "                    DIGITE EL NIT DEL CLIENTE "; 
	cin.getline(nitminorista,50,'\n');
	cout << "                    DIGITE LA CANTIDAD COMPRADA "; 
	cin >>compraminorista;
	agregarclienteminorista<<auxCodigominorista<<"  "<<nombreminorista1<<"  "<<nombreminorista2<<"  "<<apellidominorista1<<"  "<<apellidominorista2<<"  "<<nitminorista<<"  "<<compraminorista<<"  "<<endl; 
            cout<<"              Registro Agregagado"<<endl;
        }

    }else{
        cout<<"                  Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    agregarclienteminorista.close();
    consultaclienteminorista.close();
    
   
}//Fin funcion altas


    

void mostrarclienteminorista(){
	ifstream lectura; 
	lectura.open("clienteminorista.txt",ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "                   VISUALIZACION DE LOS DATOS DE LOS CLIENTES INGRESADOS " << endl << endl;

lectura >> codigominorista; 
while(!lectura.eof()){
lectura>>nombreminorista1>>nombreminorista2>>apellidominorista1>>apellidominorista2>>nitminorista>>compraminorista; 
cout << "                  CODIGO GENERADO " << codigominorista << endl; 
cout << "                  NOMBRES " << nombreminorista1 <<" "<< nombreminorista2<< endl;
cout << "                  APELLIDOS " << apellidominorista1 << "  " << apellidominorista2 << endl; 
cout << "                  NIT DEL CLIENTE " << nitminorista << endl; 
cout << "                  CANTIDAD CONSUMIDA Q." << compraminorista <<".00"<<endl; 
  
lectura >> codigominorista; 
cout << endl << endl; 

}}else {
	cout << "              NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} 
lectura.close();
}

char aprimernombreminorista[50];
char asegundonombreminorista[50];
char aprimerapellidominorista[50];
char asegundoapellidominorista[50];
    
void modificacionesminoristanombre(){
    bool encontradominorista=false;
	ofstream aux;
    ifstream lectura;
    
    int auxClave=0;
    aux.open("auxiliar.txt",ios::out);
    lectura.open("clienteminorista.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"             INGRESE LA CLAVE DEL CLIENTE A MODIFICAR: ";
        cin>>auxClave;
        lectura>>codigominorista;
        while(!lectura.eof()){
lectura>>nombreminorista1>>nombreminorista2>>apellidominorista1>>apellidominorista2>>nitminorista>>compraminorista; 
 
if(auxClave==codigominorista){
encontradominorista=true;
cout<<"                     __________________________"<<endl;
cout << "                        NOMBRES " << nombreminorista1 <<" "<< nombreminorista2<< endl;
cout << "                        APELLIDOS " << apellidominorista1 << "  " << apellidominorista2 << endl; 
cout << "                        NIT DEL CLIENTE " << nitminorista << endl; 
cout << "                        CANTIDAD CONSUMIDA Q." << compraminorista <<".00"<<endl; 
cout<<"                     __________________________"<<endl;
fflush(stdin);	

cout << "                   DIGITA EL NUEVO PRIMER NOMBRE: " ;
	cin.getline(aprimernombreminorista,50,'\n');
	cout << "               DIGITA EL NUEVO SEGUNDO NOMBRE: " ;
	cin.getline(asegundonombreminorista,50,'\n');
	cout << "               DIGITE EL NUEVO PRIMER APELLIDO DEL CLIENTE " ; 
	cin.getline(aprimerapellidominorista,50,'\n');
	cout << "               DIGITE EL NUEVO SEGUNDO APELLIDO DEL CLIENTE " ; 
	cin.getline(asegundoapellidominorista,50,'\n');

aux<<codigominorista<<"  "<<aprimernombreminorista<<"  "<<asegundonombreminorista<<"  "<<aprimerapellidominorista<<"  "<<asegundoapellidominorista<<"  "<<nitminorista<<"  "<<compraminorista<<"  "<<endl; 
		
    
   		cout<<"             Registro Modificado"<<endl;
        }else{
aux<<codigominorista<<"  "<<nombreminorista1<<"  "<<nombreminorista2<<"  "<<apellidominorista1<<"  "<<apellidominorista2<<"  "<<nitminorista<<"  "<<compraminorista<<"  "<<endl; 

		}
        lectura>>codigominorista;
        }
    }else{
        cout<<"              No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradominorista==false){
        cout<<"              No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("clienteminorista.txt");
    rename("auxiliar.txt","clienteminorista.txt");
 }

char anitminorista[50];
    
void modificacionesnitminorista(){
    bool encontradominorista=false;
	ofstream aux;
    ifstream lectura;
    
    int auxClave=0;
    aux.open("auxiliar.txt",ios::out);
    lectura.open("clienteminorista.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"              INGRESE LA CLAVE DEL CLIENTE A MODIFICAR: ";
        cin>>auxClave;
        lectura>>codigominorista;
        while(!lectura.eof()){
lectura>>nombreminorista1>>nombreminorista2>>apellidominorista1>>apellidominorista2>>nitminorista>>compraminorista; 
 
if(auxClave==codigominorista){
encontradominorista=true;
cout<<"                   __________________________"<<endl;
cout << "                    NOMBRES " << nombreminorista1 <<" "<< nombreminorista2<< endl;
cout << "                    APELLIDOS " << apellidominorista1 << "  " << apellidominorista2 << endl; 
cout << "                    NIT DEL CLIENTE " << nitminorista << endl; 
cout << "                    CANTIDAD CONSUMIDA Q." << compraminorista <<".00"<<endl; 
cout<<"                   __________________________"<<endl;
fflush(stdin);	

cout<<"                   INGRESE EL NUEVO NIT DEL CLIENTE CON CLAVE "<<codigominorista<<": ";
cin.getline(anitminorista,50,'\n');
aux<<codigominorista<<"  "<<nombreminorista1<<"  "<<nombreminorista2<<"  "<<apellidominorista1<<"  "<<apellidominorista2<<"  "<<anitminorista<<"  "<<compraminorista<<"  "<<endl; 
	
   		cout<<"           Registro Modificado"<<endl;
        }else{
aux<<codigominorista<<"  "<<nombreminorista1<<"  "<<nombreminorista2<<"  "<<apellidominorista1<<"  "<<apellidominorista2<<"  "<<nitminorista<<"  "<<compraminorista<<"  "<<endl; 
		}
        lectura>>codigominorista;
        }
    }else{
        cout<<"           No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradominorista==false){
        cout<<"           No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("clienteminorista.txt");
    rename("auxiliar.txt","clienteminorista.txt");
 }

bool encontrarclienteminorista=false;
int auxCodigoclienteminorista;

buscarclienteminorista(){
	
ifstream lectura; 

lectura.open("clienteminorista.txt",ios::out|ios::in);
fflush(stdin);
if(lectura.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"                    ____________________________________________"<< endl;
cout << "                      BUSCADOR " << endl; 
cout << endl;
cout << "                   ___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "                   INGRESA EL CODIGO DEL CLIENTE A BUSCAR " << endl; 
cout << "                   ------------------->";
cin>>auxCodigoclienteminorista;

lectura >> codigominorista; 
encontrarclienteminorista=false; 

while(!lectura.eof()){
lectura>>nombreminorista1>>nombreminorista2>>apellidominorista1>>apellidominorista2>>nitminorista>>compraminorista; 
	
 		
		if(auxCodigoclienteminorista==codigominorista){
cout<<"                     __________________________"<<endl;
cout << "                      NOMBRES " << nombreminorista1 <<" "<< nombreminorista2<< endl;
cout << "                      APELLIDOS " << apellidominorista1 << "  " << apellidominorista2 << endl; 
cout << "                      NIT DEL CLIENTE " << nitminorista << endl; 
cout << "                      CANTIDAD CONSUMIDA Q." << compraminorista <<".00"<<endl; 
cout<<"                     __________________________"<<endl;
cout << endl; 
encontrarclienteminorista = true; 			
		}
	
	lectura >> codigominorista; 
}
	if(encontrarclienteminorista==false){
		
		cout << "            NO SE ENCONTRO LA PELICULA CON EL CODIGO  "  <<auxCodigoclienteminorista<< endl; 
}
}else{
	cout << "                NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura.close();	
	
}

void eliminarclienteminorista(){
ofstream auxa;
ifstream lectura;
bool encontrado=false;
int auxClavea=0;
auxa.open("auxiliarmn.txt",ios::out);
lectura.open("clienteminorista.txt",ios::in);
if(auxa.is_open() && lectura.is_open()){
cout<<"                      INGRESE EL CODIGO DEL CLIENTE A ELIMINAR: ";
cin>>auxClavea;
lectura>>codigominorista;
while(!lectura.eof()){
lectura>>nombreminorista1>>nombreminorista2>>apellidominorista1>>apellidominorista2>>nitminorista>>compraminorista; 
if(auxClavea==codigominorista){
encontrado=true;
cout<<"                      REGISTRO ELIMINADO"<<endl;
}else{
	
auxa<<codigominorista<<"  "<<nombreminorista1<<"  "<<nombreminorista2<<"  "<<apellidominorista1<<"  "<<apellidominorista2<<"  "<<nitminorista<<"  "<<compraminorista<<"  "<<endl; 

}
lectura>>codigominorista;
}
}else{
cout<<"                      No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
}
if(encontrado==false){
cout<<"                      No se encontro ningun registro con clave "<<auxClavea<<endl;
}
auxa.close();
lectura.close();
remove("clienteminorista.txt");
rename("auxiliarmn.txt","clienteminorista.txt");
}
ofstream agregarclientemayorista; 
ifstream consultaclientemayorista; 
char nombremayorista1[50];
char nombremayorista2[50];
char apellidomayorista1[50];
char apellidomayorista2[50];
char nitmayorista[50];
int compramayorista; 
int codigomayorista; 
int auxCodigomayorista=0;
bool repetidomayorista=false;
void agregarmayorista(){

agregarclientemayorista.open("clientemayorista.txt",ios::out|ios::app);
consultaclientemayorista.open("clientemayorista.txt",ios::in);
    if(agregarclientemayorista.is_open() && consultaclientemayorista.is_open()){
    fflush(stdin);	
	cout << "                     INGRESA LA CLAVE DEL CLIENTE "; 
	cin >> auxCodigomayorista;
	consultaclientemayorista>>codigomayorista; 
    while(!consultaclientemayorista.eof()){
	consultaclientemayorista>>nombremayorista1>>nombremayorista2>>apellidomayorista1>>apellidomayorista2>>nitmayorista>>compramayorista; 
        if(auxCodigomayorista==codigomayorista){
                cout<<"            Ya Existe un Registro con esta Clave";
                repetidomayorista=true;
                break;
            }
            consultaclientemayorista>>codigomayorista;
        }
        if(repetidomayorista==false){
    
    fflush(stdin);	

	cout << "                       DIGITA EL PRIMER NOMBRE: " ;
	cin.getline(nombremayorista1,50,'\n');
	cout << "                       DIGITA EL SEGUNDO NOMBRE: " ;
	cin.getline(nombremayorista2,50,'\n');
	cout << "                       DIGITE EL PRIMER APELLIDO DEL CLIENTE " ; 
	cin.getline(apellidomayorista1,50,'\n');
	cout << "                       DIGITE EL PRIMER APELLIDO DEL CLIENTE " ; 
	cin.getline(apellidomayorista2,50,'\n');
	cout << "                       DIGITE EL NIT DEL CLIENTE " ; 
	cin.getline(nitmayorista,50,'\n');
	cout << "                       DIGITE LA CANTIDAD COMPRADA "; 
	cin >>compramayorista;
	agregarclientemayorista<<auxCodigomayorista<<"  "<<nombremayorista1<<"  "<<nombremayorista2<<"  "<<apellidomayorista1<<"  "<<apellidomayorista2<<"  "<<nitmayorista<<"  "<<compramayorista<<"  "<<endl; 
            cout<<"                 Registro Agregagado"<<endl;
        }
    }else{
        cout<<"                     Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    agregarclientemayorista.close();
    consultaclientemayorista.close();
}//Fin funcion altas

void mostrarclientemayorista(){
	ifstream lectura; 
	lectura.open("clientemayorista.txt",ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "                        VISUALIZACION DE LOS DATOS DE LOS CLIENTES INGRESADOS " << endl << endl;

lectura >> codigomayorista; 
while(!lectura.eof()){
lectura>>nombremayorista1>>nombremayorista2>>apellidomayorista1>>apellidomayorista2>>nitmayorista>>compramayorista; 
cout << "                     CODIGO GENERADO " << codigomayorista << endl; 
cout << "                     NOMBRES " << nombremayorista1 <<" "<< nombremayorista2<< endl;
cout << "                     APELLIDOS " << apellidomayorista1 << "  " << apellidomayorista2 << endl; 
cout << "                     NIT DEL CLIENTE " << nitmayorista << endl; 
cout << "                     CANTIDAD CONSUMIDA Q." << compramayorista <<".00"<<endl; 
  
lectura >> codigomayorista; 
cout << endl << endl; 

}}else {
	cout << "                 NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} 
lectura.close();
}

char aprimernombremayorista[50];
char asegundonombremayorista[50];
char aprimerapellidomayorista[50];
char asegundoapellidomayorista[50];
    
void modificacionesmayoristanombre(){
    bool encontradomayorista=false;
	ofstream aux;
    ifstream lectura;
    
    int auxClave=0;
    aux.open("auxiliar.txt",ios::out);
    lectura.open("clientemayorista.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"               INGRESE LA CLAVE DEL CLIENTE A MODIFICAR: ";
        cin>>auxClave;
        lectura>>codigomayorista;
        while(!lectura.eof()){
lectura>>nombremayorista1>>nombremayorista2>>apellidomayorista1>>apellidomayorista2>>nitmayorista>>compramayorista; 
 
if(auxClave==codigomayorista){
encontradomayorista=true;
cout<<"                       __________________________"<<endl;
cout << "                       NOMBRES " << nombremayorista1 <<" "<< nombremayorista2<< endl;
cout << "                       APELLIDOS " << apellidomayorista1 << "  " << apellidomayorista2 << endl; 
cout << "                       NIT DEL CLIENTE " << nitmayorista << endl; 
cout << "                       CANTIDAD CONSUMIDA Q." << compramayorista <<".00"<<endl; 
cout<<"                       __________________________"<<endl;
fflush(stdin);	

cout << "                  DIGITA EL NUEVO PRIMER NOMBRE: " << endl;
	cin.getline(aprimernombremayorista,50,'\n');
	cout << "              DIGITA EL NUEVO SEGUNDO NOMBRE: " << endl;
	cin.getline(asegundonombremayorista,50,'\n');
	cout << "              DIGITE EL NUEVO PRIMER APELLIDO DEL CLIENTE " << endl; 
	cin.getline(aprimerapellidomayorista,50,'\n');
	cout << "              DIGITE EL NUEVO SEGUNDO APELLIDO DEL CLIENTE " <<endl; 
	cin.getline(asegundoapellidomayorista,50,'\n');

aux<<codigomayorista<<"  "<<aprimernombremayorista<<"  "<<asegundonombremayorista<<"  "<<aprimerapellidomayorista<<"  "<<asegundoapellidomayorista<<"  "<<nitmayorista<<"  "<<compramayorista<<"  "<<endl; 
		
    
   		cout<<"             Registro Modificado"<<endl;
        }else{
aux<<codigomayorista<<"  "<<nombremayorista1<<"  "<<nombremayorista2<<"  "<<apellidomayorista1<<"  "<<apellidomayorista2<<"  "<<nitmayorista<<"  "<<compramayorista<<"  "<<endl; 

		}
        lectura>>codigomayorista;
        }
    }else{
        cout<<"              No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradomayorista==false){
        cout<<"              No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("clientemayorista.txt");
    rename("auxiliar.txt","clientemayorista.txt");
 }

char anitmayorista[50];
    
void modificacionesnitmayorista(){
    bool encontradomayorista=false;
	ofstream aux;
    ifstream lectura;
    
    int auxClave=0;
    aux.open("auxiliar.txt",ios::out);
    lectura.open("clientemayorista.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"              INGRESE LA CLAVE DEL CLIENTE A MODIFICAR: ";
        cin>>auxClave;
        lectura>>codigomayorista;
        while(!lectura.eof()){
lectura>>nombremayorista1>>nombremayorista2>>apellidomayorista1>>apellidomayorista2>>nitmayorista>>compramayorista; 
 
if(auxClave==codigomayorista){
encontradomayorista=true;
cout<<"                         __________________________"<<endl;
cout << "                         NOMBRES " << nombremayorista1 <<" "<< nombremayorista2<< endl;
cout << "                         APELLIDOS " << apellidomayorista1 << "  " << apellidomayorista2 << endl; 
cout << "                         NIT DEL CLIENTE " << nitmayorista << endl; 
cout << "                         CANTIDAD CONSUMIDA Q." << compramayorista <<".00"<<endl; 
cout<<"                         __________________________"<<endl;
fflush(stdin);	

cout<<"                       INGRESE EL NUEVO NIT DEL CLIENTE CON CLAVE "<<codigomayorista<<": ";
cin.getline(anitmayorista,50,'\n');
aux<<codigomayorista<<"  "<<nombremayorista1<<"  "<<nombremayorista2<<"  "<<apellidomayorista1<<"  "<<apellidomayorista2<<"  "<<anitmayorista<<"  "<<compramayorista<<"  "<<endl; 
	
   		cout<<"                    Registro Modificado"<<endl;
        }else{
aux<<codigomayorista<<"  "<<nombremayorista1<<"  "<<nombremayorista2<<"  "<<apellidomayorista1<<"  "<<apellidomayorista2<<"  "<<nitmayorista<<"  "<<compramayorista<<"  "<<endl; 
		}
        lectura>>codigomayorista;
        }
    }else{
        cout<<"                No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradomayorista==false){
        cout<<"                No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("clientemayorista.txt");
    rename("auxiliar.txt","clientemayorista.txt");
 }

bool encontrarclientemayorista=false;
int auxCodigoclientemayorista;

buscarclientemayorista(){
	
ifstream lectura; 

lectura.open("clientemayorista.txt",ios::out|ios::in);
fflush(stdin);
if(lectura.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"                  ____________________________________________"<< endl;
cout << "                              BUSCADOR " << endl; 
cout << endl;
cout << "                 ___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "                   INGRESA EL CODIGO DEL CLIENTE A BUSCAR " << endl; 
cout << "                   ------------------->  ";
cin>>auxCodigoclientemayorista;

lectura >> codigomayorista; 
encontrarclientemayorista=false; 

while(!lectura.eof()){
lectura>>nombremayorista1>>nombremayorista2>>apellidomayorista1>>apellidomayorista2>>nitmayorista>>compramayorista; 
	
 		
		if(auxCodigoclientemayorista==codigomayorista){
cout<<"                   __________________________"<<endl;
cout << "                    NOMBRES " << nombremayorista1 <<" "<< nombremayorista2<< endl;
cout << "                    APELLIDOS " << apellidomayorista1 << "  " << apellidomayorista2 << endl; 
cout << "                    NIT DEL CLIENTE " << nitmayorista << endl; 
cout << "                    CANTIDAD CONSUMIDA Q." << compramayorista <<".00"<<endl; 
cout<<"                   __________________________"<<endl;
cout << endl; 
encontrarclientemayorista = true; 			
		}
	
	lectura >> codigomayorista; 
}
	if(encontrarclientemayorista==false){
		
		cout << "            NO SE ENCONTRO LA PELICULA CON EL CODIGO  "  <<auxCodigoclientemayorista<< endl; 
}
}else{
	cout << "                NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura.close();	
	
}

void eliminarclientemayorista(){
ofstream auxa;
ifstream lectura;
bool encontrado=false;
int auxClavea=0;
auxa.open("auxiliarmn.txt",ios::out);
lectura.open("clientemayorista.txt",ios::in);
if(auxa.is_open() && lectura.is_open()){
cout<<"                   INGRESE EL CODIGO DEL CLIENTE A ELIMINAR: ";
cin>>auxClavea;
lectura>>codigomayorista;
while(!lectura.eof()){
lectura>>nombremayorista1>>nombremayorista2>>apellidomayorista1>>apellidomayorista2>>nitmayorista>>compramayorista; 
if(auxClavea==codigomayorista){
encontrado=true;
cout<<"                   REGISTRO ELIMINADO"<<endl;
}else{
	
auxa<<codigomayorista<<"  "<<nombremayorista1<<"  "<<nombremayorista2<<"  "<<apellidomayorista1<<"  "<<apellidomayorista2<<"  "<<nitmayorista<<"  "<<compramayorista<<"  "<<endl; 

}
lectura>>codigomayorista;
}
}else{
cout<<"                    No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
}
if(encontrado==false){
cout<<"                    No se encontro ningun registro con clave "<<auxClavea<<endl;
}
auxa.close();
lectura.close();
remove("clientemayorista.txt");
rename("auxiliarmn.txt","clientemayorista.txt");
}

void menuprincipal(){

system("COLOR F0");
cuadro(0,0,78,24);
cuadro(1,1,77,3);
gotoxy(30,2); printf("  DATOS DE CLIENTES  ");
cout << endl << endl; 
cout << setw(30)<<"1. CLIENTES ALEATORIOS  " << endl; 
cout << setw(30)<<"      2. CLASIFICACION DE CLIENTES " << endl; 
cout << setw(30)<<"      3. CLASIFICACION DE CLIENTES ALEATORIOS " << endl; 
cout << setw(15)<<"      4. HORARIOS " << endl; 

cout << setw(20)<<"5. SALIR " << endl; 

}


int menu1(){
	int opcionc;
int sigue=1;

	do {
getch();
system("cls");
system("COLOR B2");
cuadro(0,0,78,24);
gotoxy(20,2);cout << " MENU CLIENTE ALEATORIO " << endl;
cout << endl; 
gotoxy(50,5); cout << endl; 
		cout << "          ***************************** " << endl; 
		cout << "          1. INGRESAR NUEVO CLIENTE " << endl; 
		cout << "          2. MOSTRAR CLIENTES " << endl; 
		cout << "          3. MODIFICAR CLIENTES " << endl; 
		cout << "          4. BUSCAR UN CLIENTE " << endl; 
		cout << "          5. ELIMINAR UN CLIENTE " << endl; 
		cout << "          6. VOLVER AL MENU PRINCIPAL " << endl; 
		cout << "          7. SALIR " << endl; 
		cout << "          ************************** " << endl; 
		gotoxy(40,10);cout << "DIGITE SU OPCION ---------->: ";
		cin >>opcionc;
		
		switch(opcionc){

		case 1:
			hora11();
			getch();
			system("cls");
system("COLOR A0");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " CLIENTES ALEATORIOS " << endl;
cout << endl; 
			agregarclientea1();
			devolver();
		break;
		
		case 2:
			getch();
			system("cls");
system("COLOR B0");
gotoxy(20,5);cout << " CLIENTES ALEATORIOS INGRESADOS " << endl;
cout << endl; 
			mostrarclientea();
			devolver();
		break; 
		
		case 3:
			int h;
			getch();
			system("cls");
			system("COLOR C0");
cuadro(0,0,78,24);
cuadro(1,1,77,3);
gotoxy(30,2); printf("  QUE DESEA MODIFICAR?  ");
cout << endl << endl; 
cout << setw(30)<<"1. NOMBRE COMPLETO " << endl; 
cout << setw(30)<<"2. NIT DEL CLIENTE " << endl; 
cout << setw(30)<<"3. VOLVER AL MENU ANTERIOR " << endl; 
cout << endl << endl; 
			gotoxy(40,5);cout << "DIGITE SU OPCION ---------->: ";
			cin >>h;
			switch(h){
				
				case 1: 
				getch();
				system("cls");
				system("COLOR B0");
				cuadro(0,0,78,24);
				gotoxy(20,5);cout << " MODIFICADOR DE NOMBRE " << endl;
				cout << endl; 
				modificacionesa();
				break; 
				
				case 2: 
				getch();
				system("cls");
				system("COLOR D0");
				cuadro(0,0,78,24);
				gotoxy(20,5);cout << " MODIFICADOR DEL NIT " << endl;
				cout << endl; 
				modificacionesnit();
				break; 
				
				case 3: 
				getch();
				system("cls");
				system("COLOR D0");
				devolver();
				break; 
				
				default: 
				system("cls");
				cuadro(1,1,80,3);
				gotoxy(30,2); printf("OPCION INCORRECTA");
				getch();
				system("cls");
				break; 
				}
		break; 
		
		case 4:
		getch();
		system("cls");
		system("COLOR F0");
		cuadro(0,0,78,24);
		gotoxy(20,5);cout << " BUSQUEDA DE CLIENTE " << endl;
		cout << endl; 
		buscarclientealeatorio();			
		break;
		
		case 5:
		getch();
		system("cls");
		system("COLOR D2");
		cuadro(0,0,78,24);
		gotoxy(20,5);cout << " ELIMINAR CLIENTE " << endl;
		cout << endl; 
		eliminarclientealeatorio();
		break; 
		
		
		case 6:
		getch();
		system("cls");
		system("COLOR B4");
		sigue=0;
		break;
		 
		case 7:
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("SALIDA EXITOSA");
		getch();
		system("cls");
		exit(0);
		break; 

		default: 
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("OPCION INCORRECTA");
		getch();
		system("cls");
		break;
		}			

} while(sigue);

	return opcionc;
}	

int menu2(){
	int opcionminorista;
int sigue=1;

	do {
getch();
system("cls");
system("COLOR D0");
cuadro(0,0,78,24);
gotoxy(50,2); cout << endl; 
		cout << "          ***************************** " << endl; 
		cout << "          1. INGRESAR NUEVO CLIENTE " << endl; 
		cout << "          2. MOSTRAR CLIENTES " << endl; 
		cout << "          3. MODIFICAR CLIENTES " << endl; 
		cout << "          4. BUSCAR UN CLIENTE " << endl; 
		cout << "          5. ELIMINAR UN CLIENTE " << endl; 
		cout << "          6. VOLVER AL MENU PRINCIPAL " << endl; 
		cout << "          7. SALIR " << endl; 
		cout << "          ************************** " << endl; 
		gotoxy(40,5);cout << "DIGITE SU OPCION ---------->: ";
		cin >>opcionminorista;
		
		switch(opcionminorista){

	case 1:
		hora22();
			getch();
			system("cls");
			system("COLOR A0");
			cuadro(0,0,78,24);
			gotoxy(20,5);cout << " CLIENTES MINORISTAS " << endl;
			cout << endl; 
			agregarminorista();
			devolver();
		break;
		
		case 2:
			getch();
			system("cls");
			system("COLOR B0");
			gotoxy(20,5);cout << " CLIENTES MINORISTAS INGRESADOS " << endl;
			cout << endl; 
			mostrarclienteminorista();
			devolver();
		break; 
		
		case 3:
			int z;
			getch();
			system("cls");
system("COLOR C0");
cuadro(0,0,78,24);
cuadro(1,1,77,3);
gotoxy(30,2); printf("  QUE DESEA MODIFICAR?  ");
cout << endl << endl; 
cout << setw(30)<<"1. NOMBRE COMPLETO " << endl; 
cout << setw(30)<<"2. NIT DEL CLIENTE " << endl; 
cout << setw(30)<<"3. VOLVER AL MENU ANTERIOR " << endl; 
cout << endl << endl; 
			gotoxy(40,5);cout << "DIGITE SU OPCION ---------->: ";
			cin >>z;
			switch(z){
				
				case 1: 
				getch();
				system("cls");
				system("COLOR B0");
				cuadro(0,0,78,24);
				gotoxy(20,5);cout << " MODIFICADOR DE NOMBRE " << endl;
				cout << endl; 
				modificacionesminoristanombre();
				break; 
				
				case 2: 
				getch();
				system("cls");
				system("COLOR D0");
				cuadro(0,0,78,24);
				gotoxy(20,5);cout << " MODIFICADOR DEL NIT " << endl;
				cout << endl; 
				modificacionesnitminorista();
				break; 
				
				case 3: 
				getch();
				system("cls");
				system("COLOR D0");
				devolver();
				break; 
				
				default: 
				system("cls");
				cuadro(1,1,80,3);
				gotoxy(30,2); printf("OPCION INCORRECTA");
				getch();
				system("cls");
				break; 
				}
		break; 
		
		case 4:
		getch();
		system("cls");
		system("COLOR F0");
		cuadro(0,0,78,24);
		gotoxy(20,5);cout << " BUSQUEDA DE CLIENTE MINORISTA" << endl;
		cout << endl; 
		buscarclienteminorista();
		devolver();	
		break;
		
		case 5:
		getch();
		system("cls");
		system("COLOR D2");
		cuadro(0,0,78,24);
		gotoxy(20,5);cout << " ELIMINAR CLIENTE " << endl;
		cout << endl; 
		eliminarclienteminorista();
		devolver();
		break; 
		
		
		case 6:
		getch();
		system("cls");
		system("COLOR B4");
		sigue=0;
		break; 
		
		case 7:
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("SALIDA EXITOSA");
		getch();
		system("cls");
		exit(0);
		break; 

		default: 
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("OPCION INCORRECTA");
		getch();
		system("cls");
		}			

} while(sigue);

	return opcionminorista;
}	

int menu3(){
	int opcionmayorista;
int sigue=1;

	do {
getch();
system("cls");
system("COLOR D0");
cuadro(0,0,78,24);
gotoxy(50,2); cout << endl; 
		cout << "          ***************************** " << endl; 
		cout << "          1. INGRESAR NUEVO CLIENTE " << endl; 
		cout << "          2. MOSTRAR CLIENTES " << endl; 
		cout << "          3. MODIFICAR CLIENTES " << endl; 
		cout << "          4. BUSCAR UN CLIENTE " << endl; 
		cout << "          5. ELIMINAR UN CLIENTE " << endl; 
		cout << "          6. VOLVER AL MENU PRINCIPAL " << endl; 
		cout << "          7. SALIR " << endl; 
		cout << "          ************************** " << endl; 
		gotoxy(40,5);cout << "DIGITE SU OPCION ---------->: ";
		cin >>opcionmayorista;
		
		switch(opcionmayorista){

	case 1:
		hora33();
		getch();
		system("cls");
		system("COLOR A0");
		cuadro(0,0,78,24);
		gotoxy(20,5);cout << " CLIENTES MINORISTAS " << endl;
		cout << endl; 
		agregarmayorista();
		devolver();
		break;
		
	case 2:
		getch();
		system("cls");
		system("COLOR B0");
		gotoxy(20,5);cout << " CLIENTES MINORISTAS INGRESADOS " << endl;
		cout << endl; 
		mostrarclientemayorista();
		devolver();
		break; 
		
		case 3:
		int o;
			getch();
			system("cls");
			system("COLOR C0");
			cuadro(0,0,78,24);
			cuadro(1,1,77,3);
			gotoxy(30,2); printf("  QUE DESEA MODIFICAR?  ");
			cout << endl << endl; 
			cout << setw(30)<<"1. NOMBRE COMPLETO " << endl; 
			cout << setw(30)<<"2. NIT DEL CLIENTE " << endl; 
			cout << setw(30)<<"3. VOLVER AL MENU ANTERIOR " << endl; 
			cout << endl << endl; 
			gotoxy(40,5);cout << "DIGITE SU OPCION ---------->: ";
			cin >>o;
			switch(o){
				
				case 1: 
				getch();
				system("cls");
				system("COLOR B0");
				cuadro(0,0,78,24);
				gotoxy(20,5);cout << " MODIFICADOR DE NOMBRE " << endl;
				cout << endl; 
				modificacionesmayoristanombre();
				break; 
				
				case 2: 
				getch();
				system("cls");
				system("COLOR D0");
				cuadro(0,0,78,24);
				gotoxy(20,5);cout << " MODIFICADOR DEL NIT " << endl;
				cout << endl; 
				modificacionesnitmayorista();
				break; 
				
				case 3: 
				getch();
				system("cls");
				system("COLOR D0");
				devolver();
				break; 
				
				default: 
				system("cls");
				cuadro(1,1,80,3);
				gotoxy(30,2); printf("OPCION INCORRECTA");
				getch();
				system("cls");
				break; 
				}

		break; 
		
		case 4:
		getch();
		system("cls");
		system("COLOR F0");
		cuadro(0,0,78,24);
		gotoxy(20,5);cout << " BUSQUEDA DE CLIENTE MINORISTA" << endl;
		cout << endl; 
		buscarclientemayorista();
		devolver();	
		break;
		
		case 5:
		getch();
		system("cls");
		system("COLOR D2");
		cuadro(0,0,78,24);
		gotoxy(20,5);cout << " ELIMINAR CLIENTE " << endl;
		cout << endl; 
		eliminarclientemayorista();
		devolver();
		break; 
		
		
		case 6:
		getch();
		system("cls");
		system("COLOR B4");
		sigue=0;
		break; 
		
		case 7:
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("SALIDA EXITOSA");
		getch();
		system("cls");
		exit(0);
		break; 
		
		
		default: 
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("OPCION INCORRECTA");
		getch();
		system("cls");
		}			

} while(sigue);

	return opcionmayorista;
}	

	
int main(){
int contra;
int obtener1, obtener2;
Password obtenerPass(3,4);
obtener1= obtenerPass.getAdministrador(); 
obtener2= obtenerPass.getColab1(); 
	
int opcionm; 
 	
int opcion=0;
int sigue = 1;
getch();
system("cls");
system("COLOR A0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("BIENVENIDO");
getch();
cuadro(1,1,80,3);
gotoxy(30,2); printf("BASE DE DATOS DE CLIENTES");
cout << endl; 
getch();
system("cls"); 


gotoxy(20,5); cout << "DIGITA TU CONTRASEÑA-------->  " ; 
cin >> contra; 
cout << endl; 

if(contra == obtener2 || contra == obtener1){
	
getch();
system("cls"); 

 do{ 
 
 menuprincipal();

gotoxy(40,10);cout << "DIGITE SU OPCION ---------->: ";
cin >>opcionm;

switch(opcionm){


case 1: 
		menu1();
break; 

case 2: 

int a; 
system("cls");
system("COLOR F0");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " TIPO DE CLIENTE " << endl;

				cout << "              INGRESE EL TIPO DE CLIENTE A INGRESAR " << endl; 
				cout << "              1. MINORISTA " << endl; 
				cout << "              2. MAYORISTA " << endl;
				cout << "              3. SALIR     " << endl; 
				cout << "              DIGITE SU OPCION ---------->: ";
				cin >>a; 

switch(a){

		case 1:
		menu2(); 
		break; 

		case 2: 
		menu3();
		break; 

		case 3:
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("SALIDA EXITOSA");
		getch();
		system("cls");
		exit(0);
		break; 

		
		default: 
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("OPCION INCORRECTA");
		getch();
		system("cls");
		

}

break; 


case 3:
	int d; 
	getch();
	system("cls");
	system("COLOR C0");
			cuadro(0,0,78,24);
			cuadro(1,1,77,3);
			gotoxy(30,2); printf("  HISTORIAL DE CLASIFICACION DE CLIENTES  ");
			cout << endl << endl; 
			cout << setw(30)<<"1. HISTORIAL DE MINORISTAS " << endl; 
			cout << setw(30)<<"2. HISTORIAL DE MAYORISTAS " << endl; 
			cout << setw(30)<<"3. VOLVER AL MENU ANTERIOR " << endl; 
			cout << endl << endl; 
			gotoxy(40,5);cout << "DIGITE SU OPCION ---------->: ";
			cin >> d; 
		
	switch(d){
		
		case 1: 
		system("cls");
		getch();
		cout << endl;
		lecturaminoristas();
		getch();
		system("cls");
			
		break; 
		
		case 2: 
		system("cls");
		getch();
		cout << endl; 
		lecturamayoristas();
		getch();
		system("cls");
		break; 
		
		case 3:
		system("cls");
		getch();
				system("COLOR D0");
				devolver();
				break;	
				
			default: 
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("OPCION INCORRECTA");
		getch();
		system("cls");
			break;	
		}
	
	
break; 

case 4: 
int p; 
	getch();
	system("cls");
	system("COLOR C0");
			cuadro(0,0,78,24);
			cuadro(1,1,77,3);
			gotoxy(30,2); printf("  CONTROLADOR DE INGRESOS  ");
			cout << endl << endl; 
			cout << setw(30)<<"1. INGRESOS CLIENTE ALEATORIOS " << endl; 
			cout << setw(30)<<"2. INGRESO CLIENTES MINORISTAS " << endl; 
			cout << setw(30)<<"3. INGRESO CLIENTES MAYORISTAS " << endl; 
			cout << setw(30)<<"4. VOLVER AL MENU ANTERIOR     " << endl; 
			cout << endl << endl; 
			gotoxy(40,5);cout << "DIGITE SU OPCION ---------->: ";
			cin >> p; 
			getch();

		switch(p){
			
			
		case 1: 
	system("cls");	
	cout << "*******************************" << endl; 
	cout << endl << endl; 
	cout << "INGRESOS DE CLIENTES ALEATORIOS: " << endl;
	cout << endl << endl; 
	cout << "*******************************" << endl;
archivo.open("hora1.txt",ios::in); //Abrimos el archivo en modo lectura
	if(archivo.is_open()){
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}}else{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo.close(); //Cerramos el archivo
	getch();
	system("cls");
		break; 
		
		case 2: 
	system("cls");
	cout << "*******************************" << endl; 
	cout << endl << endl; 
	cout << "INGRESOS DE CLIENTES MINORISTAS: " << endl;
	cout << endl << endl; 
	cout << "*******************************" << endl;
archivo.open("hora2.txt",ios::in); //Abrimos el archivo en modo lectura
	if(archivo.is_open()){
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}}else{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo.close(); //Cerramos el archivo
	getch();
	system("cls");
	break; 
		
		case 3:
	system("cls");
	cout << "*******************************" << endl; 
	cout << endl << endl; 
	cout << "INGRESOS DE CLIENTES MAYORISTAS: " << endl;
	cout << endl << endl; 
	cout << "*******************************" << endl;
archivo.open("hora3.txt",ios::in); //Abrimos el archivo en modo lectura
	if(archivo.is_open()){
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}}else{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo.close(); //Cerramos el archivo
	getch();
	system("cls");
	break; 
		
		case 4: 
		getch();
		system("cls");
		system("COLOR D0");
		devolver();
		break; 
		
		default: 
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("OPCION INCORRECTA");
		getch();
		system("cls");
		break;		
			
			
	 }

	
break;


case 5:
		system("cls");
		cuadro(1,1,80,3);
		gotoxy(30,2); printf("SALIDA EXITOSA");
		getch();
		system("cls");
		exit(0);
		 
break; 



default: 
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
break; 




}


 
 } while(sigue);	
 }else{
 
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("CONTRASEÑA INCORRECTA");
getch();
system("cls");
 
 
} 
return 0;

}
int devolver(){ //menu para devolver a los menus 
    int abcx=0;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"1. Volver el menu anterior"<<endl;
 
    cin>>abcx;
 	 system("cls"); 

    switch(abcx){
   

        case 2:
        	break;
 
            
    }

    return 0;
  }

