#pragma once
#include<iostream>

using namespace std;

////////////////// ÎÄÍÎÌÅĞÍÛÉ ÌÀÑÑÈÂ ///////////////////
void FillRand(int arr[], const int n);
void Sort(int arr[], const int n);
void Shift(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);
void Print(int arr[], const int n);

void FillRand(double arr[], const int n);
void Sort(double arr[], const int n);
void Shift(double arr[], const int n);
double Sum(double arr[], const int n);
double Avg(double arr[], const int n);
double minValueIn(double arr[], const int n);
double maxValueIn(double arr[], const int n);
void Print(double arr[], const int n);

void FillRand(float arr[], const int n);
void Sort(float arr[], const int n);
void Shift(float arr[], const int n);
float Sum(float arr[], const int n);
float Avg(float arr[], const int n);
float minValueIn(float arr[], const int n);
float maxValueIn(float arr[], const int n);
void Print(float arr[], const int n);

void FillRand(char arr[], const int n, int minrand = 48, int maxrand = 57);
void Sort(char arr[], const int n);
void Shift(char arr[], const int n);
int Sum(char arr[], const int n);
char minValueIn(char arr[], const int n);
char maxValueIn(char arr[], const int n);
void Print(char arr[], const int n);



/////////////////// ÄÂÓÌÅĞÍÛÉ ÌÀÑÑÈÂ ////////////////////
const int m = 5;
const int b = 5;

void FillRand(int arr[m][b], const int m, const int b);
int Sum(int arr[m][b], const int m, const int b);
float Avg(int arr[m][b], const int m, const int b);
int minValueIn(int arr[m][b], const int m, const int b);
int maxValueIn(int arr[m][b], const int m, const int b);
void Print(int arr[m][b], const int m, const int b);

void FillRand(float arr[m][b], const int m, const int b);
float Sum(float arr[m][b], const int m, const int b);
float Avg(float arr[m][b], const int m, const int b);
float minValueIn(float arr[m][b], const int m, const int b);
float maxValueIn(float arr[m][b], const int m, const int b);
void Print(float arr[m][b], const int m, const int b);

void FillRand(double arr[m][b], const int m, const int b);
double Sum(double arr[m][b], const int m, const int b);
double Avg(double arr[m][b], const int m, const int b);
double minValueIn(double arr[m][b], const int m, const int b);
double maxValueIn(double arr[m][b], const int m, const int b);
void Print(double arr[m][b], const int m, const int b);

void FillRand(char arr[m][b], const int m, const int b, int minrand = 48, int maxrand = 57);
void Print(char arr[m][b], const int m, const int b);
char minValueIn(char arr[m][b], const int m, const int b);
char maxValueIn(char arr[m][b], const int m, const int b);
