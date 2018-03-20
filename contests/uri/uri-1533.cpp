#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct listt{
    int pos, niv;
} list;

void selection_sort (list vetor[],int max);

int main(void)
{
    list sus[1001];
    int i, quant;
    
    while(1){
        scanf("%i", &quant);
        if(quant == 0)
            break;
        for(i=0; i<quant; i++){
            scanf("%i", &sus[i].niv);
            sus[i].pos = i+1;
        }
        selection_sort(sus, quant);
        
        printf("%d\n", sus[quant-2].pos);
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void selection_sort (list vetor[],int max){
  int i, j, min;
  list aux;
   
  for (i = 0; i < (max - 1); i++) {
    min = i;
    for (j = i+1; j < max; j++) {
      if (vetor[j].niv < vetor[min].niv) {
      min = j;
      }
    }

    if (i != min) {
      aux.niv = vetor[i].niv;
      aux.pos = vetor[i].pos;
      vetor[i].pos = vetor[min].pos;
      vetor[i].niv = vetor[min].niv;
      vetor[min].niv = aux.niv;
      vetor[min].pos = aux.pos;
    }
  }
}
