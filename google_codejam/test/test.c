#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int j,m,n,count=0,i=0,l;

    int result[2000][2];
    int found=0;
    unsigned int len_max=1;
    unsigned int current_size=0;

    char *string = malloc(len_max);
    char *string2= malloc(len_max);

    scanf("%d\n",&n);

    do
    {

    if(string != NULL)
    {
        int c = EOF;
        while (( c =getchar()) != '\n' && c!=EOF)
        {
            string[i++]=(char)c;
            if(i==current_size)
            {
                current_size = i+len_max;
                string = realloc(string, current_size);
            }
        }
    }

        count++;
//      printf("%d\n",i);
        m=i;
        printf("Case #%d: ",count);
        unsigned int k=0;
//      string2 = realloc(string2,i);
        do
        {
            if(string[m]==' ' || m==-1)
            {
                for(l=m+1;l<=i;l++)
                {
//                  string2[l]=string[i-l+1];
                    printf("%c",string[l]);
                }
                i=m;
//              printf("%d",m);
                if(m!=-1)printf(" ");
//              k=0;
            }
            k++;
            m--;
        }while(m>=-1);
        printf("\n");

//      printf("%s\n",string2);
        free(string);
    }while(count<n);

//  for(j=1;j<=count;j++)
//  {
//      printf("Case #%d: %d %d \n",j,result[j][2],result[j][1]);
//  }
    return 0;
}
