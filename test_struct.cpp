//
// Created by cm on 2022/11/14.
//
#include <iostream>
#include <string>

using namespace std;
struct Student {
    string name;
    int age;
    int score ;
};
int main(){
    Student S1;


    S1.name="zhangsan";
    S1.age=18;
    S1.score=100;
    cout<<S1.name<<S1.age<<S1.score<< endl;
}