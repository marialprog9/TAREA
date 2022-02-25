/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
    
    int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division=0;
    
    cout << "Digite un numero:"; cin >> n1;
    cout << "Digite un numero:"; cin >>n2;
    
    suma = n1 + n2;
    resta = n2 - n2;
    multiplicacion = n1 * n2;
    division = n1/n2;
    
    cout<<"\nLa suma es: " <<suma<<endl;
    cout<<"La resta es: " <<resta<<endl;
    cout<<"La multiplicacion es: " <<multiplicacion<<endl;
    cout<<"La division es: " <<division<<endl;
    
    
 return 0;   
}
