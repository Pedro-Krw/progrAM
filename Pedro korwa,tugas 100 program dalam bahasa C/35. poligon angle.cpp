#include <stdio.h>
#include <string.h>
#define ANSWER_SIZE 4
// poligon angel

void check_if_regular_polygon_exists(int angle, char answers[][ANSWER_SIZE], int answer_no){
    /* sudut = {1 - 2/n}*180, lalu jika n = 360/{180-n} adalah sebuah  integer, maka poligon itu ada*/
	if(360%(180 - angle) == 0){
        strcpy(answers[answer_no], "YES");
    }
    else{
        strcpy(answers[answer_no], "NO");
    }
}

int main(){
    int no_of_test_cases, i, angle;
    char answers[180][ANSWER_SIZE];

    scanf("%d",&no_of_test_cases);

    for(i = 0; i < no_of_test_cases; i++){
        scanf("%d",&angle);
        check_if_regular_polygon_exists(angle, answers, i);
    }

    for(i = 0; i < no_of_test_cases; i++){
        printf("%s\n",answers[i]);
    }
    return 0;
    
}



