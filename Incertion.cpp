#include <iostream>

using namespace std;


int main ()
{

   int arr[]={6,3,4,1,5,7,9,8};

  for (int i =0;i<8;i++){

  
  
   for (int i=1;i<8;i++)
   {
        int temp = arr[i];

        int j = i-1;

        while (j>=0&& arr[j]>temp)
        {
            arr[j+1]=arr[j];

            j--  ;

        }
        
         arr[j+1]=temp;

          
        
   }
     cout<< arr[i];
  }
  


   


}

