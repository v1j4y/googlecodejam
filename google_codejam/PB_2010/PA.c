#include<stdio.h>

int main()
{
    int j,m,n,count=0;
    int p[2000],l,c;
    int result[2000][2];
    int found=0;

    scanf("%d",&n);
    do
    {
        scanf("%d",&c);
        scanf("%d",&l);
        for(j=1;j<=l;j++)
        {
            scanf("%d",&p[j]);
        }
        count++;

        for(j=1;j<=l;j++)
        {
            for(m=1;m<=j;m++)
            {
                if(p[j]+p[m]==c && j!=m)
                {
//                  printf("case #%d:%d %d",count,j,m);
                    result[count][1]=j;
                    result[count][2]=m;
                    found=1;
                    break;
                }
                if(found)break;
            }
            if(found)break;
        }
        found=0;
    }while(count<n);

    for(j=1;j<=count;j++)
    {
        printf("Case #%d: %d %d \n",j,result[j][2],result[j][1]);
    }
    return 0;
}
