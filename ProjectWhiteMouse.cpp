#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calcRectangleArea(int a, int b); // done - example function

int calcTriangleCircumference(int a, int b, int c);
double calcRectangleDiagonal(int width, int height);
float average(float a, float b, float c, float d, float e);
int max(int x1, int x2, int x3, int x4);
float convertKmToMiles(float length);
float min (float y1, float y2, float y3, float y4);
float calcSquareArea(float a);
float calculateBMI(int wight, float height);
int calcRectangleCircumference(int a, int b);
int getRanfomNumberBetween10and50();
float calcSum(float x1, float x2, int y1, int y2);
float convertEURtoHUF(float amount);
int isTriangleRectangular(int a, int b, int c); // 0 - no, 1 - yes
int existsTriangle(int a, int b, int c); //0 - no, 1 - yes
float convertKmphToMps(float speed); // convert km/h -> m/s
float calcSquareCircumference(float width);
float calcVat(float amount); // vat = 20 %
int isNumberPalindrom(int number); // input 4-digits number, return 0-no, 1-yes
int isPrimeNumber(int number); // 0 - no, 1 - yes
int calcDigitSum(int number); // 1256 => return 14
float caclThirdPower(float number); // 5 => 125
double absolute(double number); // 6=> 6 , -8 =>8


int main(){
 // EMPTY, delete the code in main before you push the project on Github
 // add only your function under main
}

/*
* Calculate Area of rectangle
* Author: Roland Onofrej
* Date: 28-10-2017
* @param: a 
* @param: b
* @return: result
*/
int calcRectangleArea(int a, int b){
    int result=a*b;
    return result;
}


