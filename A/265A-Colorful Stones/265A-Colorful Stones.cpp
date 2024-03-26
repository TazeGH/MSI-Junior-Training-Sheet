#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
#define getName(var)  #var
void input_check(string);

int main(){

    string s, t;
    cin >> s;
    input_check(s);
    cin >> t;
    input_check(t);

    int si=1, ti, count;

    for(ti=0;ti<t.length();ti++){
        if(t[ti]==s[si-1]){
            si++;
        }
    }

    cout << si;
    return 0;
}




void input_check (string s){
    for(int i=0; i<s.length(); i++){
        if(s[i]!='R' && s[i]!='G' && s[i]!='B'){
            throw std::runtime_error("Input consists of R, G & B only. Please try again.");
        }
    }

    if(s.length()>50){
        cout << "invalid input";
        throw std::runtime_error("Input string should be within 50 characters. Please try again.");
    }
}
