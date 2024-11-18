// #include <bits/stdc++.h>
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void countVowelAndConst( string str)
{
   int vowel = 0, cons = 0;
    for (char ch : str)
    {
        if(isalpha(ch)){

        
        char lowChar = tolower(ch);
        if (lowChar == 'a' || lowChar == 'e'|| lowChar == 'i' || lowChar == 'o' || lowChar == 'u')
        {
            vowel++;
        }
        else
        {
            cons++;
        }
    }
    }
    cout << vowel << "and" << cons << endl;
}

int main()
{
    int vowel = 0, cons = 0;
    string str = "hello world";
    countVowelAndConst(str);
    // cout << "Vowel: " << vowel << "and const: " << cons << endl;
    // return 0;
    
}