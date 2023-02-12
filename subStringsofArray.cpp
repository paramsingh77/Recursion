#include <iostream>
using namespace std;

// void printSubstringOfArray(int *arr , int i,int n , string osf)
// {
//     if(i == n) {
//         cout<<"[ "<<osf<<" ]"<<endl;
//         return;
//     }

//     printSubstringOfArray(arr,i+1,n,osf + to_string(arr[i]) + " ");
//     printSubstringOfArray(arr,i+1,n,osf);
// }

// void printSubsets(string *arr , int i , int n , string osf){
//     if(i == n){
//         cout<<"[ "<<osf<<" ]"<<endl;
//         return;
//     }
//     printSubsets(arr,i+1,n,osf+ arr[i]+" ");
//     printSubsets(arr, i + 1, n, osf);

// }

void printSubsets(int *arr, int i, int n, string osf)
{
    if (i == n)
    {
        cout << "[ " << osf << " ]" << endl;
        return;
    }

    printSubsets(arr, i + 1, n, osf + to_string(arr[i]) + " ");
    printSubsets(arr, i + 1, n, osf);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printSubsets(arr, 0, n, " ");
    return 0;
}