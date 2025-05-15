#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Digite a quantidade de valores para somar: ";
	cin >> n;
	int vect[n];
	int vectAux[n];
	int vectSum[n];
	
	for (int i = 0; i < n; i++){
		cout << "Digite um valor: ";
		cin >> vect[i]; 
		cout << "Digite outro valor: ";
		cin >> vectAux[i]; 
		vectSum[i] = vect[i] + vectAux[i];
	}
	
	for (int i = 0; i < n; i++){
		cout << vect[i] << " + " << vectAux[i] << " = "<< vectSum[i] << endl;
	}
	
	return 0;
}
