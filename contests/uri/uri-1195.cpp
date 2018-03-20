#include <stdio.h>
#include <stdlib.h>

typedef struct no_arv{
     int info;
     struct no_arv *esq, *dir;   
} no;


no *insert(no *R, int val);
void print_pos(no *R);
void print_pre(no *R);
void print_in(no *R);

int main(int argc, char *argv[]){
   
   int c, n, val;
   int i, j;
   
   scanf("%d", &c);
   for(i=0; i<c; i++){
        no *raiz = NULL;
        scanf("%d", &n);
        for(j=0; j<n; j++){
             scanf("%d", &val);
             raiz = insert(raiz, val);
        }
        printf("Case %d:\n", (i+1));
        printf("Pre.:");
        print_pre(raiz);
        printf("\n");
        printf("In..:");
        print_in(raiz);
        printf("\n");
        printf("Post:");
        print_pos(raiz);
        printf("\n\n");
   }
   
   //system("PAUSE>null");	
   return 0;
}

// -----------------------------------------------

no *insert(no *R, int val){
   if(R == NULL){
        R = (no*)malloc(sizeof(no));
        R->info = val;
        R->esq = NULL;
        R->dir = R->esq;
        return R;
   }
   else{
        if(R->info < val){
             R->dir = insert(R->dir, val);
        }
        else if(R->info > val){
             R->esq = insert(R->esq, val);
        }
        return R;
   }
}

void print_in(no *R){
     if(R != NULL){
          print_in(R->esq);
          printf(" %d", R->info);
          print_in(R->dir);
     }
}

void print_pre(no *R){
     if(R != NULL){
          printf(" %d", R->info);
          print_pre(R->esq);
          print_pre(R->dir);
     }
}

void print_pos(no *R){
     if(R != NULL){
          print_pos(R->esq);
          print_pos(R->dir);
          printf(" %d", R->info);
     }
}
