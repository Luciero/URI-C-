#include <iostream>
using namespace std;

double A,B,C;
double maior,maior2,maior3;


int main() {
	cin >> A >> B >> C;
	
	if(A >= B & A >= C){
		maior = A;
		maior2 = C;
		maior3 = B;	
	}else if(B >= A & B >= C){
		maior = B;
		maior2 = A; 
		maior3 = C;
	}else if(C >= A & C >= B){
		maior = C;
		maior2 = A;
		maior3 = B;
	}
	
	if(maior >= (maior2 + maior3)){
		cout<<"NAO FORMA TRIANGULO"<<endl;
	}else{
	if((maior*maior) == (maior2*maior2)+(maior3*maior3)){
	cout<<"TRIANGULO RETANGULO"<<endl;
	}else{
	if((maior*maior) > (maior2*maior2)+(maior3*maior3)){
		cout<<"TRIANGULO OBTUSANGULO"<<endl;
	}if((maior*maior) < (maior2*maior2)+(maior3*maior3)){
		cout<<"TRIANGULO ACUTANGULO"<<endl;
	}if(maior == maior2 & maior == maior3){
		cout<<"TRIANGULO EQUILATERO"<<endl;
	}if((maior != maior2 & maior2 == maior3) | (maior != maior2 & maior == maior3)|(maior != maior3 & maior == maior2)){
		cout<<"TRIANGULO ISOSCELES"<<endl;
	}
	}
	}
}

