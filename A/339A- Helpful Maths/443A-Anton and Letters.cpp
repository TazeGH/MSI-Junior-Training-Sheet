#include <iostream>
#include <string>
#include <conio.h>
#include <set>
using namespace std;


int main(){


        string s;

        getline(cin >> ws, s); //Really important trick! //To input a string with blankspaces

        set<char> s1; //Declaring a character set.

        for(int i=0;i<s.length();i++){

            if(s[i]!='{' && s[i]!=',' && s[i]!=' ' && s[i]!='}'){

                s1.insert(s[i]);

            }

        }

        cout << s1.size();


}
