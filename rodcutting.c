#include<stdio.h>

int Rodcutting(int *,int);
int max(int,int);

int r[5]={0,0,0,0,0};
int main()
{

int p[5]={0,1,5,8,9};

int optsol=Rodcutting(p,4);
    
printf("the optimal solution is :%d\n",optsol);

return 0;
}
// function to determine the rodcutting problem.
int Rodcutting(int* p,int length)
{
        if(r[length]>0)
        {

                return r[length];
        }

        if(length==0)
        {
            return 0;

        }
        int q=-1;
        for(int i=1;i<=length;i++)
        {
            //printf("%d ----> %d\n",i,length-1);
               q =  max(q,p[i]+Rodcutting(p,length-i));

                r[length]=q;

        }

    return q;

}

//finding the maximum of two numbers
int max(int a,int b)
{
if(a>=b)
return a;
else
return b;
}
