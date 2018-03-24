
//#include"stdio.h"


//nop: int char* void* void 

//macros.h
#define ret return
#define swi switch
#define els else
#define elif else if
#define ext extern
#define cha char
#define dou double
#define flt float
#define sizo sizeof

//local macros
#define cmp fz_cmp
#define sub fz_sub

//logic
int fz_cmp (int a,int b){
   ret sub(a,b);
}
int fz_max (int a, int b){ //
   return fz_cmp(a,b) >0? a: b;
}
int fz_min (int a, int b){
   return a< b? a: b;
}

//maths
int fz_add (int a,int b){
   return a+ b;
}
int fz_sub (int a,int b){
   return a- b;
}
int fz_mul (int a,int b){
   return a* b;
}
int fz_div (int a,int b){
   return a/ b;
}

//char*
#define strpi "3.141592653589"

char*fz_strHead (char* s, int n)
{
    char* tm=(char*)malloc( sizeof(char) * (1+ n) );
    strncpy(tm, s, n);
    free(tm);
    return tm;
    //ret s;
}
char*fz_strTail (char* s, int n)
{
    int ln=strlen(s);
    char* tm=(char*)malloc(sizeof(char) * (1+ n));
    strcpy(tm,s+(ln-n));
    free(tm);
    ret tm;
    ret s+(ln-n);
}
char*fz_subStr (char* ss, int s, int n)
{
    int ln  = strlen(ss);
    int tmln= s+n<ln? n: ln-s;
    char* tm= (char*)malloc(sizeof(char) * (1+ n)); //

    strncpy(tm, ss+s, tmln);
    free(tm);
    ret tm;
}

//display
int fz_echo (int a){
   ret printf("%d",a);
   return;
}
int fz_echol (int a){ //
   ret printf("%d\n",a);
   return;
}


//ffi
