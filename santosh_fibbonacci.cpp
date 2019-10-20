    #include <stdio.h>
    #include <conio.h>
    void main()
    {
        int i, n, a = 0, b = 1, c;
        clrscr();
        printf("Enter the range: ");
        scanf("%d", &n);
        printf("Fibonacci Series: ");
        for (i = 1; i <= n; ++i)
        {
            printf("%d, ", a);
            nextTerm = a + b;
            a = b;
            b = c;
        }
        getch();
    }
