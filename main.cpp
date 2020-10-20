#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;
int Atsitiktinis(int a, int b){
return rand()%b;
}
int main(){
    int n;
    //ifstream cin("duomenys.txt");
    ofstream cout("rezultatai.txt");
    cin >> n;
    for(int i=0; i<n; i++){
        cout<< Atsitiktinis(1, 10) << ", ";
    }
    return 0;
}
