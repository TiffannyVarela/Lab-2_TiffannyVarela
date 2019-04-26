#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::to_string;
using std::string;

int e1p1();//ejercicio1 parte 1
int e1p2();//ejercicio1 parte 2
void  e2();//ejercicio2
int e3();//ejercicio3
int menu();

int main(){
	int opc=0;
	do {
		switch(opc=menu()){
			case 1:
				e1p1();
			break;

			case 2:
				e1p2();
			break;

			case 3:
				e2();
			break;

			case 4:
				
			break;

			case 5:
			cout<<"Fin del programa"<<endl;
			break;
		}
	}while (opc!=5);

	return 0;
}

int menu(){
	while(true){
  	cout<<"MENU"<<endl
  	<<"1.- Ejercicio 1.1"<<endl
  	<<"2.- Ejercicio 1.2"<<endl
  	<<"3.- Ejercicio 2"<<endl
  	<<"4.- Ejercicio 3"<<endl
	<<"5.- Salir"<<endl;
  	cout<<"Ingrese una opcion: ";
  	int opcion =0;
  	cin>>opcion;
  	if(opcion>=1 && opcion<= 5){
  		return opcion;
	  }
	  else{
	  
  	cout<<"La opcion elegida no es valida, ingrese un valor entre 1 y 5"<<endl;
  }
  }//end del while
  	return 0;
}

int contar(string captcha){
	int tamanop=0;
for(int i=0;i<captcha.length();i++){
                if((captcha[i]!=' '&&captcha[i+1]!=' ')){
                        tamanop++;
                }
        }
return tamanop;

}

int e1p1(){
	int sum=0;
	string fin="";
	string captcha="";
	cout<<"Ingrese el captcha"<<endl;
	cin>>captcha;
	
	if(contar(captcha)%2!=0){
		cout<<"Ingrese un captcha par"<<endl;
		cin>>captcha;
	}
	int  arreglo[contar(captcha)];
	int n;
	for(int i=0;i<contar(captcha);i++){
		n=captcha[i]-48;
		arreglo[i]=captcha[i];
		cout<<arreglo[i]<<endl;
	}
	for(int i=0;i<contar(captcha);i++){
		if(i<contar(captcha)){
			if(arreglo[1]==arreglo[contar(captcha)]){
				fin+=to_string(arreglo[1]);
			}	
		}
		else{
			if(arreglo[i]==arreglo[i+1]){
				fin+=to_string(arreglo[i]);
			}
	}
	}
	cout<<fin<<endl;

}

int e1p2(){
	int sum=0;
        string fin="";
        string captcha="";
        cout<<"Ingrese el captcha"<<endl;
        cin>>captcha;

        if(contar(captcha)%2!=0){
                cout<<"Ingrese un captcha par"<<endl;
                cin>>captcha;
        }
        int  arreglo[contar(captcha)/2];
	int  arreglo2[contar(captcha)/2];
	int cont=contar(captcha)/2;
        int n2,n;
        for(int i=0;i<contar(captcha)/2;i++){
                n=captcha[i]-48;
                arreglo[i]=n;
                cout<<arreglo[i]<<endl;
        }

	for (int i=0;i<contar(captcha)/2;i++){
		n2=captcha[cont];
		arreglo2[i]=n2;
		cont++;
	cout<<"Arreglo 2 "<< arreglo2<<endl;
	}

        for(int i=0;i<contar(captcha);i++){
                if(i<contar(captcha)){
                        if(arreglo[1]==arreglo[contar(captcha)]){
                                fin+=arreglo[1];
                        }
                }
                else{
                        if(arreglo[i]==arreglo[i+1]){
                                fin+=arreglo[i];
                        }
        }
        }

}



void  e2(){
	int p=0;
	int sum=0;
	int sino=0;
	string dig="";
	string fin="";
	cout<<"Ingrese p"<<endl;
	cin>>p;

	if(p<1){
	cout<<"Ingrese p positivo"<<endl;
        cin>>p;
	}

	for(int i=1;i<9000;i++){
		if(p%i==0){
			sum+=i;
			dig+=to_string(i)+"+";
		}
		
	}

	if (sum==p){
		cout<<"El numero si es perfecto "<<dig<<"="<<sum<<endl;
	}
	else{
	cout<<"El numero no es perfecto"<<endl;
	cout<<"El siguiente es: "<<endl;
	}
	
}




























