#include <iostream>
#include <stdlib.h>

using namespace std;

//Crie um algoritmo que receba 3 números e informe qual o maior entre eles.

int main() {
	int num1, num2, num3, maior=0;
	
	cout << "Informe o primeiro numero:";
	cin >> num1;
	
	cout << "Informe o segundo numero:";
	cin >> num2;
	
	cout << "Informe o terceiro numero:";
	cin >> num3;
	
	if(num1 > num2){
		num1 == maior;
		cout << "O numero ("<< num1 << ") eh maior";
	}
	else if(num1 > num3){
		num1 == maior;
		cout << "O numero ("<< num1 << ") eh maior";
	}
	else if(num2 > num1){
		num2 == maior;
		cout << "O numero ("<< num2 << ") eh maior";
	}
	else if(num2 > num3){
		num2 == maior;
		cout << "O numero ("<< num2 << ") eh maior";
	}
	else{
		num3 == maior;
		cout << "O numero ("<< num3 << ") eh maior";
	}
	
	
	
	return 0;
}
