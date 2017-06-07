#include<iostream>
using namespace std;
int main(){
	int n,x=0;
	string s;
	
	cin>>n;
	cin>>s;
	
	for(int i=0;i<n;i++){
		if(s[i]=='1'){
			x++;
		}
	}
	if(x==0 || x==n){
		cout<<n<<endl;
	}
	else if(x==n/2){
		cout<<0<<endl;
	}
	else if(x<n/2){
		cout<<n-2*x<<endl;
	}
	else{
		cout<<n-(n-x)*2<<endl;
	}
	
	return 0;
}
