#include <stdio.h>
float heightConvert(float cm) {
    float a = cm / 100;
    return a;
}
void BMI(float w, float h, char f) {
    float Bmi;
    if(f == 'c') {  /* height is in centimetre, need to convert in metre */
        float x = heightConvert(h);
        Bmi = w / (x * x);
    }
    else if(f == 'm') {  /* height is already in metre, no need to convert */
        Bmi = w / (h * h);
    }
    printf("Your BMI is %f",Bmi);
}
int main() {
    float weight;
    printf("Enter your weight in kg : ");
    scanf("%f",&weight);
    char format;
    printf("Tell whether you are entering height in 'metre' or centimetre\n");
    printf("Enter 'm' for metre and 'c' for centimetre : ");
    scanf(" %c",&format);
    float height;
    printf("Enter your height : ");
    scanf("%f",&height);
    BMI(weight,height,format);
    return 0;
}
