#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  return 0;
}



int main() {
  int x = 5, y = 6, z = 50;
  printf("%d", x + y + z);
  return 0;
}

#include <stdio.h>

int main() {
  int x, y, z;
  x = y = z = 50;
  printf("%d", x + y + z);
  return 0;
}
#include <stdio.h>

int main() {
  // Student data
  int studentID = 15;
  int studentAge = 23;
  float studentFee = 75.25;
  char studentGrade = 'B';

  // Print variables
  printf("Student id: %d\n", studentID);
  printf("Student age: %d\n", studentAge);
  printf("Student fee: %f\n", studentFee);
  printf("Student grade: %c", studentGrade);

  return 0;
}

#include <stdio.h>

int main() {
  // Create variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}
#include <stdio.h>

int main() {
  int myNum = 5;  // integer
  
  printf("%d\n", myNum);
  printf("%i\n", myNum);
  return 0;
}

#include <stdio.h>

int main() {
  float myFloatNum = 3.5;

  printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
  printf("%.1f\n", myFloatNum); // Only show 1 digit
  printf("%.2f\n", myFloatNum); // Only show 2 digits
  printf("%.4f", myFloatNum);   // Only show 4 digits
  return 0;
}

#include <stdio.h>

int main() {
    int score = 85;
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}

#include <stdio.h>

int main() {
  const int myNum = 15;
  myNum = 10;
  
  printf("%d", myNum);
  return 0;
}

#include <stdio.h>

int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;

  printf("%d\n", minutesPerHour);
  printf("%f\n", PI);
  return 0;
}

include <stdio.h>

int main() {
  int myNum = 15;
  printf("%d", myNum);
  return 0;
}
#include <stdio.h>

int main() {
  // Create variables
  int myNum = 15;              // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  char myLetter = 'D';         // Character
  
  // Print variables
  printf("%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  return 0;
}

#include <stdio.h>

int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;

  printf("%d\n", minutesPerHour);
  printf("%f\n", PI);
  return 0;
}

#include <stdio.h>

int main() {
  if (20 > 18) {
    printf("20 is greater than 18");
  }  
  return 0;
}
#include <stdio.h>

int main() {
  int x = 20;
  int y = 18;
  if (x > y) {
    printf("x is greater than y");
  }  
  return 0;
}
#include <stdio.h>

int main() {
  int time = 20;
  if (time < 18) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}
#include <stdio.h>

int main() {
  int time = 22;
  if (time < 10) {
    printf("Good morning.");
  } else if (time < 20) {
    printf("Good day.");
  } else {
    printf("Good evening.");
  }
  return 0;
}
#include <stdio.h>

int main() {
  int myNum = 10;
  
  if (myNum > 0) {
    printf("The value is a positive number.");
  } else if (myNum < 0) {
    printf("The value is a negative number.");
  } else {
    printf("The value is 0.");
  }
  
  return 0;
}

#include <stdio.h>

int main() {
  int num1, num2;
  
  printf("Enter two numbers: ");
  scanf("%d%d", &num1, &num2);

  if (num1 > num2) {
    printf("%d is greater than %d\n", num1, num2);
  } else if (num2 > num1) {
    printf("%d is greater than %d\n", num2, num1);
  } else {
    printf("%d and %d are equal\n", num1, num2);
  }

  return 0;
}
#include <stdio.h>

int main() {
    printf("\n");
    printf("      *       \n");
    printf("    *****     \n");
    printf("  *****   \n");
    printf("  *****   \n");
    printf("    *****     \n");
    printf("      *       \n");
    printf("        *         \n");
    printf("      Renata      \n");
    printf("\n");
    return 0;
}
#include <stdio.h>

int main() {
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  return 0;
}

#include <stdio.h>

int main() {
  int x = 10;
  x += 5;
  printf("%d", x);
  return 0;
}
Renata Montanhana, [12.02.23 01:02]
#include <stdio.h>

int main() {
    // Variable declaration
    int x = 10;
    float y = 3.14;
    char c = 'a';
    
    // Printing values to console
    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("c = %c\n", c);
    
    // Conditional statement
    if (x < 20) {
        printf("x is less than 20.\n");
    } else {
        printf("x is greater than or equal to 20.\n");
    }
    
    return 0;
}

Renata Montanhana, [12.02.23 01:02]
#include <stdio.h>

int main() {
    // Declaration statement
    int x = 10, y = 20;

    // Expression statement
    printf("x + y = %d\n", x + y);

    // Control flow statement - if statement
    if (x < y) {
        printf("x is less than y.\n");
    } else if (x > y) {
        printf("x is greater than y.\n");
    } else {
        printf("x is equal to y.\n");
    }

    // Iteration statement - while loop
    int i = 0;
    while (i < 5) {
        printf("i = %d\n", i);
        i++;
    }s

    // Jump statement - break
    for (int j = 0; j < 10; j++) {
        if (j == 5) {
            break;
        }
        printf("j = %d\n", j);
    }

    // Jump statement - continue
    for (int k = 0; k < 5; k++) {
        if (k == 2) {
            continue;
        }
        printf("k = %d\n", k);
    }

    return 0;
}