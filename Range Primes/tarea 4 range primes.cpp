#include<iostream>
#include<cmath>
#include<queue>

using namespace std;

bool isPrime(int number){
	
	for (int r=2; r<number; r++){
		if(number%r==0){
			return true;
		}
	}
	return false;
}

int main(){
	int M,A,B,Af=-1,Bf=-1,X;
	bool cha=true,chb=true;
	queue<int> q;
	
	cin>>M;
	for(int k=0;k<M;k++){
		cin>>X;
		
		if(!isPrime(X)){
			q.push(X);
			q.push(X);
			continue;
		}
		cha=true;
		chb=true;
		for(int i=1;cha || chb;i++){
			A=X-i;
			B=X+i;
			
			if(cha){
				cha=isPrime(A);
				if(!cha){
					Af=A;
				}
			}
			
			if(chb){
				chb=isPrime(B);
				if(!chb){
					Bf=B;
				}
			}
		}
		q.push(Af);
		q.push(Bf);
	}
	while(q.size()>0){
		cout<<q.front()<<" ";
		q.pop();
		cout<<q.front()<<endl;
		q.pop();
	}
	return 0;
}
