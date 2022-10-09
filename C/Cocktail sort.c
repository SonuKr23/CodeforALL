#include <stdio.h>

/* function to implement Cocktail sort */
void cocktail(int a[], int n) 
{
        int swap = 1;
        int beg = 0;
        int end = n - 1;
        int i, temp;
        while (swap)
        {
                swap = 0;

               
                for (i = beg; i < end; ++i)
                {
                        if (a[i] > a[i + 1]) 
                        {
                                temp = a[i];
                                a[i] = a[i + 1];
                                a[i + 1] = temp;
                                swap = 1;
                        }
                }

                if (!swap)
                        break;

                swap = 0;

                
                --end;

               
                for (int i = end - 1; i >= beg; --i) 
                {
                        if (a[i] > a[i + 1]) {
                                temp = a[i];
                                a[i] = a[i + 1];
                                a[i + 1] = temp;
                                swap = 1;
                        }
                }

                
                ++beg;
        }
}

void print(int a[], int n) //function to print array elements  
{
        int i;
        for (i = 0; i < n; i++) 
        {
                printf("%d ", a[i]);
        }
}

int main() 
{
        int a[] = {
                40,
                10,
                30,
                5,
                70,
                2,
                20
        };
        
        int n = sizeof(a) / sizeof(a[0]);
        printf("Before sorting array elements are - \n");
        print(a, n);
        cocktail(a, n);
        printf("\nAfter sorting array elements are - \n");
        print(a, n);
        return 0;
}
