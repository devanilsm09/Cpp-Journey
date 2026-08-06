/*
=================================================================
                PROBLEM 03 - STUDENT MARKS ANALYZER
=================================================================

File Name:
Problem_03.cpp

Objective:
Create a Student Marks Analyzer using Arrays and Functions.

---------------------------------------------------------------
Requirements
---------------------------------------------------------------

1. Ask the user to enter the number of students.

2. Create two arrays:
   - string name[]
   - int marks[]

3. Take input for every student:
   - Name
   - Marks

4. Create separate functions for:

   ✔ Input Students
   ✔ Display Students
   ✔ Find Highest Marks
   ✔ Find Lowest Marks
   ✔ Calculate Average Marks
   ✔ Count Passed Students (Marks >= 33)
   ✔ Count Failed Students (Marks < 33)
   ✔ Search Student by Name
   ✔ Print Grade of Every Student

---------------------------------------------------------------
Grade System
---------------------------------------------------------------

90 - 100  -> A

80 - 89   -> B

70 - 79   -> C

60 - 69   -> D

33 - 59   -> E

0  - 32   -> F

---------------------------------------------------------------
Rules
---------------------------------------------------------------

✔ Use Arrays

✔ Use Functions

✔ Do NOT use Global Variables

✔ Do NOT use Classes

✔ Use Loops

✔ Use Strings

✔ Use Conditions

---------------------------------------------------------------
Expected Output (Example)
---------------------------------------------------------------

Enter number of students : 5

Enter Name : Anil
Enter Marks : 95

Enter Name : Rahul
Enter Marks : 72

Enter Name : Aman
Enter Marks : 31

Enter Name : Priya
Enter Marks : 88

Enter Name : Riya
Enter Marks : 65


==============================
Student List
==============================

Anil   95
Rahul  72
Aman   31
Priya  88
Riya   65

Highest Marks : 95

Lowest Marks : 31

Average Marks : 70.2

Passed Students : 4

Failed Students : 1


Search Student :
Rahul

Found!

Marks : 72

Grade : C

---------------------------------------------------------------
Difficulty
---------------------------------------------------------------

⭐⭐⭐☆☆

Expected Time:
60-90 Minutes

GitHub File Name:

Problem_03.cpp

Commit Message:

Solved Problem 03 - Student Marks Analyzer

=================================================================
*/
// 1. Ask the user to enter the number of students.
#include<iostream>
#include<climits>
using namespace std;
void input(string name[], int marks [],int n)
{
   
   for(int i=0;i<n;i++)
   {  
   cout<<"Enter your name :";
   cin>>name[i];
   cout<<"Enter your marks :";
   cin>>marks[i];
   }
}
void display(string name[], int marks[] ,int n)
{
   for(int i=0;i<n;i++)
   {
      cout<<"Name - "<<name[i]<<endl;
      cout<<"Marks - "<<marks[i]<<endl;
   }
}
int Hmarks(int marks[],int n)
{
   int mx=INT_MIN;
   for(int i=0;i<n;i++)
   {
      if(mx<marks[i])
      {
         mx =marks[i];
      }
   }
   return mx;
}
int Lmarks(int marks[],int n)
{
   int min=INT_MAX;
   for(int i=n-1;i>=0;i--)
   {
      if(min>marks[i])
      {
         min =marks[i];
      }
   }
   return min;
}
float average(int marks[],int n)
{
   float sum =0;
   for(int i=0;i<n;i++)
   {
      sum+=marks[i];
   }
   float avg = sum/n;
   return avg;
}
int pss(int marks[],int n)
{
   int count=0;
   for(int i=0;i<n;i++)
   {
      if(marks[i]>=33)
      {
         count+=1;
      }
   }
   return count;
}
int fas(int marks[],int n)
{
   int count=0;
   for(int i=0;i<n;i++)
   {
      if(marks[i]<33)
      {
         count+=1;
      }
   }
   return count;
}
void search(string name[], int marks[], int n)
{
   string nm;
   cout<<"Enter your name : ";
   cin>>nm;
   for(int i=0;i<n;i++)
   {
      if(nm==name[i])
      {
         cout<<"Name - "<<name[i];
         cout<<"Marks - "<<marks[i];
      }
   }

}
void grade(string name[], int marks[], int n)
{
   for(int i=0;i<n;i++)
   {
      cout<<"Name - "<<name[i]<<endl;
      cout<<"Marks - "<<marks[i]<<endl;
      if(marks[i]>=90 and marks[i]<=100)
      {
         cout<<"Grade - A";
      }
      else if(marks[i]>=80 and marks[i]<=89)
      {
         cout<<"Grade - B";
      }
      else if(marks[i]>=70 and marks[i]<=79)
      {
         cout<<"Grade - C";
      }
      else if(marks[i]>=60 and marks[i]<=69)
      {
         cout<<"Grade - D";
      }
      else if(marks[i]>=33 and marks[i]<=59)
      {
         cout<<"Grade - E";
      }
      else if(marks[i]>=0 and marks[i]<=32)
      {
         cout<<"Grade - Fail !";
      }   
      cout<<endl;  
   }
}
int main()
{
   int n ;
   cout<<"Enter the number of students :";
   cin>>n;
   string name[n];
   int marks[n];
   cout<<endl;
   input(name,marks,n);
   display(name,marks,n);
   cout<<"Highest marks - "<<Hmarks(marks,n)<<endl<<endl;
   cout<<"Lowest marks - "<<Lmarks(marks,n)<<endl<<endl;
   cout<<"Average Marks - "<<average(marks,n)<<endl<<endl;
   cout<<"Passed Students - "<<pss(marks,n)<<endl<<endl;
   cout<<"Failed Students - "<<fas(marks,n)<<endl<<endl;
   search(name,marks,n);
   cout<<endl<<endl;
   grade(name,marks,n);
}
