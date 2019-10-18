#include <bits/stdc++.h>
using namespace std;
struct PILA{ 
  int valor; 
  PILA* abajo; 
};
PILA *pila=NULL; 
PILA *aux=NULL; 

int main() {
  int numero;
  cout<<"Ingrese un numero: ";
  cin>>numero; 
  pila=new PILA(); 
  pila->valor=numero; 
  pila->abajo=NULL; 

  cout<<"Ingrese un numero: ";
  cin>>numero; 
  aux=new PILA();  
  aux->valor=numero;  
  aux->abajo=pila; 
  pila=aux; 

  cout<<"Ingrese un numero: ";
  cin>>numero;
  aux=new PILA(); 	
  aux->valor=numero; 
  aux->abajo=pila;
  pila=aux;

  cout<<"Los elementos son"<<endl;
  cout<<pila->valor<<endl;
  cout<<pila->abajo->valor<<endl;
  cout<<pila->abajo->abajo->valor<<endl;
 
  aux=pila; 
  pila=pila->abajo; 
  delete aux; 

  cout<<"Los elementos son"<<endl;
  cout<<pila->valor<<endl;
  cout<<pila->abajo->valor<<endl;
}


