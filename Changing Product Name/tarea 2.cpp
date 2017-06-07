//Daniel Zavala Salazar A00512035

#include<iostream>
#include<string>
using namespace std;
int main(){
	int n=0;
	char x,y,aux;
	string alfa="abcdefghijklmnopqrstuvwxyz";
	string nombre="";
	
	cin>>n;
	cin>>nombre;
	
	for(int i=0;i<n;i++){
		cin>>x>>y;
		aux=alfa[x-97];
		alfa[x-97]=alfa[y-97];
		alfa[y-97]=aux;
	}
	for(int i=0;i<nombre.length();i++){
		if(nombre[i]!=' '){
			nombre[i]=alfa[nombre[i]-97];
		}
	}
	cout<<nombre<<endl;
	return 0;
}
