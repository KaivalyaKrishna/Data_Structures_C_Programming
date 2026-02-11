#include <stdio.h>
int main (){
    int n, i;
    float avg_wt=0, avg_tat=0;
    
    printf ("Enter the total number of processes - ");
    scanf ("%d", &n);

    int at[n], bt[n], ft[n], wt[n], tat[n];

    for (i=0; i<n; i++){
        printf ("Arrival Time and Burst Time of P%d - ", i+1);
        scanf ("%d %d", &at[i], &bt[i]);
    }

    ft[0] = at[0] + bt[0];

    for (i=1; i<n; i++){
        ft[i] = ft[i-1] + bt[i];
    }

    for (i=0; i<n; i++){
        tat [i] = ft[i] - at[i];
        wt[i] = tat[i] - bt[i];
        avg_wt = avg_wt + wt[i];
        avg_tat =  avg_tat + tat[i];
    }

    for (i=0; i<n; i++){
        printf ("\n P%d - \nAT: %d \nBT: %d \nFT: %d \nTAT: %d \nWT: %d\n", i+1, at[i], bt[i], ft[i], tat[i], wt[i]);
    }

    printf ("Average Waiting Time - %.4f \n", avg_wt/n);
    printf ("Average Turnaround Time - %.4f \n", avg_tat/n);
    printf ("Total Turnaround Time - %d \n", tat[n-1]);

    return 0;
}
