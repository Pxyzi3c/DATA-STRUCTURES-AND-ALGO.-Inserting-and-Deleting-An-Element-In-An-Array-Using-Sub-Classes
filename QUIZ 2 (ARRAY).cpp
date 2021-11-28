#include <stdlib.h>
#include <iostream>
using namespace std;


void insertAtBeginning(int arr[5], int elem) {
  int i, n = 5;

  for (i = n; i >= 0; i--){
    arr[i] = arr[i - 1];
  }

  arr[0] = elem;
}

void insertAfterHead(int arr[5], int elem) {
  int counter = 0, n = 5;

  if (arr[counter] == 0) {
  cout << "The given first element (head) cannot be NULL";
  exit(0);
  }

  counter = n;

  for (counter; counter >= 1; counter--)
  {
      arr[counter] = arr[counter - 1];
  }

  arr[1] = elem;
}


void insertAtEnd(int arr[5],int elem) {
  int counter = 0;

  if (arr[counter] == 0) {
  arr[counter] = elem;
  return;
  }

  while (arr[counter] != 0)
  {
      arr[counter] = arr[counter];
      counter++;
      if(arr[counter] == 0){
        arr[counter] = elem;
        return;
      }
  }
}


void deletePosition(int arr[5], int pos) {
  int n = 5, indexNum;
  indexNum = pos - 1;

  for (int counter = indexNum; counter < n; counter++){
    arr[counter] = arr[counter + 1];
    if (arr[counter] == 0) {
        return;
    }
  }
}


void printArray(int arr[5]) {
   int n = 5;
   for (int counter = 0; counter < n; counter++){
      if (arr[counter] == 0){
        return;
      }
      cout << arr[counter] << " ";
   }
   cout << endl;
}


int main() {
  int n = 5;//size of an array
  int arr[n] = {0};

  insertAtBeginning(arr, 9);
  insertAtEnd(arr, 4);
  insertAtBeginning(arr, 6);
  insertAtEnd(arr, 2);
  insertAfterHead(arr, 3);

  cout << "Array list: ";
  printArray(arr);

  cout << "\nAfter deleting an element: ";
  deletePosition(arr, 3);
  printArray(arr);
}
