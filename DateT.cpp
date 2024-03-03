#include "DateT.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Date::Triad::Triad() {
    date[0] = 1;
    date[1] = 1;
    date[2] = 1;
}

Date::Triad::Triad(int day, int month, int year) {
    date[0] = day;
    date[1] = month;
    date[2] = year;
}

void Date::Triad::IncrementFields() {
    date[0]++;

    if (date[0] > 31) {
        date[0] = 1;
        date[1]++;

        if (date[1] > 12) {
            date[1] = 1;
            date[2]++;
        }
    }
}

int Date::Triad::getDay() const {
    return date[0];
}

int Date::Triad::getMonth() const {
    return date[1];
}

int Date::Triad::getYear() const {
    return date[2];
}

void Date::Triad::setDay(int day) {
    date[0] = day;
}

void Date::Triad::setMonth(int month) {
    date[1] = month;
}

void Date::Triad::setYear(int year) {
    date[2] = year;
}

void Date::Triad::Init(int day, int month, int year) {
    setDay(day);
    setMonth(month);
    setYear(year);
}

void Date::Triad::Display() const {
    cout << endl;
    cout << "Date: " << date[0] << "/" << date[1] << "/" << date[2] << endl;
}

void Date::Triad::Read() {
    int day, month, year;
    cout << "Input date: ";
    cin >> day >> month >> year;

    Init(day, month, year);
}

string Date::Triad::toString() const {
    stringstream sout;
    sout << getDay() << "/" << getMonth() << "/" << getYear();
    return sout.str();
}


Date::Date() {}

Date::Date(int day, int month, int year) : date(day, month, year) {}

void Date::IncrementField() {
    date.IncrementFields();
}

void Date::IncrementDate(int p) {
    for (int i = 0; i < p; ++i) {
        date.IncrementFields();
    }
}

void Date::Init(int day, int month, int year) {
    date.Init(day, month, year);
}

void Date::Display() const {
    date.Display();
}

void Date::Read() {
    date.Read();
}

string Date::toString() const {
    return date.toString();
}