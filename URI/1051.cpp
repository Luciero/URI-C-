#include <iostream>
#include <iomanip>

using namespace std;

double S,Sum,X,X1,X2,X3;

int main() {
	X1 = 2000;
	X2 = 1000*0.08;
	X3 = 1500*0.18;

	cin >> S;

if(S <= 2000.00){
	cout<<"Isento"<<endl;
}
else if(S <= 3000.00){
	S -= X1;
	S *= 0.08;
	cout<<fixed<<setprecision(2)<<"R$ "<<S<<endl;
}
else if(S <= 4500){
	S -= 3000;
	S *= 0.18;
	Sum = S+X2;
	cout<<fixed<<setprecision(2)<<"R$ "<<Sum<<endl;
}
else if(S > 4500){
	S -= 4500;
	S *= 0.28;
	X = S+X2;
	Sum = X+X3;
	cout<<fixed<<setprecision(2)<<"R$ "<<Sum<<endl;
}
}
