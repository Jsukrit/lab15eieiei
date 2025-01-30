#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a, int *b, int *c, int *d){
	int *shuf[] = {a, b, c, d};
	for(int i = 1; i <= 4; i++){
		int j = rand() % i;
		int swap = *shuf[i-1];
		*shuf[i-1] = *shuf[j];
		*shuf[j] = swap;
	}
	
	*a = *shuf[0];
	*b = *shuf[1];
	*c = *shuf[2];
	*d = *shuf[3];
}
