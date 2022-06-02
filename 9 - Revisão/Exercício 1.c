# include <stdio.h>
int main()
{
   int t, i, M[3][4];
    for (t=0; t<3; ++t)
     for (i=0; i<4; ++i)
        M[t][i] = (t*4)+i+1;

    for (t=0; t<3; ++t)
    {
      for (i=0; i<4; ++i)
         printf("%3d ", M[t][i]);
     printf("\n");
     }
  }
