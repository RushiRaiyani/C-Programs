#include<stdio.h>
/*print 1
        12
        123
        1234
        12345 */
void main() {
int i,j;
for(i=1;i<=5;i++){
    for(j=1;j<=i;j++){
        printf("%3d", j);
    }
    printf("\n");
}
}