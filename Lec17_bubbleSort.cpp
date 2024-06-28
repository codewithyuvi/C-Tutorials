#include <iostream>
using namespace std;

int main(){
    int arr[] = {6, 2, 8, 4, 10};
    int n=8;

    for(int i=1; i<n; i++){

        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){

        cout << arr[i] << " ";
    }

}

/*
Sample Input 1:
1
5
6 2 8 4 10
Sample Output 1:
2 4 6 8 10
Sample Input 2:
2
2
1 2
4
4 3 2 1
Sample Output 2:
1 2
1 2 3 4
*/