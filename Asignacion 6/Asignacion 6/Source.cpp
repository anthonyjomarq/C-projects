#include<iostream>
using namespace std;
int bubble_counter=0,selection_counter=0, merge_counter; // variables global

void bubble_sort(int [], int);
void show_array(int [],int);
void selectionsort(int [], int );
void merge(int*, int, int, int);
void merge_sort(int* arr, int low, int high);


int main()
{
     int a[7] = { 4,1,7,2,9,0,3 };
     show_array(a,7);
     bubble_sort(a,7);
     selectionsort(a,7);
     merge_sort(a, 0, 6);
     show_array(a,7);
     cout<<"Bubble counter = "<<bubble_counter<<endl;
     cout<<"Selection Counter = "<<selection_counter<<endl;
     cout << "Merge counter = " << merge_counter << endl;
     
     return 0;
}
void show_array(int array[],int size)
{
     for( int i=0 ; i<size; i++)
     {
          cout<<array[i]<< " ";
     }
     cout<<endl;
}
void bubble_sort( int array[], int size)
{
     bool swap;
     int temp;
     
     do
     {
          swap =false;
          for(int count=0; count< (size -1);count ++)
          {    bubble_counter++;
               if(array[count]>array[count +1])
               {
                    temp =array[count];
                    array[count]=array[count +1];
                    array[count +1]= temp;
                    swap = true;
               }
          }
          
     }while(swap);
     
}    
 void selectionsort(int array [], int size)
{
     int startscan, minindex, minivalue;
     
     for (startscan = 0; startscan < (size - 1); startscan++)
     { 
          minindex = startscan;
          minivalue = array[startscan];
          for(int index = startscan + 1; index < size; index++)
          {   selection_counter++;
               if (array[index] <minivalue)
              {
                 minivalue = array[index];
                 minindex = index;
               }
          }
          array[minindex] = array[startscan];
          array[startscan] = minivalue;
     }
}    
 void merge_sort(int* arr, int low, int high)
 {
     int mid;
     if (low < high) {
         //divide the array at mid and sort independently using merge sort
         mid = (low + high) / 2;
         merge_sort(arr, low, mid);
         merge_sort(arr, mid + 1, high);
         //merge or conquer sorted arrays
         merge(arr, low, high, mid);
     }
 }
 // Merge sort 
 void merge(int* arr, int low, int high, int mid)
 {
     int i, j, k, c[50];
     i = low;
     k = low;
     j = mid + 1;
     while (i <= mid && j <= high) {
         merge_counter++;
         if (arr[i] < arr[j]) {
             c[k] = arr[i];
             k++;
             i++;

         }
         else {
             c[k] = arr[j];
             k++;
             j++;
         }
     }
     while (i <= mid) {
         merge_counter++;
         c[k] = arr[i];
         k++;
         i++;
     }
     while (j <= high) {
         merge_counter++;
         c[k] = arr[j];
         k++;
         j++;
     }
     for (i = low; i < k; i++) {
         merge_counter++;
         arr[i] = c[i];
     }
 }