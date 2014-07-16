 #include <stdio.h> 
 #include <stdlib.h> 
    int main(void) { 
        int i=0;
        int b =0;
        
        
       for (i=1;i<1000;i++) {
           
           if (i%3==0 || i%5==0)
               b=b+i;
               printf("b=%d\n",b);
           
           
       }
    return 0;   
    }
