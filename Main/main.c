// library
#include <stdio.h>

//const
#define NOL 0
#define SATU 1
#define PHI 3.1415

//code program
int main(void) {
    printf("hi there, its just ice cream!\n");
//    int value
    int value = 10;
    int otherValue = 20;

//    float value
    float valueFloat = 0.555;
    float otherValueFloat = 3.2;

//    character
    char valueChar = 'A';
    char otherValueChar = 2;


//    create simple algorithm
    printf("the value is: %d\n", value * otherValue);
    value = value + 10;
    printf("now value is: %d\n", value);

    printf("float value algorithm is: %f\n", valueFloat);
    printf("float value algorithm is: %5.2f\n", otherValueFloat);

    printf("char value is: %c\n", valueChar);
    printf("char value is: %c\n", otherValueChar);

    printf("const value is: %d\n", NOL);
    printf("phi const value is: %6.2f\n", PHI);

//    Const is not allowed to assigned new value
//    PHI = 20;

}

//with return value

//int main(){
//    printf("hi there, its just ice cream!\n");
//    return  0;
//}
