 #include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int dim;
    cout<<"inserire da tastiera la dimensione dell'array";
    cin>>dim;

    float a[dim];
    cout << "Inserire da tastiera tutti gli elementi dell'array" << endl;
    for(int j = 0; j<dim; j++){
        cin>>a[j];
    }
    cout<<ricercaMax(a,dim)<<endl;
    return 0;
} 
  
  

