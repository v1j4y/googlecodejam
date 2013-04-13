#include<stdio.h>
#include<stdlib.h>

int recurse(char *string,int start,int inc,int cnt, int found,int* dots);

int main()
{
    int count=0,i=1;
    int fcount=0;
    int n;
    int j,k,l,m;
//  char *string=malloc(16);
    int c;
    char found;
    int *dots;
    dots=malloc(sizeof(int));

    scanf("%d\n",&n);
    do
    {
        i=1;
        *dots=0;
        j=0;
        fcount=0;
        char *string=malloc(16);

        while ((c=getchar())!=EOF && i!=17)
        {
            if(c!='\n')
            {
                string[i++]=(char)c;
            }
        }

        count++;

        if(recurse(string,1,1,1,0,dots)==1)
        {
//          printf("test");
            if(string[1]=='T')
            {
                found=string[2];
            }
            else
            {
                found=string[1];
            }
        }
        else if(recurse(string,1,1,4,0,dots)==1)
        {
//          printf("test");
            if(string[1]=='T')
            {
                found=string[2];
            }
            else
            {
                found=string[1];
            }
        }
        else if(recurse(string,1,1,5,0,dots)==1)
        {
//          printf("test");
            if(string[1]=='T')
            {
                found=string[2];
            }
            else
            {
                found=string[1];
            }
        }
        else if(recurse(string,2,2,4,0,dots)==1)
        {
//          printf("test");
            if(string[2]=='T')
            {
                found=string[6];
            }
            else
            {
                found=string[2];
            }
        }
        else if(recurse(string,3,3,4,0,dots)==1)
        {
//          printf("test");
            if(string[3]=='T')
            {
                found=string[7];
            }
            else
            {
                found=string[3];
            }
        }
        else if(recurse(string,4,4,4,0,dots)==1)
        {
//          printf("test");
            if(string[4]=='T')
            {
                found=string[8];
            }
            else
            {
                found=string[4];
            }
        }
        else if(recurse(string,5,5,1,0,dots)==1)
        {
//          printf("test");
            if(string[5]=='T')
            {
                found=string[6];
            }
            else
            {
                found=string[5];
            }
        }
        else if(recurse(string,9,9,1,0,dots)==1)
        {
//          printf("test");
            if(string[9]=='T')
            {
                found=string[10];
            }
            else
            {
                found=string[9];
            }
        }
        else if(recurse(string,13,13,1,0,dots)==1)
        {
//          printf("test");
            if(string[13]=='T')
            {
                found=string[14];
            }
            else
            {
                found=string[13];
            }
        }
        else if(recurse(string,4,4,3,0,dots)==1)
        {
//          printf("test");
            if(string[4]=='T')
            {
                found=string[7];
            }
            else
            {
                found=string[4];
            }
        }

            if(found=='X' || found=='O')
            {
                printf("Case #%d: %c won",count,found);
            }
            else if(*dots!=0)
            {
                printf("Case #%d: Game has not completed",count);
            }
            else
            {
                printf("Case #%d: Draw",count);
            }

//      }

        printf("\n");
        found='C';
    free(string);

    }while(count<n);

    return 0;
}

int recurse(char* string, int start, int indx, int inc, int cnt,int* dots)
{
    cnt=cnt+1;
    indx=indx+inc;
    if(cnt!=4)
    {
        if(string[start]=='T')
        {
            start=start+inc;
        }
        if(string[indx]=='.'||string[start]=='.')
        {
            *dots=*dots+1;
            return 0;
        }
        if(string[start]==string[indx]||string[indx]=='T' && string[indx]!='.' && string[start]!='.')
        {
            recurse(string,start,indx,inc,cnt,dots);
        }
        else if(string[indx]=='.'||string[start]=='.')
        {
            *dots=*dots+1;
            return 0;
        }
    }
    else
    {
        return 1;
    }
}
