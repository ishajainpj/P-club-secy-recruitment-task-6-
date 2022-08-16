#include <bits/stdc++.h>     
using namespace std;
int random_start_date() 
{   
    return (rand() % 30)+1; 
}
int random_start_month() 
{   
    return (rand() % 7)+1; 
}
int random_N() 
{   
    return (rand() % 10)+1; 
}
int random_salary() 
{   
    return (rand() % 100000)+1; 
}
int random_hours() 
{   
    return (rand() % 6)+1; 
}
  
int main () 
{
srand(time(NULL)); 
int start_date,start_month,N,i;
start_date=random_start_date();
start_month=random_start_month();
N=random_N();
printf("%d %d\n%d\n",start_date,start_month,N);
int s[N],h[N];
for(i=0;i<N;i++)
{
    s[i]=random_salary();
    h[i]=random_hours();
    printf("%d %d\n",s[i],h[i]);
}
return 0;
}