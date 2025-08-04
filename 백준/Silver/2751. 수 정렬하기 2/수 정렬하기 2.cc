#include <iostream>
using namespace std;
int arr[1000001];
int temp[1000001];

void mergeSort( int left, int right);
void merge( int left, int mid, int right);


int main()
{
    int a; 
    cin >> a;
   
  

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    mergeSort( 0, a-1);
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << '\n';
    }



    return 0;
}


void mergeSort(int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;  

        mergeSort( left, mid);     
        mergeSort(mid + 1, right); 

        merge( left, mid, right);  
    }
}

void merge( int left, int mid, int right)
{
    int i = left;     
    int j = mid + 1;  
    int k = 0;        

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }
    for (i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }
}


