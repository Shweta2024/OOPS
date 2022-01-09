/*
Function Overloading

-When there are multiple functions with same name but different parameters. 
-Functions can be overloaded by change in number of arguments or/and change in type of arguments. */

#include<bits/stdc++.h>
using namespace std;

class Function_overloading_example{ //creation of a class
    public: //access modifier (since it is public,so its datamembers can be accessed by any other classes or functions outside this class)

    Function_overloading_example() //constructor (it has the same name as that of the class name)
    {
        cout<<"Example to show how can a function be overloadded."<<endl;
    }

    int sum(int num1,int num2)
    {
        return (num1+num2);
    }

    int sum(int num1,int num2,int num3)
    {
        return (num1+num2+num3);
    }

};


//main
int main()
{
    Function_overloading_example obj1; //creating object
    cout<<obj1.sum(5,10)<<endl; //it will invoke the sum function with two parameters
    cout<<obj1.sum(5,10,15)<<endl;//it will invoke the sum function with three parameters
return 0;
}