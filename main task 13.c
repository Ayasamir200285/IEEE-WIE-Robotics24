#include <stdio.h>
#include <string.h>
#include <ctype.h>

//(1)
int fun(int x,int y){
    if(x%y==0){
        printf("%d is divisible %d",x,y);

        return 1;
    }else{
        printf("%d is not divisible %d",x,y);

        return 0;

    }



}

//(2)
 float calculate_average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float avg = (float)sum / size;
    return avg;
}

//(6)
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if (is_palindrome(arr[i])) {
            printf("is a palindrome\n");
        } else {
            printf("is not a palindrome\n");
        }
    }
}

int is_palindrome(int num) {
    int reversed_num = 0, remainder, original_num = num;

    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    return original_num == reversed_num;
}

//(7)
int is_magic_square(int square[][10], int size) {
    int sum = 0, sum_diag1 = 0, sum_diag2 = 0;

    // Calculate the sum of the first row
    for (int j = 0; j < size; j++) {
        sum += square[0][j];
    }

    // Calculate the sum of the diagonals
    for (int i = 0; i < size; i++) {
        sum_diag1 += square[i][i];
        sum_diag2 += square[i][size - 1 - i];
    }

    // Check if all rows, columns, and diagonals have the same sum
    if (sum_diag1 != sum || sum_diag2 != sum) {
        return 0;
    }

    for (int i = 1; i < size; i++) {
        int row_sum = 0, col_sum = 0;
        for (int j = 0; j < size; j++) {
            row_sum += square[i][j];
            col_sum += square[j][i];
        }
        if (row_sum != sum || col_sum != sum) {
            return 0;
        }
    }

    return 1;
}

int main()
{
    //(1)

   /* int x,y;
    printf("\n enter first number : ");
    scanf("%d",&x);


    printf("\n enter second number : ");
    scanf("%d",&y);

    int result=fun(x,y);
    printf("\n the result is : %d",result);



{
*/

//(2)
    /*int arr[] = {5, 8, 4, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    float avg = calculate_average(arr, size);
    printf("The average of the array is: %.1f\n", avg);*/

    //(3)

     /*int arr[5];
    int i = 0;
    while (i < 5) {
        scanf("%d", &arr[i]);
        i++;
    }
    for (int j = 0; j < 5; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");*/

    //(4)
    /*int arr[3][3];
    int i = 0, j = 0;
    while (i < 3) {
        j = 0;
        while (j < 3) {
            scanf("%d", &arr[i][j]);
            j++;
        }
        i++;
    }
    for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {
            printf("%d ", arr[k][l]);
        }
        printf("\n");
    }*/

    //(5)
    /*char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (isalpha(ch)) {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);*/

    //(6)
    /*int size;
    printf("Enter the size of the 1D array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    print_array(arr, size);*/

    //(7)
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    int square[10][10];
    printf("Enter the elements of the square:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &square[i][j]);
        }
    }

    if (is_magic_square(square, size)) {
        printf("The square is a magic square.\n");
    } else {
        printf("The square is not a magic square.\n");
    }





    return 0;

}
