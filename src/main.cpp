#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(nullptr));
	int type;
	char temp;
//	while(true){
		system("pause");
		cout<<endl<<"---------------------------------------------------\nThe KEY is: ";
		for(int i=1 ; i<=16; i++) {
			type=(rand()%(99-1+1))+99;
			if(type%3==1) { //num
				cout<<(rand()%(100-0+1))%10;
			}
			else if(type%3==2){ //caps
				temp=(rand()%(260-0+1))%26+65;
				cout<<temp;
			}
			else if(type%3==0){ //lit
				temp=(rand()%(260-0+1))%26+97;
				cout<<temp;
			}
		}
		cout<<endl<<"---------------------------------------------------\n";
//	}
	return 0;
}
