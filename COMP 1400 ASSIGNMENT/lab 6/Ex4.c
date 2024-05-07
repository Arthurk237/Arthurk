#include <stdio.h>

int main() {
    int dayoftheweek = 0; 
    
    for (int day = 1; day <= 31; day++) {
        
        switch (dayoftheweek) {
            case 0:
                printf("Day %d: Monday\n", day);
                break;
            case 1:
                printf("Day %d: Tuesday\n", day);
                break;
            case 2:
                printf("Day %d: Wednesday\n", day);
                break;
            case 3:
                printf("Day %d: Thursday\n", day);
                break;
            case 4:
                printf("Day %d: Friday\n", day);
                break;
            case 5:
                printf("Day %d: Saturday\n", day);
                break;
            case 6:
                printf("Day %d: Sunday\n", day);
                break;
        }
        
        dayoftheweek = (dayoftheweek + 1) % 7;
    }
    
    return 0;
}