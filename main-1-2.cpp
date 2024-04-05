#include "Person.h"
#include <string>
#include<iostream>
extern PersonList createPersonList(int n);
int main(){
    PersonList arr= createPersonList(5);
     cout<<"The name and age is:  "<<endl;
    for (int i=0;i<5;i++){
        cout<<arr.people[i].name << " "<< arr.people[i].age<<endl;
    }







    return 0;
}