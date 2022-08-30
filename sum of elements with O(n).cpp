//Program to find sum of given series 1+x+x^2+x^3+....+x^n with time complexity of O(n)
#include<iostream>
using namespace std;
int main()
{
    int x,i,sum=1,n;//Here we assign value 1 to sum variable because in given series they said to add 1 first
    cout << "Enter the value of x-";
    cin >> x ; //variable x store the v

    cout << "Enter the number of terms-";
    cin >> n ; //variable n stores the last value

    for(i=1;i<=n;i++)  //Here i is looping variable and it helps to moves the power values
    {
        sum=sum*x;
        sum=sum+1;  //here sum variable stores the  value of each number until the for loop gets false
    }

    cout << "The sum of the given series when "<< x << " is " << sum; //This statement is used to print the sum of given series
}

//Here this is O(n) due to here we use only one functions in this program with those function loops n so the complexity of this program is O(n)
