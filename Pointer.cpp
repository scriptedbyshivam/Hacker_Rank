#include <stdio.h>
#include<stdlib.h>
void update(int *a,int *b) {
	
    int sum = *a + *b;
    int diff = abs(*a - *b);
    // here used abs for mod value 
    // abs used only by stdlib.h header file
    
    *a = sum;
    *b = diff;
    // Complete this function    
}

int main() {
    int a, b;
    
    int *pa = &a, *pb = &b;
    // yaha pointer *pa and *pb ek pointer variable hai jo address of a and b ki value store kar rahe hai
    scanf("%d %d", &a, &b);
    // yaha a and b ki value le rahe hai
    update(pa, pb);
    // yeh update ek function hai jo pass by value se use ho raha hai...
    // yeh pa and pb variable hai jo *a and *b se value lenge aur return karayenge
    
    printf("%d\n%d", a, b);

    return 0;
}
