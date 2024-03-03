#pragma once
#include <string>
#include <iostream>
using namespace std;



class Date
{
private:
    class Triad 
    {
    private:
        int date[3];

    public:
        Triad();
        Triad(int day, int month, int year);
        void IncrementFields();
        int getDay() const;
        int getMonth() const;
        int getYear() const;
        void setDay(int day);
        void setMonth(int month);
        void setYear(int year);
        void Init(int day, int month, int year);
        void Display() const;
        void Read();
        string toString() const;
    };

    Triad date; 

public:
    Date();
    Date(int day, int month, int year);
    void IncrementField();
    void IncrementDate(int p);
    void Init(int day, int month, int year);
    void Display() const;
    void Read();
    string toString() const;
};