#include <iostream>
using namespace std;

int main ()

{
        int arr[7]={1,2,3,6,9,4,8};
        int temp;

         for (int i =0 ;i<7;i++)
         {
             for(int j =i+1;j<7;j++)
             {
                if (arr[j]<arr[i])

                {
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;




                }
                


             }
              cout<< arr[i]<< endl;



         }

        
        

       

         

       



}