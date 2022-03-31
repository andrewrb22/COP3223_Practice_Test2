#include<stdio.h>  
int main()  
{  
    float r = 2.5, *p = &r; 
    p = malloc (sizeof(float)); 
    *p = 3; 
     printf("%.2f", r); 
  
 
     return 0;  
} 

// 1. QUESTION
// int *x , y = 2 , z = 3; 
//      x = & z; 
 
//      printf("%d", *x); 
//      x = &y; 
 
//    return 0;  
//1.ANSWER = 3

//---------------------------

//2. QUESTION
// int x = 1, y = 2 , z = 3, *p; 
 
//      p = &y; 
//      printf("%d", (z+y-1)+ *p/4); 
 
//    return 0; 
//ANSWER = 4 - *P is 0 

//---------------------------

//3.QUESTION
// int *x  = malloc (3*sizeof(int)); 
//      int a = 1; 
//      *x = 2; 
//       x = &a; 
      
//      printf("%d", *x); 
//ANSWER = 1 

//-------------------------------------

//4.QUESTION
//#include<stdio.h>  
// int main()  
// {  
//      int *p, *q, x = 100, y = 200; 
      
//      q = &y; 
//      q = &x; 
//      p = &y; 
//      printf("printf(%d);", *q); 
 
//    return 0;  
// }
//ANSWER = printf(100)

//---------------------------------------

//5.QUESTION
// #include<stdio.h>  
// int main()  
// {  
    
//      int x = 1, y =1, z = 1; 
      
//      x = *&y – z; 
  
//      printf("%d", x); 
 
//    return 0;  
// } 
//ANSWER = 0

//---------------------------------------

//6.QUESTION
// #include<stdio.h>  
// int main()  
// {  
//     float r = 2.5, *p = &r; 
//     p = malloc (sizeof(float)); 
//     *p = 3; 
//      printf("%.2f", r); 
  
 
//      return 0;  
// } 
//ANSWER = 2.50

//-----------------------------------