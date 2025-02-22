#include <iostream>
#include <ctime>
#include <random>
using namespace std;

int main(){
	default_random_engine engine;
	uniform_int_distribution<int> type(0,99);
	uniform_int_distribution<int> number(0,9);
	uniform_int_distribution<char> caps('A','Z');
	uniform_int_distribution<char> lower('a','z');
	engine.seed(time(0));
//	while(true){
		system ( "pause" );
		printf ( "\n---------------------------------------------------\nThe KEY is: " );
		for ( int i = 1 ; i <= 16; i++ ) {
			switch (type(engine) % 3) {
			case 0:
				printf("%d", number(engine)); //num
				break;
			case 1:
				printf("%c", caps(engine)); //caps
				break;
			case 2:
				printf("%c", lower(engine)); //lit
				break;
			}
		}
		printf("\n---------------------------------------------------\n");
//	}
	return 0;
}