//Daniel Zavala Salazar 512035
//9 de Septiembre del 2016
#include<iostream>
#include<iomanip>

using namespace std;

void MMagica(int n){
	
	int ArrM[n][n];
	
	int x=0;
	int y=n/2;
	int cont=1;
	
	for(int i=0;i<n;i++){//00000
		for(int j=0;j<n;j++){
			ArrM[i][j]=0;
		}
	}
	
	while(cont<=n*n){
		if(ArrM[x][y]!=0){//cuando casilla ya está ocupada
			y--;
			x=x+2;
			continue;
		}else{
			ArrM[x][y]=cont;
			cont++;
		}
		
		x--;
		y++;
		
		if(x==-1 && y==n){//over y underflow simultaneo
			y--;
			x=x+2;
		}else{
			if(y==n){//overflow de columna
				y=0;
			}
			if(x==-1){//underflow de fila
				x=n-1;
			}
		}
	}
	   
	cout<<endl;
	for (int i=0;i<n;i++){//print
		for (int j=0;j<n;j++){
			cout<<setw(5)<<ArrM[i][j];
		}
		cout << endl;
	}
}

int main(){
	int n;//impar
	
	cout<<"Dimension: ";
	cin>>n;
	
	cout<<"Suma = "<<((n*n+1)/2)*n<<endl; //fórmula de sumatoria de cuadro magico
	MMagica(n);
	
	return 0;
}
