/**
 * @file fun.h
 * @author Ashok
 * @brief 
 * @version 0.1
 * @date 2022-02-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _FUN_H
#define _FUN_H
void addrecords();
void deleterecords();
void searchrecords();
void listrecords();
void payment();
void modifyrecords();
#endif 
struct subscriber
{
char smartcardnumber[20];
char name[50];
float amount;
}s;