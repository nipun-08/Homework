Q1
#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number from 1 to 7: ");
    scanf("%d", &number);
    
    switch(number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Oops! That's not a valid number. Please enter a number from 1 to 7.\n");
            break;
    }
    
    return 0;
}
Q2
#include <stdio.h>

int main() {
    int x, y, z;
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    printf("Enter the value of z: ");
    scanf("%d", &z);
    
    int sum1 = x + y;
    int sum2 = y + z;
    
    if (sum1 == sum2) {
        printf("The sum of x and y is equal to the sum of y and z.\n");
    } else {
        printf("The sum of x and y is not equal to the sum of y and z.\n");
    }
    
    return 0;
}
Q3
#include <stdio.h>

int main() {
    int number;
    int factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Sorry, factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        
        printf("The factorial of %d is: %d\n", number, factorial);
    }
    
    return 0;
}
Q4
#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Enter the value of c: ");
    scanf("%d", &c);
    
    int sum = a + b + c;
    
    if (sum >= 100 && sum <= 200) {
        printf("The sum is in the range of 100 and 200.\n");
    } else {
        printf("The sum is not in the range of 100 and 200.\n");
    }
    
    return 0;
}
Q5
#include <stdio.h>

int main() {
    int num_100_notes = 5;
    int num_50_notes = 3;
    int num_20_notes = 20;
    
    int total_amount = (num_100_notes * 100) + (num_50_notes * 50) + (num_20_notes * 20);
    
    printf("The total amount is Rs. %d\n", total_amount);
    
    return 0;
}
Q6
#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    originalNumber = number;
    
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }
    
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}
Q7
#include <stdio.h>

int main() {
    int n, firstTerm = 0, secondTerm = 1, nextTerm;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Sequence: ");
    
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    
    return 0;
}
!
Q8
#include <stdio.h>

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
Q9
#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;
    
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("The Euclidean distance between the two points is: %.2lf\n", distance);
    
    return 0;
}
Q10
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    int length = strlen(str);
    
    for (i = 0, j = length - 1; i < length / 2; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}
Q11
#include <stdio.h>

int main() {
    int startReading, endReading, units;
    float rate, billAmount;
    
    printf("Enter the starting meter reading: ");
    scanf("%d", &startReading);
    
    printf("Enter the ending meter reading: ");
    scanf("%d", &endReading);
    
    units = endReading - startReading;
    
    if (units > 500) {
        rate = 4.50;
    } else if (units >= 200 && units <= 500) {
        rate = 3.50;
    } else if (units >= 100 && units < 200) {
        rate = 2.50;
    } else {
        rate = 1.50;
    }
    
    billAmount = units * rate;
    
    printf("The energy bill amount is: %.2f Rs.\n", billAmount);
    
    return 0;
}
Q12
#include <stdio.h>

int main() {
    int age;
    float weight;
    
    printf("Enter the age of the blood donor: ");
    scanf("%d", &age);
    
    printf("Enter the weight of the blood donor: ");
    scanf("%f", &weight);
    
    if (age > 18 && age <= 55 && weight > 45) {
        printf("The blood donor is eligible for donating blood.\n");
    } else {
        printf("The blood donor is not eligible for donating blood.\n");
    }
    
    return 0;
}
Q13
#include <stdio.h>

int main() {
    int num1, num2, result;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    result = (num1 > num2) ? (num1 * num2) : (num1 / num2);
    
    printf("The result is: %d\n", result);
    
    return 0;
}
Q14
#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18) {
        printf("You are eligible to vote!\n");
    } else {
        printf("You are not eligible to vote yet.\n");
    }
    
    return 0;
}
Q15
#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The character '%c' is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("The character '%c' is a consonant.\n", ch);
            } else {
                printf("The character '%c' is a symbol.\n", ch);
            }
    }
    
    return 0;
}
Q16
#include <stdio.h>

int main() {
    char gender;
    
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    
    switch (gender) {
        case 'M':
        case 'm':
            printf("You are Male.\n");
            break;
        case 'F':
        case 'f':
            printf("You are Female.\n");
            break;
        default:
            printf("Invalid gender.\n");
    }
    
    return 0;
}
Q17
#include <stdio.h>

int main() {
    float principleAmount, rateOfInterest, interestAmount;
    int tenure;
    
    printf("Enter the loan amount: ");
    scanf("%f", &principleAmount);
    
    printf("Enter the tenure (in years): ");
    scanf("%d", &tenure);
    
    if (principleAmount >= 10000) {
        rateOfInterest = 0.2;
    } else if (principleAmount >= 8000 && principleAmount <= 9999) {
        rateOfInterest = 0.18;
    } else {
        rateOfInterest = 0.16;
    }
    
    interestAmount = principleAmount * rateOfInterest * tenure;
    
    printf("Loan amount: Rs. %.2f\n", principleAmount);
    printf("Tenure: %d years\n", tenure);
    printf("Rate of interest: %.2f%%\n", rateOfInterest * 100);
    printf("Interest amount: Rs. %.2f\n", interestAmount);
    
    return 0;
}
Q18
#include <stdio.h>

int main() {
    int n, num, positiveCount = 0, negativeCount = 0;
    
    printf("Hey there! Please enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }
    
    printf("The number of positive numbers among the %d numbers is: %d\n", n, positiveCount);
    printf("The number of negative numbers among the %d numbers is: %d\n", n, negativeCount);
    
    return 0;
}
Q19
#include <stdio.h>

int main() {
    float x, y, result;
    int choice;
    
    printf("Hey there! Let's perform some calculations!\n");
    
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Enter the value of y: ");
    scanf("%f", &y);
    
    printf("Choose the operation you want to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            result = x + y;
            printf("The sum of %.2f and %.2f is: %.2f\n", x, y, result);
            break;
        case 2:
            result = x - y;
            printf("The difference between %.2f and %.2f is: %.2f\n", x, y, result);
            break;
        case 3:
            result = x * y;
            printf("The product of %.2f and %.2f is: %.2f\n", x, y, result);
            break;
        case 4:
            if (y != 0) {
                result = x / y;
                printf("The division of %.2f by %.2f is: %.2f\n", x, y, result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
        default:
            printf("Invalid choice! Please choose a number between 1 and 4.\n");
            break;
    }
    
    return 0;
}
Q20
#include <stdio.h>

int main() {
    int x, reversed = 0, remainder;
    
    printf("Hey there! Let's reverse a number!\n");
    
    printf("Enter a number greater than three digits: ");
    scanf("%d", &x);
    
    while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x = x / 10;
    }
    
    printf("The reverse of the given number is: %d\n", reversed);
    
    return 0;
}