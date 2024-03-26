#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, i, j, x, y;

    cin >> n;

    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){

            cin >> a[i][j];

            if(a[i][j] = 1){

                x = i;
                y = j;
            }
        }
    }

    cout << abs(i-2)+abs(j-2);

}
