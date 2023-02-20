// library
#include <stdio.h>

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

}

//with return value

//int main(){
//    printf("hi there, its just ice cream!\n");
//    return  0;
//}
