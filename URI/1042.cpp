#include <iostream>
#include <iomanip>
using namespace std;

int A,B,C;
int maior = -1000000000;
int maior2 = -1000000000;
int maior3 = -1000000000;

int main(){
  cin >> A >> B >> C;

  if(A > maior){
    maior = A;
  }if(B > maior){
    maior = B;
  }if(C > maior){
    maior = C;
    
  }if(maior == A){
    if(maior > B){
      maior2 = B;
    }
    if(maior > C){
      maior2 = C;
    }
    if(maior2 < B){
      maior2 = B;
    }

  }if(maior == B){
    if(maior > A){
      maior2 = A;
    }
    if(maior > C){
      maior2 = C;
    }
    if(maior2 < A){
      maior2 = A;
    }

  }if(maior == C){
    if(maior > A){
      maior2 = A;
    }
    if(maior > B){
      maior2 = B;
    }
    if(maior2 < A){
      maior2 = A;
    }

  }if(maior2 == A){
    if(maior2 < B){
      maior3 = C;
    }
    if(maior2 < C){
      maior3 = B;
    }
  }if(maior2 == B){
    if(maior2 < A){
      maior3 = C;
    }
    if(maior2 < C){
      maior3 = A;
    }
  }if(maior2 == C){
    if(maior2 < A){
      maior3 = B;
    }
    if(maior2 < B){
      maior3 = A;
    }
  }
  cout<<maior3<<endl;
  cout<<maior2<<endl;
  cout<<maior<<endl;
  cout<<""<<endl;
  cout<<A<<endl;
  cout<<B<<endl;
  cout<<C<<endl;
}
