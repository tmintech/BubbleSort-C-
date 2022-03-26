#include <iostream>

using namespace std;

void BubbleSort(int arr[], int size){
    for(int j = 0; j < size-1; j++){
        
        for(int i = 0; i < size - 1-j; i++){
            if(arr[i] > arr[i+1]){
               int temp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = temp;
            }
        }
    }
}



int main() {
    
    int arr[100];
    int size;
    
    cout << "Enter size:" << endl;
    cin >> size;
    
    cout << "Enter the values of array:" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << endl;
    
    
    BubbleSort(arr,size);
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
   
    return 0;
}
