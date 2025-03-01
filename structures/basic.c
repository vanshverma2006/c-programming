#include<stdio.h>
#include <string.h>


int main(){
    // pehle data type banayenge (like int ,float hote hai to humne khud eke data type bna diya jisme int and char value store hogi )
    struct studentInfo{// user defined data type 
         
        int age;
        int salary;

    };
// ab hamne variable bna diya st1 jisme info store karenge 
    struct studentInfo st1;
    st1.salary=100000000000000000;
    st1.age=18;

    
    // to print 
    printf("%d",st1.age );
 

    // another short way to declare 
    struct strawHats{
        int attack ;
        int health ;
    }luffy ,nami,zoro,robin;

    // now we can directly assign values 
    luffy.health = 10000;
    return 0;
}