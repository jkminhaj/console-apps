#include<iostream>
using  namespace std ;

int main () {
    int selected ;
    float  c , f , k ;
    cout<< "Temp Converter App";
    cout<< endl;
    cout<< endl;
    cout << "1. Faren to Cel" << endl << "2.Faren to Kel" << endl << "3. Cel to Faren"<<endl<<"4. Kel to Cel";
    cin>> selected ;
    switch (selected)
    {
    case 1:
        cout<< "Please input the value of Faren";
        cin>> f ;
        //  (5.0 / 9.0) * (fahrenheit - 32)
        break;
    
    case 2:
        /* code */
        break;
    
    default:
        break;
    }
    return 0 ;
}