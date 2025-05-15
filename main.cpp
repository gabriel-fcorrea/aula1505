#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Digite o tamanho do vetor: ";
	cin >> n;
	int vect[n];
	
	for (int i = 0; i < n; i++){
		cout << "Digite um valor: ";
		cin >> vect[i]; 
	}
	
	for (int i = 0; i < n; i++){
		cout << "Valor na posicao [" << i << "]: " <<vect[i] << endl;
	}
	
	return 0;
}
