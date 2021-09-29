#include <iostream>
using namespace std;

int X,Y,Z; 
int H = 24;

int main() {
	cin >> X >> Y;

	if(X > Y){
		Z = (X-H)-Y;
		Z = Z*(-1);
		cout<<"O JOGO DUROU "<<Z<<" HORA(S)"<<endl;
	}else if(X == Y){
		cout<<"O JOGO DUROU "<<H<<" HORA(S)"<<endl;
	}else if(Y > X){
		Y = Y-X;
		cout<<"O JOGO DUROU "<<Y<<" HORA(S)"<<endl;
	}
}
