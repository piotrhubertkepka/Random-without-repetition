#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main(){

int min;
int max;
int many;
int random;
int temp;
int *tab = new int[many+1];

srand(time(NULL));


    cout << "Enter from what number to start" << endl;
    cin >> min;
    cout << "Enter on what number to finish" << endl;
    cin >> max;
    cout << "How many numbers you want to generate?" << endl;
    cin >> many;
    cout << "---------------------------------------" << endl;

    for(int i=0; i<many;i++){
       random = min + (rand()% (max - min + 1));
       tab[i] = random;

       for(int j=0; j<i; j++){
        if(tab[j]==tab[i]){
            temp = tab[i];
            tab[i]=tab[random];
            tab[random] = temp;
        }
       }
    }

    for(int i=0; i<many; i++){
        cout << i << "Generate number is " << tab[i] << endl;
    }

    getchar();
	return 0;
}
