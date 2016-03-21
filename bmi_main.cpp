#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "bmi.h"
using namespace std;

int main() {

    Bmi bmi;
    int height, mass;

    ifstream inFile("file.in", ios::in);
    if(!inFile){
        cerr << "Failed opening #1" << endl;
        exit(1);
    }
    ofstream outFile("file.out", ios::out);
    if(!outFile){
        cerr << "Failed opening #2" << endl;
        exit(1);
    }

    inFile >> height >> mass;
    while(height!=0 && mass!=0){
        bmi.setHeight(height);
        bmi.setMass(mass);

        outFile << fixed << setprecision(2) << bmi.getBmi() << " ";
        outFile << bmi.getCategory(bmi.getBmi()) << endl;

        inFile >> height >> mass;
    }
	return 0;
}
