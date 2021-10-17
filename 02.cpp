#include <iostream>

using namespace std;
//Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere
int main() {
/*inteiro contador = 1
		enquanto (contador<=10){
			escreva( contador + "\n")
			contador++
			*/
	int n, contador=1;
	
	cout << "Digite um valor para n: ";
	cin >> n;
	
	while (contador <=n){
		cout << contador << "\n";
		contador++;
	}
	
	
	return 0;
}
