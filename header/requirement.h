#pragma once
#include "Node.h"
#include "Donor.h"
#include <string>
using namespace std;

class requirement : public Donor // Inheritated donor class
{
    float Percentage;
    int Income, Year;

public:
    void Insert_(string, ull, int, int, int, float); // Insert data into list
    int blood_Required();                            //Return the value of the blood required 
    bool criteria(string, ull, int, int *, int *, float *);  // Return true if student is eligible for scholarship 
    void display();   // Display money_requiters_list 
    void display_(int); // Display blood requiter list
    void blood_requiters_list(); 
    void money_requiters_list();
};