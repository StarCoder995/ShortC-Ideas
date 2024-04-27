#include<iostream>
#include<locale.h>
using namespace std;
const int MAX = 100;
typedef struct ListaV{
	float dados[MAX];
	int n = 0;
};
ListaV telefones;
// problema : Colocar um valor em posição x caso seja válida. Entrada :posição, valor. Saída : colocar o valor sem deletar outros. Saída para valido e invalido
//Mover cada dado para a direita
void inserir(int pos, float dado, ListaV &l); bool teste(int pos, ListaV l); float acessar(int pos,ListaV l);void alterar(int pos, float dado, ListaV &l);
int main(){
	setlocale(LC_ALL,"Portuguese");
	int pos,op;
	float val;
	bool valida = true;
	cout<< "O que deseja fazer na lista?\n 1 - Ver valor \n 2 - Inserir valor \n 3 - Alterar valor\n";
	cin >> op;
	switch(op){
		case 1 :
			if (telefones.n == 0)
				cout << "Lista Vazia";
			else{
					cout<<"Digite a posição a ser acessada\n";
			cin >> pos;
			pos -=1;
			if(teste(pos,telefones))
				cout << "Elemento acessado : " << acessar(pos,telefones);				
			else
					cout << "ERRO : POSIÇÃO INVÁLIDA";
			}		
		break;
		
		case 2:
			if(telefones.n == 0){
				cout<< "Lista vazia \n";
				cout<<"\nDigite um valor a ser colocado\n";
				cin >> val;
				inserir(0, val,telefones);
					cout << "\n lista atual :";
					for(int i = 0; i < telefones.n ; i++)
						cout<< telefones.dados[i]<< " ";
			}
				
			else{
				cout<< "\n Lista atual : \n";
				for(int i = 0; i < telefones.n ; i++)
					cout<< telefones.dados[i] << " ";
				cout << "\nEscolha a posição do valor: \n";
				cin >> pos;
				pos -=1;
				if(teste(pos,telefones)){
					cout<<"\nDigite um valor a ser colocado\n";
						cin >> val;
						alterar(pos, val,telefones);
						cout << "\n Lista atual \n";
						for(int i = 0; i < telefones.n ; i++)
							cout<< telefones.dados[i]<< " ";
				}
				else
					cout << "ERRO : POSIÇÃO INVÁLIDA";
			}
		
		break;
		case 3: 
		if (telefones.n == 0)
				cout << "Lista Vazia";
		else{
		cout<< "Lista atual : \n";
				for(int i = 0; i < telefones.n ; i++)
					cout<< telefones.dados[i] << " ";
				cout << "\nEscolha a posição do valor: \n";
				cin >> pos;
				pos -=1;
				if(teste(pos,telefones)){
					cout<<"\nDigite um valor a ser colocado\n";
						cin >> val;
						inserir(pos, val,telefones);
						cout << "\n Lista atual \n";
						for(int i = 0; i < telefones.n ; i++)
							cout<< telefones.dados[i]<< " ";
				}
				else
					cout << "ERRO : POSIÇÃO INVÁLIDA";
			}			
		break;
		default :
		cout << "Opção inexistente \n";
		main();
	}
	cout << "\n";
	main();
}
float acessar(int pos,ListaV l){
	return l.dados[pos];
}
void inserir( int pos, float dado,ListaV &l){
		for(int i = l.n-1; i >= pos ; i --)
			l.dados[i + 1] = l.dados[i];	
		l.n++;
		l.dados[pos] = dado;
}
void alterar(int pos, float dado,ListaV &l){	
		l.dados[pos] = dado;
}
bool teste(int pos, ListaV l){
	if(pos < 0 or pos > MAX)
		return false;
	else if (pos > l.n)
		return false;
	else 
		return true;
}
