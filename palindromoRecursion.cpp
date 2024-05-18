#include<iostream> //karol cebaLLos
#include<string.h>
using namespace std;
bool palindromo(char *pal,int pos1,int pos2,int cont,bool t,int conta2){

if ( cont==conta2/2){
	t=true;
	return t;
	
}else{
    while(pal[pos1]==' '){
		pos1++;
	}
	while(pal[pos2]==' '){
		pos2--;
	}
    if(palindromo(pal,pos1+1,pos2-1,cont+1,t,conta2)==true){
	
	if(pal[pos1]==pal[pos2]){
		t=true;	
	}else{
		t=false;
	}
	
	}
	
	}
	return t;
	

}

char *letraalrevez(char*pal,char *alrevez,int tam,int remplazo,int  cont){
		
	if(*(pal+cont)=='\0'){
	
	return alrevez;
	}
         
     *(alrevez+cont)=*(pal+remplazo);
       cont++;
       remplazo=remplazo-1;
   return letraalrevez(pal,alrevez, tam, remplazo,cont);
	
	
}
int main(){

char *pal=new char[100];


strcpy(pal,"anita    lava la tina");	
int tam=strlen(pal);
char *alrevez=new char[tam+1];
*(pal+tam)='\0';
int cont=0;	
int remplazo=tam-1;
bool es;
int conta=0;
bool t;
cout<<pal<<endl;
alrevez=letraalrevez(pal,alrevez,tam,remplazo,cont);	

  cout<<alrevez<<endl;
  int pos1=0,pos2=strlen(pal),conta2=0;
  for(int i=0;i<pos2;i++){
  	if(pal[i]!=' '){
  		conta2++;
	  }
  }
  
 
if(palindromo(pal,pos1,pos2-1,conta,t,conta2)==true){
cout<<"es palindromo "<<endl;		
}else{
	cout<<"no es palindromo ";
}
delete[]pal;
delete[]alrevez;
return 0;
	
}
