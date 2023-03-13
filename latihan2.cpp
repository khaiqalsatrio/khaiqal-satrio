#include <iostream>
using namespace std ;

double rerata(double a,double b){
    return (a+b)/2;
}

string status(double c){
    if (c >= 60)
        return "Lulus";
    else
        return "gagal" ;
}

    int main(){
    double nilM,nilB;
    //double rata;
    //stringst;
    cout << "masukan nilai matematika = ";
    cin >> nilM;
    cout << "masukan nilai bahasa indonesia = ";
    cin >> nilB;
    //rata = rerata(nilM,nilB);
    //st = status(rata);
    //cout << "status kelulusan = " << st;
    //cout << "status kelulusan = " << status(rata);
    cout << "status kelulusan = " << status(rerata(nilM,nilB));
    return 0;
    }

