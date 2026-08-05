
// ==============================================================
//                     PROBLEM 02 - NUMBER ANALYZER
// ==============================================================
#include<iostream>
using namespace std;
int original(int n)
{
    return n;
}
int reverse(int n)
{
    int r =0;
    while(n>0)
    {
        int ld=n%10;
        r*=10;
        r+=ld;
        n/=10;
    }
    return r;
}
bool isPalindrome(int n)
{
    bool isPalindrome =true;
    int ori =n;
    int r =0;
    while(n>0)
    {
        int ld=n%10;
        r*=10;
        r+=ld;
        n/=10;
    }
    if(ori!=r)
    {
        return isPalindrome=false;
    }
    return true;
}  
bool isPrime(int n)
{
    bool isPrime=true;
    for(int i =2;i<n;i++)
    {
        if(n%i==0)
        {
           return isPrime =false;
        }  
    }
    return true;
}
int tDigit(int n)
{
    int count=0;
   while(n>0)
    {
        count +=1;
        n/=10;
    }
    return count;
}  
int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        int ld=n%10;
        sum+=ld;
        n/=10;
    }
    return sum;
}  
int product(int n)
{
    int pro=1;
   while(n>0)
    {
        int ld=n%10;
        pro*=ld;
        n/=10;
    }
    return pro;
}  
int factorial(int n)
{
    int fac=1;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            fac*=i;
        }
        return fac;
    }
    else
    return 0;
}
void table(int n)
{
    for(int i =0;i<=10;i++)
    {
        cout<<i<<" X "<<n<<" = "<<n*i<<endl;
    }
}
void pattern (int n)
{
    if(n%2==0)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-((i*2)-i-1);j++)
            {
                cout<<"  ";
            }
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    else 
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i+1;j++)
            {
                cout<<"* " ;
            }
            cout<<endl;
        }
    }
} 
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;
    cout<<"Original Number  - "<<original(n)<<endl;
    cout<<"Reverse Number  - "<<reverse(n)<<endl;
    cout<<"Is Palindrome  - "<<isPalindrome(n)<<endl;
    cout<<"Is Prime  - "<<isPrime(n)<<endl;
    cout<<"Total digits - "<<tDigit(n)<<endl;
    cout<<"Sum of digits  - "<<sum(n)<<endl;
    cout<<"Product of digits  - "<<product(n)<<endl;
    cout<<"Factorial  - "<<factorial (n)<<endl;
    cout<<"Multiplication table  - "<<endl;
    table(n);
    cout<<endl;
    cout<<"Pattern Printing - "<<endl;
    pattern(n);
}
