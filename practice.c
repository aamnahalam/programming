#include<stdio.h>
int main() {
    int day, gift;
    for (day = 1; day <= 12; day++) {
        printf("On the ");
    switch (day) {
            case 1:  printf("first"); break;
            case 2:  printf("second"); break;
            case 3:  printf("third"); break;
            case 4:  printf("fourth"); break;
            case 5:  printf("fifth"); break;
            case 6:  printf("sixth"); break;
            case 7:  printf("seventh"); break;
            case 8:  printf("eighth"); break;
            case 9:  printf("ninth"); break;
            case 10: printf("tenth"); break;
            case 11: printf("eleventh"); break;
            case 12: printf("twelfth"); break;
        }
        printf(" day of Christmas my true love sent to me:\n");
        for (gift = day; gift >= 1; gift--) {
            switch (gift) {
                case 12: printf("Twelve drummers drumming,\n"); break;
                case 11: printf("Eleven pipers piping,\n"); break;
                case 10: printf("Ten lords a-leaping,\n"); break;
                case 9:  printf("Nine ladies dancing,\n"); break;
                case 8:  printf("Eight maids a-milking,\n"); break;
                case 7:  printf("Seven swans a-swimming,\n"); break;
                case 6:  printf("Six geese a-laying,\n"); break;
                case 5:  printf("Five golden rings,\n"); break;
                case 4:  printf("Four calling birds,\n"); break;
                case 3:  printf("Three French hens,\n"); break;
                case 2:  printf("Two turtle doves,\n"); break;
                case 1:
                    if (day == 1)
                        printf("A partridge in a pear tree.\n");
                    else
                        printf("And a partridge in a pear tree.\n");
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}

