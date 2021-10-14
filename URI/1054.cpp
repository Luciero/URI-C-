#include <iostream>
#include <iomanip>

using namespace std;
float Num,N;

int main() {

Num = 0;
	for(int i = 0;i < 6;i++){
		cin >> N;
		if(N > 0){
			Num += 1;
		}
	}
cout<<Num<<" valores positivos"<<endl;
}
