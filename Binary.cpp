#include<iostream>
#include<conio.h>


using namespace std;

int main()
{

   int arr[100],beg,mid,end,i,n,num;

   cout << "Enter the size of an array :";
   cin >> n;

   cout << "Enter the values: "<<endl;

   for(i = 0; i < n;i++)
   {   
       cin >> arr[i];
   }   

   beg = 0;
   end = n-1;

   cout << " Enter a value to be searched in an array ";
   cin >> num;

   while( beg <= end)
   {   
        
      mid = (beg+end)/2;


      if(arr[mid] == num)
      {   
         cout << "\nNumber found at position "<< (mid+1);
   
          exit(0);

      } else if(num > arr[mid]) {

         beg=mid+1;

      } else if (num < arr[mid]) {

         end=mid-1;
 
      }

   }

    cout << "Number does not found.";
 }