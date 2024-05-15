#include<stdio.h>
/*print 5
        54
        543
        5432
        54321 */
void main() {
int i,j;
for(i=5;i>=1;i--){
    for(j=5;j>=i;j--){
        printf("%3d", j);
    }
    printf("\n");
}
}