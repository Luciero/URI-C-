#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int H1,M1,H2,M2,Hours,Minuts,Hours2,Minuts2,base,base2,base3;

int main() {
	cin >> H1 >> M1 >> H2 >> M2;
	
	base = H1*60+M1;
	base2 = H2*60+M2;
	

	if(H1 < H2){
		base = abs(base - base2);
		base2 = base/60;
		Minuts = base%60;
		cout<<"O JOGO DUROU "<<base2<<" HORA(S) E "<<Minuts<<" MINUTO(S)"<<endl;
	}
	if(H1 > H2){
		base = abs(base - base2-24*60);
		base2 = (base/60);
		Minuts2 = base%60;
		cout<<"O JOGO DUROU "<<base2<<" HORA(S) E "<<Minuts2<<" MINUTO(S)"<<endl;
	}
	if(H1 == H2 & M1 > M2){
		base = abs(base - base2-24*60);
		base2 = (base/60);
		Minuts2 = base%60;
		cout<<"O JOGO DUROU "<<base2<<" HORA(S) E "<<Minuts2<<" MINUTO(S)"<<endl;
	}
	if(H1 == H2 & M1 < M2){
		Minuts = M2 - M1;
		cout<<"O JOGO DUROU "<<"0"<<" HORA(S) E "<<Minuts<<" MINUTO(S)"<<endl;
	}
	if(H1 == H2 & M1 == M2){
		cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
	}
}
