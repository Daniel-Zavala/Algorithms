//Daniel Zavala Salazar A00512035
//
//Llena una matriz con triominos, solicitando al
//usuario el tamaño de la matriz y una casilla "ocupada"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

int Arr[64][64], size, num = 1;

void Triomino(int tr, int tc, int ox, int oy, int size){
	if (size == 1){
		return;
	}
	
	int t = num++;
	int s = size/2;
	
	if (ox < tr+s && oy < tc+s){//izquierda arriba
		Triomino(tr, tc, ox, oy, s);
	}else{
		Arr[tr+s - 1][tc+s - 1] = t;
		Triomino(tr, tc, tr+s-1, tc+s-1, s);
	}//ocupa uno y llena, lo mismo en todos

	if (ox < tr+s && oy >= tc+s){//derecha arriba
		Triomino(tr, tc+s, ox, oy, s);
	}else{
		Arr[tr+s - 1][tc+s] = t;
        Triomino(tr, tc+s, tr+s-1, tc+s, s);
	}
	
	if (ox >= tr+s && oy < tc+s){//abajo izquierda
		Triomino(tr+s, tc, ox, oy, s);
	}else{
        Arr[tr+s][tc+s - 1] = t;
        Triomino(tr+s, tc, tr+s, tc+s-1, s);
	}
	
	if (ox >= tr+s && oy >= tc+s){//abajo derecha
		Triomino(tr+s, tc+s, ox, oy, s);
	}else{
		Arr[tr+s][tc+s] = t;
        Triomino(tr+s, tc+s, tr+s, tc+s, s);
	}
}

int main(){
	int n, ox, oy;
	cout << "Dame valor de n (2^n): ";
	cin >> n;
	size = pow(2,n);	

	cout << "Casilla Ocupada: ";
	cin >> ox >> oy;
	
	Arr[ox][oy] = 0;
	Triomino(0, 0, ox, oy, size);
	
	//imprime
	cout<<endl;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			cout << setw (4) << Arr[i][j];
		}
		cout << endl;
	}
}
