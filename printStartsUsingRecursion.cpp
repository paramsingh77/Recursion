#include<iostream>
using namespace std;

// void printStarss(int n){
//     if( n == 0) return;
//     for(int i = 0 ; i < n ;i++){
//         cout<<"*";
//     }
//     cout<<endl;

//     printStars(n-1);
// }

// void printStars(int  n , int i){
//     if(n == 0) return ;
//     if(i < n){
//         cout << "* ";
//         printStars(n, i + 1);
//         cout<<"* ";
//         //incrementing starts or printing stars in column
        
//     }
//     else{
//         //print stars row wise
//         cout<<endl; 
//         printStars(n-1,0);
//         cout << endl;
//         }
// }

void printStars(int n , int i){
    if(n == 0) return;
    if(i<n){
        printStars(n, i + 1);
        cout<<"* ";
       
    }
    else{
       
        printStars(n-1,0);
        cout << endl;
    }
}

int main(){
    printStars(5,0);
    return 0;
}