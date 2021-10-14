#include <iostream>
#include <iomanip>

using namespace std;

 string Words1,Words2,Words3;


int main() {
	cin >> Words1;
	cin >> Words2;
	cin >> Words3;

if(Words1 == "vertebrado"){
	if(Words2 == "ave"){
		if(Words3 == "carniforo"){
			cout<<"aguia"<<endl;
		}
		else if(Words3 == "onivoro"){
			cout<<"pomba"<<endl;
		}
	}
	else if(Words2 == "mamifero"){
		if(Words3 == "onivero"){
			cout<<"homem"<<endl;
		}
		else if(Words3 == "herbivoro"){
			cout<<"vaca"<<endl;
		}
	}
}
else if(Words1 == "invertebrado"){
	if(Words2 == "inseto"){
		if(Words3 == "hematofago"){
			cout<<"pulga"<<endl;
		}
		else if(Words3 == "herbivoro"){
			cout<<"largata"<<endl;
		}
	}
	else if(Words2 == "anelidio"){
		if(Words3 == "hematofago"){
			cout<<"sanguessuga"<<endl;
		}
		else if(Words3 == "onivoro"){
			cout<<"minhoca"<<endl;
		}
	}
}
}
