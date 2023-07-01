#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void leftRotate(int arr[], int k, int n)
{

    rotate(arr, arr + (k % n), arr + n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
            }
}

int main(){

    int arr[] = { 1, 3, 5, 7, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
   
    leftRotate(arr, k, n);

    return 0;
}