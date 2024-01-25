//  In one state, single residents are subject to the following income
//  tax:
//  Income            Amount of tax
//  Not over $750     1% of income
//  $750-$2,250       $7.50   plus 2% of amount over $750
//  $2,250-$3,750     $37.50  plus 3% of amount over $2,250
//  $3,750-$5,250     $82.50  plus 4% of amount over $3,750
//  $5,250-$7,000     $142.50 plus 5% of amount over $5,250
//  Over $7,000       $230.00 plus 6% of amount over $7,000
 
//  Write a program that asks the user to enter the amount of taxable
//  income, then displays the tax due.

#include <stdio.h>

int main(void) {
    float income, tax_price;
     

    printf("\nEnter the amount of your taxable income: ");
    scanf("%f", &income);

    if (income < 750) 
        printf("\nYour tax due is $%.2f\n", tax_price = (income * 0.01));
    else if (income <= 2250)
       printf("\nYour tax due is $%.2f\n", tax_price = 7.50 + (income * 0.02));
    else if (income <= 3750)
        printf("\nYour tax due is $%.2f\n", tax_price = 37.50 + (income * 0.02));
    else if (income <= 5250)      
        printf("\nYour tax due is $%.2f\n", tax_price = 82.50 + (income * 0.04));
    else if (income <= 7000)
        printf("\nYour tax due is $%.2f\n", tax_price = 142.50 + (income * 0.05));
    else
        printf("\nYour tax due is $%.2f\n", tax_price = 230.00 + (income * 0.06));
    
    return 0;
        
}