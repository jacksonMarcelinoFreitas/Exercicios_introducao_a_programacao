#include <iostream>

using namespace std;

//Ler 10 valores, calcular e escrever a média aritmética desses valores lidos.

int main() {
	
	int contador=1;
	float media, soma, valor;
	
	
	while (contador <=10){
	cout << "Digite um numero : ";
	cin >> valor;
	soma +=valor;
	contador++;
    }
    
    media = soma/3;
    
    cout << "A media aritmetica eh : " <<media << endl;
	
	return 0;
}
