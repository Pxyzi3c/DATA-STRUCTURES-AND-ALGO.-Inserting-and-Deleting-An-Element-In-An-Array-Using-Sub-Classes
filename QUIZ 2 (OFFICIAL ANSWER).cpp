#include <iostream>
using namespace std;

void insertAtBeginning(int &n, int (&arr)[10], int x){
    int i;
    if(n == 0){
        arr[0] = x;
        n += 1;
    }
    else{
        n +=1;

        for(int i = n; i>=0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = x;
    }
}

void insertAtEnd(int &n, int (&arr)[10], int x){
    if(n == 0){
        arr[0] = x;
        n += 1;
    }
    else{
        arr[n] = x;
        n+=1;
    }
}

void insertAfterHead(int &n, int (&arr)[10], int x){
    if(n == 0){
        arr[0] = x;
        n+=1;
    }
    else{
        n+=1;
        for(int i = n; i>= 1; i--)
            arr[i] = arr[i-1];

        arr[1] = x;
    }
}

void deletePosition(int &n, int (&arr)[10], int pos){
    if(pos >= n){
        cout<<"position is out of range";
    }
    else{
        for(int i=pos; i<=n; i++){
            arr[i] = arr[i + 1];
        }
        n -=1;
    }
}//6 3 4

void printList(int (&arr)[10],int &n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10];
    int n = 0;
    insertAtBeginning(n, arr,9);
    insertAtEnd(n, arr, 4);
    insertAtBeginning(n, arr, 6);
    insertAtEnd(n, arr, 2);
    insertAfterHead(n, arr, 3);
    cout<<"Linked List: ";
    printList(arr, n);
    deletePosition(n, arr, 3);
    cout<<"\nAfter deleting an element: ";
    printList(arr, n);

}
//Linked List: 6 3 9 4 2
//After deleting an element: 6 3 9 3
