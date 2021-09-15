#pragma once

struct Person

{
    unsigned int age;
    cosnt char* name;
    float heigth;
    float weigth;
    Person (unsigned int age, const char* name, float heigth, float weigth)
    {
        this->age = age;
        this->name = name;
        this->heigth = heigth; 
        this->weigth = weigth;
    }
};