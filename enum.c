#include <stdio.h>  

    enum days{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  

int main(){

    // printing the values of weekdays

    for(int i=Sunday;i<=Saturday;i++){

    printf("%d, ",i);

    }

    return 0;

}
