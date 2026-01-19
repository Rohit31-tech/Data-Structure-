//  Consider Array A = {5, 7 , 3  ,11 , 15}  , A2 = {25 , 49 , 9 , 121 , 225}

#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {20 , 35 , 59 , 34 , 31};
    int arr2[5] ;

    for(int i = 0 ; i < 5 ; i++){
        arr2[i] = arr1[i] * arr1[i];
    }

    cout<<"Sqaure is ";
    for(int i = 0; i < 5 ; i++){
        cout<<arr2[i] <<" ";
    }
return 0;
}
