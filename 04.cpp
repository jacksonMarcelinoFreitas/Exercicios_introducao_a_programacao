#include <iostream>

using namespace std;
//Fazer um programa em cpp que lê o preço de um produto e inflaciona esse preço
// em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

int main() {
	
	float preco=0, infla=0;
	
	cout << "Digite um valor R$ ";
	cin>> preco;
	
	if (preco < 100){	
		preco = preco*1.1;
	}
	else if (preco >= 100){
		preco = preco*1.2;
	}
	
	cout << " \n\nO valor inflacionado eh R$ " << preco << endl;
	return 0;
}
