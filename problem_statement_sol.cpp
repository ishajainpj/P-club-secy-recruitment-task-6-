#include<bits/stdc++.h>
using namespace std;
struct Set{
    int serial_number;
    int salary;
    float hours;
};
int number_of_days(int date, int month){
    int days=0;
switch(month)
{    
case 1: days = (31-date+1) + 28 + 31*3 + 30*2 + 14; break; 
case 2: days = (28-date+1) + 31*3 + 30*2 + 14; break;
case 3: days = (31-date+1) + 31*2 + 30*2 + 14; break;  
case 4: days = (30-date+1) + 31*2 + 30 + 14; break;
case 5: days = (31-date+1) + 31 + 30 + 14; break;
case 6: days = (30-date+1) + 31 + 14; break;    
case 7: days = (31-date+1) + 14; break;   
case 8: days = (14-date+1); break;
}
    return days;
}
int main(){
    int start_date;
    int start_month;
    cin>>start_date>>start_month;
    int N;
    cin>>N;
    struct Set pts[N];
    for(int i=0; i<N; i++){
        pts[i].serial_number=i+1;
        cin>>pts[i].salary;
        cin>>pts[i].hours;
    }
    int arr[N] = {0};
    for(int i=0; i<N; i++){
        arr[i] = (pts[i].hours)*number_of_days(start_date, start_month);
    }
    int min = 0;
    for(int i=1; i<N; i++){
        if(arr[i]>=120)
        {
            if(pts[min].salary>pts[i].salary)
            {
                min = i;
            }
            if(pts[min].salary==pts[i].salary&& pts[min].hours<pts[i].hours)
            {
                min = i;
            }
        }
    }
    if(min==0&&arr[0]<120)cout<<-1;
    else cout<<pts[min].serial_number;
}