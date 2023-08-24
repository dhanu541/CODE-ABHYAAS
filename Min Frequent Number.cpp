#include <stdio.h>

int main()
{
    int i, j, Count, n;
    printf("\n Enter the number of elements:");
    scanf("%d", &n);
    int a[n], Freq[n];
    printf("\n Enter the elements of an Array  :  ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        Freq[i] = -1;
    }
    for (i = 0; i < n; i++)
    {
        Count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                Count++;
                Freq[j] = 0;
            }
        }
        if (Freq[i] != 0)
        {
            Freq[i] = Count;
        }
    }

    int minFreq = n + 1;
    for (i = 0; i < n; i++)
    {
        if (Freq[i] != 0 && Freq[i] < minFreq)
        {
            minFreq = Freq[i];
        }
    }

    printf("\nElements with minimum frequency (%d): \n", minFreq);
    int found = 0; 
    for (i = 0; i < n; i++)
    {
        if (Freq[i] == minFreq)
        {
            found = 1;
            printf("%d ", a[i]);
        }
    }
    
    if (!found)
    {
        printf("No elements with minimum frequency found.");
    }

    return 0;
}

