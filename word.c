
#include<stdio.h>
#include<stdlib.h>
void valentine(int count,int num);
void single(int rem);
void evens(int num);
void tens(int num);
int main()
{
   long int n=1123456;
    int i=0;
    int t=0;
    int tt;
    long int num=n;
    int *arr;
    int rem;
    int count,tc;
    while(n)
    {
        n=n/10;
        count++;
    }
    tc=count;
    n=num;
    arr=(int*)malloc(sizeof(int)*count);
    *(arr+tc)=-1;
    tc=tc-1;
    while(n)
    {
        rem=n%10;
        *(arr+tc)=rem;
        n=n/10;
        tc--;
    }
    tc=count;
   
    for(i=0;*(arr+i)!=-1;i++)
    {
        if(count>6)
        {
            if(count%2==0)
            {
                tt=*(arr+i)*10+ *(arr+(i+1));
                if(tt>19)
                {
                    tens(tt);
                }
                else if(tt<=19)
                {
                    evens(tt);
                }
                count=count-2;
            }
            else
            {
                single(*(arr+i));
                count--;
            }
            printf(" Crores ");
        }
        if(count>4)
        {
            if(count%2==0)
            {
                tt=*(arr+i)*10+ *(arr+(i+1));
                if(tt>19)
                {
                    tens(tt);
                }
                else if(tt<=19)
                {
                    evens(tt);
                }
                count=count-2;
            }
            else
            {
                single(*(arr+i));
                count--;
            }
            printf(" lakhs ");
            
        }
        if(count>2)
        {
            if(count%2==0)
            {
                tt=*(arr+i)*10+ *(arr+(i+1));
                if(tt>19)
                {
                    tens(tt);
                }
                else if(tt<=19)
                {
                    evens(tt);
                }
                count=count-2;
            }
            else
            {
                single(*(arr+i));
                count--;
            }
            printf(" thousand and ");
        }
        if(count<=2)
        {
            if(count==2 || count==0)
            {
                valentine(count,*(arr+i));
            }
            if(count==1)
            {
                tt=*(arr+1)*10+ *(arr+0);
                if(tt>19)
                {
                    valentine(count, *(arr+i));
                }
                else
                {
                    evens(tt);
                }
            }
            count--;
        }
    }
}
void valentine(int count,int num)
{
    switch (count) {
        case 2:
            single(num);
            printf("Hundred ");
            break;
        case 1:
            tens(num);
            break;
        case 0:
            single(num);
            break;
        default:
            break;
    }
}
void single(int rem)
{
    switch (rem)
    {
        case 1:
            printf("one ");
            
            break;
        case 2:
            printf("two ");
            break;
        case 3:
            printf("three ");
            break;
        case 4:
            printf("four ");
            break;
        case 5:
            printf("five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("seven ");
            break;
        case 8:
            printf("eight ");
            break;
        case 9:
            printf("nine ");
            break;
           
        default:
            break;
    }
    
}
void tens(int num)
{
    
    switch (num) {
        case 2:
            printf("twenty ");
            break;
        case 3:
            printf("thirty ");
            break;
        case 4:
            printf("fourty ");
            break;
        case 5:
            printf("fifty ");
            break;
        case 6:
            printf("sixty ");
            break;
        case 7:
            printf("seventy ");
            break;
        case 8:
            printf("eighty ");
            break;
        case 9:
            printf("ninty ");
            break;
        default:
            break;
    }
}
void evens(int num)
{
    switch (num) {
        case 11:
            printf("eleven ");
            break;
        case 12:
            printf("twelve ");
            break;
        case 13:
            printf("thirty ");
            break;
        case 14:
            printf("Fourty ");
            break;
        case 15:
            printf("fifteen ");
            break;
        case 16:
            printf("sixteen ");
            
            break;
        case 17:
            printf("seventeen ");
            break;
        case 18:
            printf("eighteen ");
            break;
        case 19:
            printf("nineteen ");
            break;
        default:
            break;
    }
    
}
