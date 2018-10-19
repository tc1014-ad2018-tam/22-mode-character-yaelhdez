//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MXJA

#include <stdio.h>
#include <string.h>

//---------------------------------------------------MODE FUNCTION------------------------------------------------------

char Mode(char string[]) {
    char mode = string[0]; //Mode Variable declaration and initialization as the string subscript 0 to make later a comparison
    int count = 0; //Count Variable declaration
    int count2; //Temporal Count Variable declaration

    //This loop analyse all the string
    for (int i = 0; i < strlen(string); i++) {
        count2 = 0; //Count 2 restart. We do this to compare the next value of the string with the others and find how many there are

        //This loop analyse all the string, starting at the second value of the array
        for (int j = i + 1; j < strlen(string); j++) {
            if (string[i] == string[j] && string[i] != ' ') { //Compare if the char in a position are equals.
                count2++; //count 2 increasing
            }
        }
        if (count2 > count) { //if count2 is greater than count
            count = count2; //then count will takes the value of count2
            mode = string[i]; //and declare the position of the string[i] as the mode.
        }
    }
    return mode; //Returning of the mode character
}

//---------------------------------------------------MAIN FUNCTION------------------------------------------------------
int main() {
    char string[100];//String Declaration

    printf("Write something ");
    fgets(string, sizeof(string), stdin); //String request

    printf("The mode is: %c", Mode(string)); //Output using the function Mode(): with string as a parameter

    return 0;
}