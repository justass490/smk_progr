#include <iostream>
#include <iomanip>

using namespace std;
void reiksmiuLentele(double xp, double xg, double hx);
int main()
{
    double xp, xg, hx;
    cout << "Iveskite xpr, xg ir hx:" << endl;
    cout << "xpr: ";
    cin >> xp;
    cout<<endl;
    cout << "xg: ";
    cin >> xg;
    cout<<endl;
    cout << "hx: ";
    cin >> hx;
    cout<<endl;
    cout << "x pradinis: " << xp << endl;
    cout << "x galutinis: " << xg << endl;
    cout << "x zingsnis: " << hx << endl;

    reiksmiuLentele(xp, xg, hx);
    cout << "programa darba baige";
    return 0;
}
void reiksmiuLentele(double xp, double xg, double hx){
double x, y;
x=xp;
while(x<=xg){
    y=x*x;
    cout <<"| "<<setw(5)<<x;
    cout <<" | "<<setw(5)<<y<<" |";
    cout << endl;
    x = x + hx;
}
}
