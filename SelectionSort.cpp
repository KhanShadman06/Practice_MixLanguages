#include <iostream>

using namespace std ;

int main ()
 {     

    int arr[]={4,6,8,2,7,5,1,3};



    for (int i= 0;i<8;i++)
    {
        int min = i;
        for (int j=i+1;j<8;j++){

        if (arr[j]<arr [min])
        {   

            min=j;


        }
        }

        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

         cout << arr[i];
    }

   


















}