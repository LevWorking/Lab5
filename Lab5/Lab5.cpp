// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void cipher(string u_input) 
{
    
    vector<char> Cipher({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    vector<char> Result;

    for (int i = 0; i < u_input.length(); i++) {

        if (u_input[i] >= 64 && u_input[i] <= 90)
        {
            Result.push_back(Cipher[u_input[i] - 64]);
        }
        else if (u_input[i] >= 96 && u_input[i] < 122)
        {
            Result.push_back(tolower(Cipher[u_input[i] - 96]));
        }
        else { Result.push_back(u_input[i]); }
    }

    string ToPrint(Result.begin(), Result.end());
    cout << ToPrint << endl;
}



int main()
{
    string keep_going;
    string user_input;

    keep_going = "Y";

     do {
        
        cout << "Type the phrase to encrypt: ";
        getline(cin, user_input);
        cout << endl;
        
        cipher(user_input);

        cout << "Would you like to do this again? [Y/N]: ";
        cin >> keep_going;
        cout << endl;

        cin.ignore();
     } while (keep_going == "Y" || keep_going == "y");

}
