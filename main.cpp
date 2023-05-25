 #include <iostream>
#include "lib.h"
using namespace std;
int main() {
    int dim;
    cin>>dim;
    float a[dim];
    for(int j = 0; j<dim; j++){
        cin>>a[j];
    }
    cout<<ricercaMax(a,dim)<<endl;
 
 
    return 0;
} 
  
  

