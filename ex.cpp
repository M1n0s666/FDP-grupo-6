#include<iostream>
#include<string>

using namespace std;

int ruc, Edad, fech;
float Prec;
string Ge, Prod, Name;
int dia = 0;
int mes = 0;
int anio = 0;
char letra = 47;
char a;
char b;
char tipo;

string RucV();
int OperacionV();
void Salir();
int Menu();
int Fecha();
int proceso();
float PrecV();
int OperacionB();
int OperacionF();
int Mostrar();

int op;
string RUC;

int main(){
	setlocale(LC_CTYPE,"Spanish");
	do{
		op = Menu();	
		system("pause");
	}while(op != 4);
	return 0;
}

int Menu(){
	int op;
	
	system("cls");
	cout<<"\n****** Opciones Principales ******\n";
	cout<<"\n\t1. Generar boleta de venta\n";
	cout<<"\t2. Generar factura\n";
	cout<<"\t3. Ver boleta o factura\n";
	cout<<"\t4. Salir\n";

		
	cout<<"\nIngrese su opción(1, 2, 3 o 4): ";
	op = OperacionV();
	
	switch(op){
		
		case 1: {
			
			OperacionB();
			
			break;
		}
		case 2: {
			
			OperacionF();
			
			break;
		}
		
		case 3: {
			
			Mostrar();
			
			break;
		}
		
		case 4: {
			
			Salir();
			
			break;
		}
		
		
	}
	
	
	
	return op;
}

int Mostrar(){
	
	system("cls");
	if(tipo='B'){
		cout<<"\n********Boleta de venta***********\n";
		cout<<"\nRuc: "<<RUC<<"\tFecha: "<< dia << letra << mes << letra <<anio<<endl;
		cout<<"\n Cliente: "<<Name<<endl;
		cout<<"\n Producto: "<<Prod<<endl;
		cout<<"\n Precio: "<<Prec;
	}
	
}

int OperacionB(){
	tipo='b';
	
	system("cls");
			
	cout<<"\nIngrese el número ruc del negocio o persona: ";
	RUC= RucV();
	
	cout<<"\nIngrese la fecha en formato DD/MM/AAAA: ";
	fech = Fecha();
	
	cout<<"\nIngrese el nombre del cliente: ";
	cin>>Name;
			
	cout<<"\nIngrese El producto: ";
	cin>>Prod;
			
	cout<<"\nIngrese precio del producto: ";
	Prec = PrecV();

	
	Menu();
}

int OperacionF(){
	
	tipo='f';
	
	cout<<"\nIngrese el número ruc del negocio o persona: ";
	RUC = RucV();
	
	cout<<"\nIngrese el nombre del cliente: ";
	cin>>Name;
			
	cout<<"\nIngrese El producto: ";
	cin>>Prod;
			
	cout<<"\nIngrese precio del producto: ";
	Prec = PrecV();
	
	
	Menu();
}

int Fecha(){
	do{
		cin >> dia >>a>> mes >>b>> anio;
		
		if(dia<0 || dia> 30 || a != letra || mes <0 || mes >12 || b != letra || anio<2000 || anio>2101 ){
			
		cout << "\n\tIncorrecto el formato: DD/MM/AAAA.\n\tVuelva a ingresar e incluya '/': ";
        //cout << "Fecha actual: " << dia << letra << mes << letra <<anio <<endl;
    	}
	}while(dia<0 || dia> 30 || a != letra || mes <0 || mes >12 || b != letra || anio<2000 || anio>2101);
    
}

int OperacionV(){
	int op;
	
	do{
		cin>>op;
		if(op<1 || op>4){
			cout<<"\n\tNúmero no valido.\n\tVuelva a ingresar:";
		}
	}while(op<1 || op>4);
	
	return op;
}

float PrecV(){
	float prec;
	
	do{
		cin>>prec;
		if(prec<0 || prec>20000.00){
			cout<<"\n\tEror, el dato ingresado es invalido.\n\tVuelva a ingresar: ";
		}
	}while(prec<0 || prec>20000.00);
	
	return prec;
}

string RucV(){
	int ruc;
		
	do{
		cin>>ruc;
		
		if(ruc<10000000000 || ruc>20999999999){
			cout<<"\n\tNumero RUC inconpatible.\n\tPor favor ingrese denuevo: ";
		}
	}while(ruc<10000000000 || ruc>20999999999);
	
	RUC = to_string(ruc);
	
	return RUC;
}

void Salir(){
	
	cout<<"Muchas gracias por su preferencia."<<endl;
	
}
