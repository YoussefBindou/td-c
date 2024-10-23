// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
//1
	int limit(){
		int nbr;
	do{
    printf("dooner number btw 0 and 10 \n ");
    scanf("%d",&nbr);
    }while(nbr<0 || nbr>10);
    return nbr;
	}
//2
void remple(int tbl[], int limit){
	int i;
    for(i=limit; i>=0; i--) {
        printf("Enter number %d: ", i);
        scanf("%d", &tbl[i]);
    }
}
//3
void Affichage(int tbl[], int limit){
	int i;
	printf("-------------------------------------------------------------------\n " );
    printf("F(x) : " );
    for(i=limit;i>=0;i--){
        if(i!=limit && i!=0){
           printf("+ ");
        }
        if(i==0){
           printf("+ %d\n",tbl[i]);
       }
       else{
           printf(" %dX^%d ",tbl[i],i);
       }
    }
}
//main
int main() {
   
    int limit1,limit2,s,i,x,r;
	
    
    limit1=limit();
    int tabel1[limit1];
    remple(tabel1, limit1);
    
    limit2=limit();
    int tabel2[limit2];
    remple(tabel2, limit2);
    
    
    printf("-------------------------------------------------------------------\n Affichage des premier polynomes \n " );
    Affichage(tabel1, limit1);
    printf("-------------------------------------------------------------------\n Affichage des second  polynomes \n " );
    Affichage(tabel2, limit2);
    int max ;
    if(limit1>limit2){
        max = limit1;
    }
    else{
        max = limit2;
    }
	int sometabel[max];
    for(i=max;i>=0;i--){
        sometabel[i]=0;
        if(i<=limit1){
           sometabel[i]+= tabel1[i];
        }
        if(i<=limit2){
           sometabel[i]+= tabel2[i];
        }
    }
    printf("-------------------------------------------------------------------\n Addition des polynomes \n" );
    Affichage(sometabel, max);
    
    printf("-------------------------------------------------------------------\n Enter X \n " );
    scanf("%d",&x);
   printf("-------------------------------------------------------------------\n Resultat de premier polynomes pore X = %d \n",x );
   printf("-------------------------------------------------------------------\n " );
    printf("F(%d) : " ,x);
    r=0;
    for(i=limit1;i>=0;i--){
        if(i!=limit1 && i!=0){
           printf("+ ");
        }
        if(i==0){
        	r+=tabel1[i];
           printf("+ %d = %d\n",tabel1[i],r);
       }
       else{
       	//resule add it here 
       	r+=tabel1[i] * pow(x, i);
        printf(" %d(%d)^%d ",tabel1[i],x,i);
       }
        
    }
    
   
}
