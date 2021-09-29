#include <iostream>
#include <iomanip>
using namespace std;

float A,B,C,R,E;

int main(){
	cin >> A >> B >> C;
	R = A+B+C;
	E = ((A+B)*C)/2;

	if(A < B+C & B < A+C & C < A+B){
		cout<<fixed<<setprecision(1)<<"Perimetro = "<<R<<endl;
	}else{
		cout<<fixed<<setprecision(1)<<"Area = "<<E<<endl;
	}
}
