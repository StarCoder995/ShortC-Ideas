#include<iostream>
#include<locale.h>
using namespace std;
typedef struct ListaP{
	float dado;
	ListaP *next;
};
typedef ListaP *ListaPT;
void iniciar(ListaPT &l, float val);
void inserir(ListaPT &l, float val, int pos);
int main(){
	ListaPT head;
	head = new ListaP;
	head->next = NULL;
	setlocale(LC_ALL,"Portuguese");
	float val;
	int op, pos, op2 = 0;
	cout<< "Digite um valor para iniciar a nossa lista\n";
	cin >> val;
	iniciar(head,val);
	do{	
	cout<< "Agora diga o que voc� deseja fazer com nossa lista\n 1 - Imprimir a lista\n 2 - Inserir um valor no inicio \n 3 - Inserir um valor em uma posi��o escolhida\n";
	cin >> op;
	switch(op){
		case 1:
		break;
		case 2:
			break;
		case 3: 
		cout << "Diga a posi��o desejada\n";
		cin >> pos;
		cout<< "Digite um valor\n";
		cin >> val;
		inserir(head,val,pos);
		break;
		default :
		cout << "Resposta Inv�lida!\n";
		continue;
	}
		cout<< "Deseja tentar novamente?\n 0 - N�o \n 1 - Sim";
		cin >> op2;
		switch(op2){
			case 1: 
			case 0:
			break;
			default:
				op = -1;
				continue;
		}
		
	}while(op2 !=  1);
	
}
void iniciar(ListaPT &l, float val){
	ListaPT aux;
	aux = new ListaP;
	aux->dado = val;
	aux->next = l;
	l = aux;
}
void inserir(ListaPT &l, float val, int pos){
	setlocale(LC_ALL,"Portuguese");
	ListaPT aux;
	aux = l
	int cont = 1;
	while(aux->next != NULL){
		cont++;
		aux = aux->next;
	}
	if(pos > cont)
		cout << "INV�LIDO";
	else{
		aux = new ListaP;
		aux->dado = val;
		for(int i = 1; i < pos; i++){
			aux->prox = l->prox;
		}
		
	} 
	
}
