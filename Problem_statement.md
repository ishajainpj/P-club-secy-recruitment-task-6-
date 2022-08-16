Independence day is coming up soon and a cultural event has been planned. You are the organiser for the event. You need to hire a dance instructor for the same. You have N people to choose from. 

You have been given the Salary, number of hours the instructor can put in per day to complete the performance before the final event. It is known that at least 120 hours of practice is needed for an outstanding performance. 

Beginning today, you have to choose the best suited instructor with the least possible salary. If total number of practice hours is greater than 120 and two or more instructor has same salary then go for instructor putting in more practice hours. If none of the instructor could fulfil the criteria of minimum practise hours then print -1.
 
Input:
The first line of the input is today's date, the format is date and month separated by a space(dd mm).
The second line of the input is N, the number of instructors.
The next N lines contain the details of the instructor: Serial number of the instructor, salary, and number of hours the instructor can put in per day.

Output: 
The name of the best suited instructor.

Constraints:
The number of hours per day should not be more than 6 and the practise does not start before (01 01). 
Salary of the any instructor lies between 1 to 1000000.
0<N<100000

Example:
Input:
20 4
8
18170 23
19818 21
7703 7
6470 2
22579 18
19304 3
228 1
30795 1
Output:
4

