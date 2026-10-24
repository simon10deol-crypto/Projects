#include <stdio.h>

#define MAX_N 100
#define ROWS   10
#define COLS   10

void clear_input(void) { int c; while ((c = getchar()) != '\n' && c != EOF) {} }

int main(void) {
    int choice = -1;

    int n = 0;
    int a1d[MAX_N] = {0};

    int r = 0, c = 0;
    int m2d[ROWS][COLS] = {0};

    do {
        printf("\n=== Array Lab Menu ===\n");
        printf("1) Step 1: 1-D array basics\n");
        printf("2) Step 2: Use sizeof safely\n");
        printf("3) Step 3: 2-D array operations\n");
        printf("0) Quit\n");
        printf("Select: ");
        if (scanf("%d", &choice) != 1) { clear_input(); continue; }

        switch (choice) 
        {
            case 1: 
            {
                printf("How many elements (1... MAX_N)?: ");
                scanf("%d", &n);

                if (n < 0)
                {
                    printf("Out of range.");
                }

                else
                {
                    printf("Enter N integers: ");
                    for (int i = 0; i < n; i++)
                    {
                        scanf("%d", &a1d[i]);
                    }

                    printf("First Order: ");
                    for (int i = 0; i < n; i++)
                    {
                        printf("%d ", a1d[i]);
                    }

                    printf("\n");
                    printf("Reverse Order: ");

                    // i = n - 1, then i decreases if n = 5 right
                    // i = 5 - 1, while i is greater or = to 0, i decreases going from array 4, 3, 2, 1, 0.

                    for (int i = n - 1; i >= 0; i--)
                        {
                            printf("%d ", a1d[i]); // this prints the actual array value but in reverse.
                        }

                    int index, value;
                    printf("\nEnter index to edit (0... N-1), and value: ");
                    scanf("%d %d", &index, &value);

                    if (index < 0 && value < 0)
                    {
                        printf("Not Valid.");
                    }

                    else
                    {
                        a1d[index] = value;
                        for (int i = 0; i < n; i++)
                        {
                            printf("%d ", a1d[i]);
                        }
                    }

                }

                break;
            }
            case 2: 
            {
                int capacity = sizeof(a1d)/sizeof(a1d[0]);
                printf("Capacity is: %d", capacity);
                
                for (int i = 0; i <= capacity - 1; i++)
                {
                    a1d[i] = 0;
                }

                printf("\nNew updated array is: ");

                for (int i = 0; i < n; i++) // never <= as it will check for out of display for an array.
                {
                    printf("%d ", a1d[n]);
                }

                printf("\n");

                if (n > 0)
                {

                    int sum_of_loops = 0;
                    printf("\nHow many elements (1... MAX_N)?: ");
                    scanf("%d", &n);

                    printf("Re-enter N integers: ");
                    for (int i = 0; i < n; i++)
                    {
                        scanf(" %d", &a1d[i]);
                        sum_of_loops += a1d[i];
                    }

                    printf("Result of Sum in a Loop is: %d", sum_of_loops);
                    printf("\nBytes of: %d", sizeof(a1d[0]));
                }

                break;
            }
            case 3: {
                printf("\nEnter rows (1... ROWS): ");
                scanf("%d", &r);

                printf("Enter columns (1... COLS): ");
                scanf("%d", &c);

                if (r < 1 || r > ROWS || c < 1 || c > COLS)
                {
                    printf("Out of Range.\n");
                    break;
                }

                else
                {
                    printf("Enter r*c integers: %d\n", r * c);

                    for(int i = 0; i < r; i++)
                    {
                        for(int j = 0; j < c; j++)
                        {
                            scanf("%d", &m2d[i][j]);
                        }
                    }

                    printf("\n");

                    for(int i = 0; i < r; i++)
                    {
                        for (int j = 0; j < c; j++)
                        {
                            printf("| %d ", m2d[i][j]);
                        }
                        printf("|\n");
                    }

                    if (r == c)
                    {
                        for (int i = 0; i < r; i++)
                        {
                            for (int j = 0; j < c; j++)
                            {
                                if (i == j)
                                {
                                    m2d[i][j] = 1;
                                }

                                else
                                {
                                    m2d[i][j] = 0;
                                }
                            }
                        }

                        printf("\n");
                        for(int i = 0; i < r; i++)
                        {
                            for (int j = 0; j < c; j++)
                            {
                                printf("| %d ", m2d[i][j]);
                            }
                            printf("|\n");
                        }
                    }

                    else
                    {
                        for (int i = 0; i < r; i++)
                        {
                            int sums = 0;
                            for (int j = 0; j < c; j++)
                            {
                                sums += m2d[i][j];
                            }
                            printf("Sum of each row %d is: %d\n", (i + 1), sums);
                        }
                    }

                }

                break;
            }
            case 0: printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n"); break;
        }
    } while (choice != 0);

    return 0; // why does this return 0 have to be here again?
}
