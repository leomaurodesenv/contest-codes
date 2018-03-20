#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a[5];
    int n, resp, error;
    char r[6] = {'A', 'B', 'C', 'D', 'E', '*'};
    // <= 127 preto
    // >  127 branco
    
    while(1){
        scanf("%d", &n);
        if(n == 0)
            break;
        
        for(int c=0; c<n; c++){
            for(int i=0; i<5; i++){
                scanf("%d", &a[i]);
            }

            resp = 5;
            error = 0;
            for(int i=0; i<5; i++){
                if(a[i] <= 127){
                    a[i] = 1;
                    
                    for(int j=0; j<i; j++){
                        if(resp == j)
                            error = 1;
                    }
                    resp = i;
                }
                else
                    a[i] = 0;
                //printf("A:%d \n", a[i]);
            }
            //printf("Error:%d \n", error);
            //printf("R:%d \n", resp);
            if(error == 1){
                
                resp = 5;
            }
            printf("%c\n", r[resp]);
        }
    }
    
    //system("pause");
    return 0;
}
