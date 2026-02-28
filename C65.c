mock test


/*#include<stdio.h>
int main()
{
    int internal,attendance;
    scanf("%d %d",&internal,&attendance);
    if(internal>=75 && attendance>=40){
        printf("Eligible");
    }
    else{
        printf("Not eligible");
    }
}
===================================Traffic Signal Control=======================

#include<stdio.h>
int main()
{
    char traffic;
    scanf("%c",&traffic);
    switch (traffic){
        case 'R':{
            printf("Stop");
            break;
        }
        case 'Y':{
            printf("Ready");
            break;
        }
        case 'G':{
            printf("Go");
            break;
        }
        default:{
            printf("Invalid variable");
        }
        return 0;
    }
}

====================================== Loan Approval System=============

#include<stdio.h>
int main()
{
    int salary,credit,age;
    scanf("%d %d %d",&salary,&credit,&age);
    if(salary>=25000 && credit>=700 && 21<=age<=60){
        printf("Approved");
    }
    else{
        printf("Rejected");
    }
    return 0;
}

================================= Electricity Usage Category ===================

#include<stdio.h>
int main()
{
    int electricity;
    scanf("%d",&electricity);
    if(electricity<=100){
        printf("LOW");
    }
    else if(101<electricity && electricity<300){
        printf("MEDIUM");
    }
    
    else if(electricity>300){
        printf("HIGH");
    }
    else{
        printf("Invalid variable");
    }
    return 0;
}

================== Bus Ticket Discount  ===============


#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    if(age<12){
        printf("Child discount");
    }
    else if(age>=60){
        printf("Senior discount");
    }
    else{
        printf("No discount");
    }
    return 0;
}

=========================== Employee Bonus Calculation ========================

#include<stdio.h>
int main()
{
    int salary,experience,bonus;
    scanf("%d",&experience);
    scanf("%d",&salary);
    if(experience>=10){
        bonus=salary*0.20;
        printf("Bonus:%d\n",bonus);
    }
    else if(experience>5 && experience<9){
        bonus=salary*0.10;
        printf("Bonus:%d\n",bonus);
    }
    else if(experience<5){
        printf("No bonus");
    }
    return 0;
    
}

                                 (OR)

#include<stdio.h>
int main()
{
    int salary,experience,bonus;
    scanf("%d",&experience);
    scanf("%d",&salary);
    if(experience>=10){
        bonus=salary*20/100;
        printf("Bonus:%d\n",bonus);
    }
    else if(experience>5 && experience<9){
        bonus=salary*10/100;
        printf("Bonus:%d\n",bonus);
    }
    else if(experience<5){
        printf("No bonus");
    }
    return 0;
    
}




============================ College Grade Classification ================




#include<stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);
    if(grade>=90){
        printf("O");
    }
    else if(grade>80 && grade<89){               // I/p: 85.5; O/p:A; from the input value the compiler round off it value and giving it's grade as "A". 
        printf("A");
    }
    else if(grade>70 && grade<79){
        printf("B");
    }
    else if(grade>60 && grade<69){
        printf("C");
    }
    else if(grade<60){
        printf("Fail");
    }
    else{
        printf("Invalid value");
    }
    return 0;
}

                                          (OR)

#include<stdio.h>
int main()
{
    int grade;
    scanf("%d",&grade);
    if(grade>=90){
        printf("O");
    }
    else if(grade>80 && grade<89){           // i/p: 45; O/p: Invalid value; 
        printf("A");
    }
    else if(grade>70 && grade<79){
        printf("B");
    }
    else if(grade>60 && grade<69){
        printf("C");
    }
    else{
        printf("Invalid value");
    }
    return 0;
}




========================================== Weather Warning System ===============


#include<stdio.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    if(temp>=45){
        printf("Heat alert");
    }
    else if(temp>35 && temp<44){
        printf("Hot");
    }
    else if(temp>20 && temp<34){
        printf("Normal");
    }
    else{
        printf("Cold");
    }
    return 0;
}




#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}



======================= Character Type Check (Very Tricky but Easy) ============


#include<stdio.h>
int main()
{
   
    char character;
    scanf("%s",&character);
    switch(character){
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':{
            printf("Digit");
            break;
        }
        default:{
            printf("Not a digit");
        
        }
        return 0;
    }
}
   
  */ 
                                           (OR)
   

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Not a digit");
    }
    return 0;
}


===================================== Movie Ticket Discount ==================

#include<stdio.h>
int main()
{
    int age,discount;
    scanf("%d",&age);
    if(18<age || age>60){
        //discount=age*0.20;
        printf("Discounted prize:160");
    }
    else{
        printf("Discounted prize:200");
    }
    return 0;
}


================================= Electricity Bill Calculation =============================
#include<stdio.h>
int main()
{
    int units,total_bill;
    scanf("%d",&units);
    if(units<=100){
        total_bill=units*1.5;
        printf("%d",total_bill);
    }
    else if(101<=units && units<200){
        total_bill=units*2.5;
        printf("%d",total_bill);
    }
    else{
       total_bill=units*3.5;
       printf("%d",total_bill); 
    }
    return 0;
}




======================================================  Student Attendance Eligibility =====================================





#include<stdio.h>
int main()
{
    int attendance,total,attended;
    scanf("%d %d",&attended,&total);
    if(attendance>=75){
        attendance=(attended/total)*100;
        printf("Eligible");
    }
    else{
        printf("Not eligible");
    }
}


==========================================   Online Shopping Discount ===================================



#include<stdio.h>
int main()
{
    int amount,payable;
    scanf("%d",&amount);
    if(amount>=5000 && amount<10000){
        payable=amount-(amount*0.1);
        printf("Payable:%d\n",payable);
    }
    else if(amount>=10000){
        payable=amount-(amount*0.2);
        printf("Payable:%d\n",payable);
    }
    else{
        payable=amount;
        printf("Payable:%d\n""No discount",payable);
    }
    return 0;
}

=====================================================================================================================
80720 14432 - Boomika akka




C Operator Precedence (Highest to Lowest)
Postfix Operators: () (function call), [] (array), . (member access), -> (pointer member access), ++ -- (postfix) - Left to right.
Unary Operators: ++ -- (prefix), + - (unary), !, ~, (type) (cast), * (dereference), & (address-of), sizeof - Right to left.
Multiplicative: * (multiplication), / (division), % (modulus) - Left to right.
Additive: + (addition), - (subtraction) - Left to right.
Shift: << (left shift), >> (right shift) - Left to right.
Relational: < <=, >, >= (comparison) - Left to right.
Equality: == (equal), != (not equal) - Left to right.
Bitwise AND: & - Left to right.
Bitwise XOR: ^ - Left to right.
Bitwise OR: | - Left to right.
Logical AND: && - Left to right.
Logical OR: || - Left to right.
Conditional: ?: (ternary) - Right to left.
Assignment: =, +=, -=, *=, /=, %=, &=, ^=, |=, <<=, >>= - Right to left.
Comma: , - Left to right. 
Key Rules and Behaviors
Parentheses (): The highest precedence, used to force a specific order of evaluation.
Associativity: When operators have the same precedence, associativity (left-to-right or right-to-left) determines the evaluation order.
Example: In x = 7 + 3 * 2, the * (multiplicative) takes precedence over + (additive), resulting in 
.
Example: In x = (7 + 3) * 2, parentheses force addition first, resulting in 
. 




















