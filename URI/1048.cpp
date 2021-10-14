#include <iostream>
#include <iomanip>

using namespace std;

double S,Sum;


int main() {
	cin >> S; 

	if(S > 0.00 & S <= 400.00){
		Sum = S*0.15;
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<Sum+S<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<Sum<<endl;
		cout<<"Em percentual: 15 %"<<endl;
	}
	if(S > 400.00 & S <= 800.00){
		Sum = S*0.12;
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<Sum+S<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<Sum<<endl;
		cout<<"Em percentual: 12 %"<<endl;
	}
	if(S > 800.00 & S <= 1200.00){
		Sum = S*0.10;
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<Sum+S<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<Sum<<endl;
		cout<<"Em percentual: 10 %"<<endl;
	}
	if(S > 1200.00 & S <= 2000.00){
		Sum = S*0.07;
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<Sum+S<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<Sum<<endl;
		cout<<"Em percentual: 7 %"<<endl;
	}
	if(S > 2000.00){
		Sum = S*0.04;
		cout<<fixed<<setprecision(2)<<"Novo salario: "<<Sum+S<<endl;
		cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<Sum<<endl;
		cout<<"Em percentual: 4 %"<<endl;
	}

}
