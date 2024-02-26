#include <iostream>
using namespace std;

int main(){
    int numero, i=0;
    cout<<"Ingrese un numero";
    cin>>numero;
    while (i <= numero){
        if(i % 2 ==0){
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}