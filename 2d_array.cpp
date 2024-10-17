#include <iostream>
using namespace std ;
int main() {
    int row ,avg , col , sum = 0 ;
    cin >> row >> col ;
    int arr[row][col];
    for(int i = 0 ; i<row ; i++){
        for (int j = 0 ; j<col ; j++){
            cin >> arr[i][j];
        }
    }
    int highest = arr[0][0] , lowest = arr[0][0] ;
    for(int i = 0 ; i<row ; i++){
        for (int j = 0 ; j<col ; j++){
            if( arr[i][j] > highest ) highest = arr[i][j] ;
            if( arr[i][j] < lowest ) lowest = arr[i][j] ;
            sum += arr[i][j];
        }
        cout << endl ;
    }
    
    cout << "highest : " << highest << endl ;
    cout << "lowest : " << lowest << endl ;
    cout << "average : " << sum/(row*col);
    return 0;
}
