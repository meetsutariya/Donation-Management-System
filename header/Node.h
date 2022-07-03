#pragma once
#include<string>
typedef unsigned long long ull;
using namespace std ;

class Node
{
    int age,index;   
    ull phone;
    string name;
 
    int Year, Income;
    float Percentage;

    Node *next;


    friend class Donor;           // use of the freind class
    friend class requirement;
};