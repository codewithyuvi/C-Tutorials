#include <iostream>
using namespace std;

int main(){
    
    for(int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = 0; j = i+1; j<n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);

    }


}