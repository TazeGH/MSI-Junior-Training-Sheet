#include <iostream>
#include <string>
#include <conio.h>
#include <set>
#include <list>
#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;

    cin >> n;

    for(int i=0;i<n;i++){

        int p[i][i];

        p[0][0] = 0;
        p[i][i]=0;

        if(i>1){
        for(int j=1; j<i-1; j++){

            p[i][j]=p[i-1][j-1]+p[i-1][j];

        }
        }
    }
    int i,j;

    for(i=0, j=0; i<n, j<n; i++, j++){

        cout << p[i][j];

    }


    }
