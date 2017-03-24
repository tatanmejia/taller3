#include <stdlib.h>
#include <stdio.h>
#include <iostream>


using namespace std;

struct Nodo{
    int dato;
    Nodo *Siguiente;
};

void init_pila (Nodo *&, int);

void quitar (Nodo *&, int &);

int main(){
    int n,dato;
    char salir;

    Nodo *pila =NULL;
    do{

        printf("\n\t\tMENU\n");
        printf("\n1. Inicializar Pila\n");
        printf("\n2. Verificar Pila")
        printf("\n3. Insertar Elementos de Pila\n");
        printf("\n4. Retirar elemento de pila")
        printf("\n0. Salir")
        printf("\nOpcion: ");scanf("%d",dato);

        switch(dato){
        printf("Ingrese un numero: \n");
        scanf("%d",&n);
        insertar(pila, n);
        printf("Presiones (S) para insertar mas datos");
        cin>>salir;
        cin.ignore(256,'\n');
        }while(salir=='S' || salir=='s');
        while(pila!=NULL){
            quitar(pila,n);
            if(pila!=NULL){
                printf("%d -> ",n);
            }else{
                printf("%d -> FIN",n);
            }

            }
        }
    return 0;

}

void init_pila(){
    Nodo *pila =NULL;

    printf("\Pila inicializada correctamente\n");
}

void quitar (Nodo *&pila, int &n){
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->Siguiente;
    free(aux);
}
