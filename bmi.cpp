#include <iostream>
#include <iomanip>
using namespace std;
//Class with all methods
class Methods{
public:
    //Method that returns final BMI
    float bmiCalculate(float height, float weight){
        float score = (weight) / (height * height);
        return score;
    }
    //Method that converts centimeters to meters
    float centimetersToMeters(int centimeters){
        float score = centimeters;
        score = (float) centimeters / 100;
        return score;
    }
    //Method that shows score and writes a short comment
    void runCalculator(){
        float height;
        float weight;
        float bmi;
        cout << "Welcome in BMI calculator\nType your height (in centimeters): ";
        cin >> height;
        height = centimetersToMeters(height);
        cout << "Type your weight(in kilograms): ";
        cin >> weight;
        bmi = bmiCalculate(height, weight);
        cout << setprecision(1) << fixed;
        cout << "Your BMI is " << bmi << endl;
        if (bmi < (18,5)){
            cout << "Underweight";
        }else if (bmi >= (18,5) && bmi < 25){
            cout << "Healthy";
        }else if (bmi >= 25 && bmi < 30){
            cout << "Overweight";
        }else{
            cout << "Obese";
        }
    }
};

int main(){
    Methods calculate;
    calculate.runCalculator();
    return 0;
}