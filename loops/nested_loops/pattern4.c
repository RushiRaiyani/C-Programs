#include<stdio.h>
/*print 1
        22
        333
        4444
        55555 */
        void main() {
            int i,j,n=1;
            for(i=1;i<=5;i++){
                for(j=1;j<=i;j++){
                    printf("%3d", n);
                }
                n++;
                printf("\n");
            }
        }