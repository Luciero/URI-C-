#include <iostream>
 
using namespace std;
int A,B,Z,X;

int main() {
    cin >> A >> B;
    
    Z = B%A;
    X = A%B;

    if(Z == 0 | X == 0){
        cout << "Sao Multiplos" << endl;
    }else{
        cout << "Nao sao Multiplos" << endl;
    }
}
