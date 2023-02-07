#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int X[4] = {*a,*b,*c,*d};
	int Y[4] = {0,0,0,0};
		
		for(int i=0;i<4;i+=1){
			Y[i]=rand()%4;
			for(int j=0;j<i;j+=1){
				if(Y[i]==Y[j]){
					i-=1;
				}
			}
		}

		*a=X[Y[0]];
		*b=X[Y[1]];
		*c=X[Y[2]];
		*d=X[Y[3]];
	}
