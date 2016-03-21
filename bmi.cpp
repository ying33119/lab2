#include <string>
#include "bmi.h"
void Bmi::setHeight(int height){
    h_value = height;
}
void Bmi::setMass(int mass){
    m_value = mass;
}
double Bmi::getBmi(){
    return m_value/(h_value*h_value*0.0001);
}
string Bmi::getCategory(double bmi){
    string category;

    if(bmi < 15)
        category = "Very severely underweight";
    else if(bmi >= 15 && bmi < 16)
        category = "Severely underweight";
    else if(bmi >= 16 && bmi < 18.5)
        category = "Underweight";
    else if(bmi >= 18.5 && bmi < 25)
        category = "Normal";
    else if(bmi >= 25 && bmi < 30)
        category = "Overweight";
    else if(bmi >= 30 && bmi < 35)
        category = "Obese Class I (Moderately obese)";
    else if(bmi >= 35 && bmi < 40)
        category = "Obese Class II (Severely obese)";
    else
        category = "Obese Class III (Very severely obese)";

    return category;
}
