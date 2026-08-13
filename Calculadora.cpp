#include <iostream>
using namespace std;

int sumar(int x, int y);

int restar(int x, int y);

int multiplicar(int x, int y);

void dividir(float z, float k);

void potenciacion(double n, double m);

int main(){

	int opcion; int x; 	int y; float z; float k; double n; double m;
	
	do{
		cout<<"\nMenu - [Calculadora]"<<endl;
		cout<<"1. Suma"<<endl;
		cout<<"2. Resta"<<endl;
		cout<<"3. Multiplicacion"<<endl;
		cout<<"4. Division"<<endl;
		cout<<"5. Potenciacion"<<endl;
		cout<<"6. Salir del Programa"<<endl;
		cout<<"\nOperacion a realizar:  "<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1:{
				system("CLS");
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Digite el primer numero:"<<endl;
				cin>>x;
				cout<<"Digite el segundo numero:"<<endl;
				cin>>y;
				
				cout<<"El resultado de su suma es: "<<sumar(x,y)<<endl;
				break;
			}
			case 2:{
				system("CLS");
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Digite el primer numero:"<<endl;
				cin>>x;
				cout<<"Digite el segundo numero:"<<endl;
				cin>>y;
				
				cout<<"El resultado de su resta es: "<<restar(x,y)<<endl;
				break;
			}
			case 3:{
				system("CLS");
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Digite el primer numero:"<<endl;
				cin>>x;
				cout<<"Digite el segundo numero:"<<endl;
				cin>>y;
				
				cout<<"El resultado de su multiplicacion es: "<<multiplicar(x,y)<<endl;
				break;
			}
			case 4:{
				system("CLS");
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Digite el primer numero:"<<endl;
				cin>>z;
				cout<<"Digite el segundo numero:"<<endl;
				cin>>k;
				
				dividir(z,k);
				
				break;
			}
			case 5:{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Digite la base: "<<endl;
				cin>>n;
				cout<<"Digite la potencia: "<<endl;
				cin>>m;
				
				potenciacion(n,m);
				
				break;
			}
			case 6:{
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Gracias por usar el programa - [Calculadora], Vuelva Pronto!"<<endl;
				break;
			}
		}
	}while(opcion!=6);
	return 0;
}
int sumar(int x, int y){
	
	int suma = 0;
	
	suma=x+y;
	
	return suma;
}
int restar(int x, int y){
	
	int resta = 0;
	
	resta=x-y;
	
	return resta;
}
int multiplicar(int x, int y){
	
	int multiplicacion=0;
	
	multiplicacion=x*y;
	
	return multiplicacion;
}
void dividir(float z, float k){
	
	float division=0;
	
	if(k==0){
		cout<<"\nOperacion Invalida! Error"<<endl;
	}
	else{
		division=z/k;
		cout<<"El resultado de su division es: "<<division<<endl;
	}
}
void potenciacion(double n, double m){
	
	double potencia=1;
	
	if(m>0){	
		
		for(int i=0; i<m; i++){
		potencia = potencia*n;
		}
		cout<<"El resultado de su potenciacion es: "<<potencia<<endl;
	}
	else if(m==0){
		cout<<"El resultado de su potenciacion es: 1"<<endl;
	}
	else if(m<0){
		m= m*-1;
		for(int i=0; i<m; i++){
			potencia = potencia*n;
		}
		cout<<"El resultado de su potenciacion es: "<<"1/"<<potencia<<endl;
		cout<<"El resultado de su potenciacion en Decimales es: "<<1/potencia<<endl;
	}
}