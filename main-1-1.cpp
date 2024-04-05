#include "Person.h"
#include<iostream>
#include<string>
using namespace std;
extern Person* createPersonArray(int n);
int main(){
    
    Person* arr=  createPersonArray(5);
    cout<<"The name and age is:  "<<endl;
    for (int i=0;i<5;i++){
        cout<<arr[i].name << " "<< arr[i].age<<endl;
    }





    return 0;
}