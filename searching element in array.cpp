#include<iostream>
using namespace std;
int main()
{
    int arr[20],k,i,n,flag;
    cout << "Enter no.of elements in an array" << endl;
    cin >> n ;

    cout << "Enter the elements in an array" << endl;
    for(i=0;i<n;i++)
    {
      cin >> arr[i] ;
    }

    cout << "Enter the element to search" << endl;
    cin >> k ;

    for(i=0;i<n;i++)
    {
     if(arr[i]==k)
      {
        flag=1;
        break;
      }

    }

    if(flag==1)
     {
       cout << "The element is there in the array " << k << " at position " << i;
     }
    else
       cout << "The element is not there in the array " << k;
}

