#include <iostream>
#include <string>
#include <conio.h>
#include <set>
#include <vector>
using namespace std;


int main(){

    int n;

    cin >> n;

    int a[n];

    int p[n];
    int m[n];
    int pe[n];



    int pc=0, mc=0, pec=0;

    for(int i=0; i<n; i++){

        cin >> a[i];

        if(a[i]==1){
            p[i]=a[i];
            pc++;
        }
        if(a[i]==2){
            m[i]=a[i];
            mc++;
        }
        if(a[i]==3){
            pe[i]=a[i];
            pec++;
        }

        }

        int b;

        b = min(pc,mc);
        b = min(b, pec);

        cout << pc << ' ' << mc << ' ' << pec << endl;

        cout << b << endl;

        cout << p[1];


       for(int i=0;i<2;i++){

            cout << p[i] << ' ';
            cout << m[i] << ' ';
            cout << pe[i] << ' ';
            cout << "\n";


        }


}
