//Sanya Jaitly
//number is even/odd/zero 
//Experiment 5a
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    if(a==0)
    {
        cout<<"The number is zero";
    }
    else if(a%2==0)
    {
        cout<<"The number is even "; 
    }
    else
    {
        cout<<"The number is odd ";
    }
}
/*Output:
Enter a number: 
67
The number is odd
*/




// Comparison between 3 numbers and print largest number using if-else 
// experiment 5b
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"Enter the third number"<<endl;
    cin>>c;
    if ((a>b) && (a>c))
    cout<<" The first number is largest"<<endl;
    else if((b>a) && (b>c))
    cout<<" The second number is largest"<<endl;
    else
    cout<<" The third number is largest"<<endl;

}
/* Output:
Enter the first number
3
Enter the second number
5
Enter the third number
7
 The third number is largest
*/

