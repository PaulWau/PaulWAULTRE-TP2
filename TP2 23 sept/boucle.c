#include <stdlib.h>
#include <stdio.h>


int fr(p) {
	int somme = 0;
	for (int i = 1; i <= p; i++) {
		somme = somme + i;
	}
	return somme;
}
void whle() {
	int n =1;
	int somme=0;
	while (n <=100) {
		somme = somme + n;
		n++;
	}
	printf("%d %d ", somme, n);

}
void dowhle() {
	int n = 1;
	int somme = 0;
	do {
		somme = somme + n;
		n++;

	}
	while(n<101);
	printf("%d %d ", somme, n);
}
int nmax() {
	unsigned short int max=0;
	int n = 0;
	while (USHRT_MAX-max >=n) {
		max = max + n;
		n ++;
		
	}
	printf("%u %d", max, n-1);
}
int fra() {
	unsigned short int somme = 0;
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		somme = somme + i;
	}
	printf("%d %d ", somme, n);
	return somme;

}

void final() {
	int n=0;
	scanf_s("%d", &n);
	while (USHRT_MAX - fr(n) < 0) {
		printf("\n la valeur rentre ne correspond pas ");
		scanf_s("%d", &n);
	}
	printf("\n la valeur est bonne , voici le resultat : %d", fr(n));

}
int main(){
	final();
	return(EXIT_SUCCESS);
}