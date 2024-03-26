#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <conio.h>
#include <set>
typedef long long ll;
using namespace std;


int main(){


        string s;

        cin >> s;

        char c[(s.length()+1)/2];

        for(int i=0; i<s.length(); i++){

            if(s[i]!='+'){
                c[(i+1)/2]=s[i];
            }
        }

        sort(c, c+sizeof(c));


        for(int i=0; i<sizeof(c); i++){
            cout << c[i];
            if(i<sizeof(c)-1) cout << '+';
        }



}
