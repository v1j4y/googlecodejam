#include<stdio.h>
#include<stdlib.h>

int mysqrt(int num,int prev);

int main()
{
    int count=0,i=1;
    int fcount=0;
    int n;
    int j,k,l,m;
    int c;
    int A,B;
    int ii,difi;
    int sqi,difsq;
    char found;

    scanf("%d\n",&n);
    do
    {
        i=1;
        j=0;
        fcount=120;
        char *string=malloc(16);
        scanf("%d %d",&A,&B);

        for(i=A;i<=B;i++)
        {
//      printf("%d\n",i);
//      while ((c=getchar())!=EOF && c!='\n')
//      {
//          if(c!='\n')
//          {
//              string[j++]=(char)c;
//          }
//      }

            ii=i/10;
            difi=i-(ii*10);
            if(difi==2||difi==4||difi==5||difi==6||difi==9)
            {
                break;
            }
            else
            {
                sqi=mysqrt(i,1);
                difsq=i-(sqi*sqi);
                printf("%d",difsq);
            }

        }

        count++;
        printf("%s",string);

    free(string);

    }while(count<n);

    return 0;
}

int mysqrt(int num,int prev)
{
    int next=(prev+(num/prev))/2;
    if((next-prev)*(next-prev)<=0)
    {
        return next;
    }
    else
    {
        return mysqrt(num,next);
    }
}
