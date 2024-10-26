#include <iostream>
using  namespace std ;



int main () {
    int selected ;
    float  c , f , k ;
    cout<< "Temp Converter App";
    cout<< endl;
    cout<< endl;
    cout << "1.Faren to Cel" << endl << "2.Faren to Kel" << endl << "3.Cel to Faren"<<endl<<"4.Kel to Cel"<<endl<<endl<<"Select : ";
    cin>> selected ;
    switch (selected)
    {
    case 1:
        cout<< "Please input the value of Faren : ";
        cin>> f ;
        cout<<endl ;
        cout << f <<" Farentheit : " <<(5.0 / 9.0) * (f - 32) << " Celcius" ;
        break;
    
    case 2:
        cout<< "Please input the value of Faren : ";
        cin>> f ;
        cout<<endl ;
        cout << f <<" Farentheit : " << (f - 32) * (5/9) + 273.15  << " Kelvin" ;
        break;
    
    default:
        break;
    }
    return 0 ;
}
