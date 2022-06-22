#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int l=0;
    int h= n-1;
    int mid =0;
    
    while(mid <= h) {
        switch(arr[mid]){
                //if the element is 0
            case 0:
                swap(arr[l++],arr[mid++]);
                break;
              //if element is 1
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[h--]);
                break;
        }
    }
}
