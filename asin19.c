#include <stdio.h>
int main()
{
    int nom[10];
    int l, m, k, n=10;
    for (i = 0; i < n; ++i){

		printf("\tEnter the no. of gifts taken by Student s%d--:", l+1);
        scanf("%d", &nom[l]);
}
    
  for (l = 0; l < n; ++l)
      {
        for (m = l + 1; m < n; ++m)
        {
            if (nom[l] < nom[m])
            {
                a = nom[l];
                nom[l] = nom[m];
                nom[m] = k;
            }
        }
    }
   
    printf("\t\nBilling Order by students\n");

        for (l= 0; l < n; ++l)
        {
        printf("\n");
        printf("\t%d%d.)Student having %d items\n",l+1,nom[l]);
        }    

  }
