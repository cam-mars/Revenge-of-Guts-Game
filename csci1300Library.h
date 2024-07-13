#include<iostream>
using namespace std;
#ifndef CSCI1300LIBRARY_H
#define CSCI1300LIBRARY_H
    bool ValidateDouble (string input);
    bool ValidateInt(string input);
    bool SearchString(string sequence, string fragment);
    void MostPopularWord(string words[], int arraySize);
    int split(string inputString, char separator, string array[], int arrSize);
    char CharacterMenu(string menu_text, string valid_choices, string errorMessage);
#endif