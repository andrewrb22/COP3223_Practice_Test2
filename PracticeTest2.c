void fun(int [], int ); 
void print(int [], int ); 
 
int main() 
{ 
   int n[10] = {5,-5, 10 , 8} ; 
   fun(n,4); 
   print(n,4); 
   return 0; 
} 
 
void fun( int *a , int limit) 
{ 
      int i; 
      for (i=limit-1; i>0; i--) 
           a[i-1] = a[i]; 
} 
 
void print( int array[], int size) 
{ 
    int i= 0; 
    while (i<size) 
    { 
        printf("%d  ", *array + i); 
        i++; 
    } 
 
} 