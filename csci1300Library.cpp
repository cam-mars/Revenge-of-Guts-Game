#include<iostream>
#include"csci1300Library.h"
using namespace std;
    bool ValidateDouble (string input){
    int i, numDecimals = 0;
    char deci = '.';
    for (i = 0; input.length() > i; i++){
        if (input [i] == '.'){
            numDecimals++;
        }
    }
    if (numDecimals > 1){
        return false;
    }
    for (i = 0; input.length() > i; i++){
        if (isdigit(input[i]) || ((input[0] == '-' || input[0] == '+') && (input.length() > 1))
        || input[i] == '.'){
        }
        else{
            return false;
        }
    }
    return true;
}   
    bool ValidateInt(string input){
    for (int i = 0; input.length() > i; i++){
        if (isdigit(input[i]) || ((input[0] == '-') && (input.length() > 1))){
        }
        else{
            return false;
        }
    }
    return true;
}
    bool SearchString(string sequence, string fragment){
    for(int i = 0; i < sequence.length(); i++){
        if(sequence.substr(i, fragment.length()) == fragment){
            return true;
        }
    }
    return false;
    }
    void MostPopularWord(string words[], int arraySize){
        //this is to store how many times word[i] occurs, and to declare the highest frequency and occurance
        //if all words are different
        int wordCount[arraySize], mostFreq = 1;
        string mostFreqWord;

        for(int i = 0; i < arraySize; i++){
            //initialize wordCount before we start counting words
            wordCount[i] = 0;
            //now we're going to compare every word to the word at i
            for(int j = 0; j < arraySize; j++){
                //if the word at the second runthrough equals the first word that we're testing, the wordcount
                //at the first position goes up
                if(words[j] == words[i]){
                    wordCount[i]++;
                }
                //now to change the frequency of the word and what the word is
                if(wordCount[i] >= mostFreq){
                    mostFreq = wordCount[i];
                    mostFreqWord = words[i];
                } 
            }
        }
        cout << "The most popular word : " << mostFreqWord << endl;
        cout << "Frequency : " << mostFreq << endl;
        cout << "Found at pos : " << endl;
        for(int k = 0; k < arraySize; k++){
            if (words[k] == mostFreqWord){
                cout << k << endl;
            }
        }
    }
    int split(string inputString, char separator, string array[], int arrSize){
        int placeHolder = 0, numSplits = 0;
        //if string empty, return 0
        if (inputString.length() == 0){
            return 0;
        }
        for(int i = 0, j = 0; i < inputString.length(); i++){
            /*we want i to be the character of the input we're looking at, and j to be what value of the
            array that we're examining. We are putting them in the same loop because we don't want j 
            to keep increasing if i hasn't; we don't want our array value to go up when another
            instance of separator hasn't appeared*/
            if(inputString[i] == separator){
                //array[j] is the substring from the last time there was a separator until now
                array[j] = inputString.substr(placeHolder, i - placeHolder);
                /*this makes the placeholder go up 1, so next time we start counting after the previous
                separator*/
                placeHolder = i + 1;
                /*now we can allow j to go up, because at the next instance of a sep., we don't
                want our previous array[j] value to be replaced*/
                j++;
                //one sep. = one split increase
                numSplits++;
                }
            if (i == inputString.length() - 1){
                //the +1 accounts for the weird length difference because we increased the value of the
                //placeholder
                array[j] = inputString.substr(placeHolder, i - placeHolder + 1);
                numSplits++;
                }
            }
            if(numSplits > arrSize){
                return -1;
            }
        return numSplits;
    }
    char CharacterMenu(string menu_text, string valid_choices, string errorMessage){
        string input;
        bool valid = false;

        cout << menu_text << endl;
        getline(cin, input);

        while (!valid) {
            //if it's not valid
            if(input.length() == 1){
                for (int i = 0; i < (int)valid_choices.length(); i++) {
                    if(input[0] == valid_choices[i]) {
                        valid = true;
                        break;
                    }
                }
            }
            if(!valid){
                cout << errorMessage << endl;
                cout << menu_text << endl;
                getline(cin, input);
            }
        }
        return input[0];
    }