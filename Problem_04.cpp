
// =================================================================
//                   PROBLEM 04 - ARRAY TOOLKIT
// =================================================================
#include<iostream>
#include<climits>
using namespace std;
void input(int arr[],int n)
{
    cout<<"Enter Elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<endl;
    }
}
void output(int arr[],int n)
{
    cout<<"=============================="<<endl;
    cout<<"Array"<<endl;
    cout<<"=============================="<<endl;
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
int max(int arr[],int n)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
        }
    }
    return mx;
}
int min(int arr[],int n)
{
    int mi=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(mi>arr[i])
        {
            mi=arr[i];
        }
    }
    return mi;
}
int sum(int arr[],int n)
{
   int sum=0;
    for(int i=0;i<n;i++)
    {
      sum+=arr[i];
    }
    return sum;
}
float average(int arr[],int n)
{
   float sum=0;
    for(int i=0;i<n;i++)
    {
      sum+=arr[i];
    }
    float avg =sum/n;
    return avg;
}
int Ecount(int arr[],int n)
{
   int count=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      {
        count +=1;
      }
    }
    return count;
}
int Ocount(int arr[],int n)
{
   int count=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]%2!=0)
      {
        count +=1;
      }
    }
    return count;
}
void search(int arr[],int n)
{
    int num;
   cout<<"Enter element to search :";
   cin>>num;
   bool isFound=false;
   for(int i=0;i<n;i++)
   {
    if(arr[i]==num)
    {
        isFound=true;
        cout<<"        Found at Index : "<<i<<endl;
    }
   }
   if(isFound==false)
   {
    cout<<"Number is not found !";
   }
}
void R_array(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
   {
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
   }
   for(int j=0;j<n;j++)
   {
    cout<<arr[j]<<" ";
   }
}
void Palindrome(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            cout<<"Is palindrome : No ";
            return;
        }
        i++;
        j--;
    }
    cout<<"Is palindrome : Yes ";
}
int S_max(int arr[],int n)
{
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
        }
    }
    int smx=INT_MIN;
    for(int i=0;i<n;i++)
    {
            if(arr[i]!=mx && smx<arr[i])
            {
                smx=arr[i];
                if(arr[i]==mx)
                {
                    continue;
                }
            }
    }
    return smx;
}
int main()
{
    int n;
    cout<<"Enter the length of array :";
    cin>>n;
    int arr[n];
    cout<<endl<<endl;
    input(arr,n);
    cout<<endl;
    output(arr,n);
    cout<<endl;
    cout<<endl;
    cout<<"Maximum : "<<max(arr,n)<<endl;
    cout<<"Minimum : "<<min(arr,n)<<endl;
    cout<<"Sum : "<<sum(arr,n)<<endl;
    cout<<"Average : "<<average(arr,n)<<endl;
    cout<<"Even Numbers : "<<Ecount(arr,n)<<endl;
    cout<<"Odd Numbers : "<<Ocount(arr,n)<<endl;
    search(arr,n);
    cout<<endl;
    cout<<endl;
    cout<<"Reversed Array : ";
    R_array(arr,n);
    cout<<endl;
    Palindrome(arr,n);
    cout<<endl;
    cout<<"Second Largest : "<<S_max(arr,n)<<endl;
}
