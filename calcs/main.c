/*****************************************************************

    Project: lab1
    Author: Esther Obasi
    Student Number: 163269263
 
***************************************************************/

#include <stdio.h>
#define TEXT_SIZE 1024

/*float temperatureConverter(float celsius);
float areaOfCircle(float radius);
int averageOfThree(int num1, int num2, int num3);
int finalGrade(float percent1, float percent2, float percent3);
int finalGrade50(float grade1, float grade2, float grade3);*/

char* temperatureConverter(float celsius)
{

    float farenheit = 0.0;
    static char temps[TEXT_SIZE + 1] = {0};

    printf("\nPlease enter the temperature in Celsius: ");

    farenheit = (celsius * 9.0/5.0) + 32;

    snprintf(temps, sizeof(temps), "%.2f degrees Celsius is %.2f degrees Farenheit\n\n", celsius, farenheit);
    
    return temps;
}

char* areaOfCircle(float radius)
{
    const float PI = 3.14159;
    static char circle[TEXT_SIZE + 1] = {0};
    
    printf("\nPlease enter a radius of a circle: ");

    float diameter = 2.0 * radius;
    float circumference = PI * diameter;
    float area = PI * radius * radius;

    snprintf(circle, sizeof(circle), "The diameter of the circle is %.2f\nThe circumference of the circle is %.2f\nThe area of the circle is %.2f\n\n", diameter, circumference, area);

    return circle;
}

char* averageOfThree(int num1, int num2, int num3)
{
    static char averaged[TEXT_SIZE + 1] = {0};
    float average = (num1 + num2 + num3) / 3.0;

    snprintf(averaged, sizeof(averaged),"The average of %d, %d, and %d is %.2f\n\n", num1, num2, num3, average);

    return averaged;
    
}

char* finalGrade(float percent1, float percent2, float percent3)
{
    static char finaled[TEXT_SIZE + 1] = {0};
    const float TEST1 = 0.20, TEST2 = 0.30, TEST3 = 0.50;

    float final = (percent1 * TEST1) + (percent2 * TEST2) + (percent3 * TEST3);
    snprintf(finaled, sizeof(finaled), "The final grade is: %.2f %%\n\n", final);

    return finaled;
}

char* finalGrade50(float grade1, float grade2, float grade3)
{
    static char graded[TEXT_SIZE + 1] = {0};
    const float TEST1 = 0.20, TEST2 = 0.30, TEST3 = 0.50, RMARKS = 50.0, PERCENT = 100.0;
    
    float final = (((grade1 / RMARKS) * PERCENT) * TEST1) + (((grade2 / RMARKS) * PERCENT) * TEST2) + (((grade3 / RMARKS) * PERCENT) * TEST3);
    snprintf(graded, sizeof(graded), "The final grade is: %.2f %%\n\n", final);

    return graded;
}

int main(void){
    
    return 0;
}
