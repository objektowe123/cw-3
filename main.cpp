#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
using namespace std;
struct probka
{
    double t;
    double x;
};




int main(int argc, char*argv[])
{
if(argc !=2)
   {
       return -1;
   }
cout<<argv[1]<<endl;
Dane dane =wczytaj(argv[1];);

  string linia;
ifstream plik("sygnal.csv");
while (getline(plik, linia))
{
cout << linia << endl;
}
plik.close();
    return 0;
}
