#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int snakeWaterGun(char you, char comp)
{
	if(you==comp){
		return 0;
	}
	if(you=='s' && comp=='g'){
		return -1;
	}
	else if(you=='g' && comp=='s'){
		return 1;
	}
	
		if(you=='s' && comp=='w'){
		return 1;
	}
	else if(you=='w' && comp=='s'){
		return -1;
	}
	
		if(you=='g' && comp=='w'){
		return -1;
	}
	else if(you=='w' && comp=='g'){
		return 1;
	}
	
}

int main(){
	char you, comp;
	srand(time(0));
	int number = rand()%100+1;
	
	if(number<33){
		comp = 's';
	}
	else if( number=33 && number<66){
		comp='w';
	}
	else
	comp='g';
	
	cout<<"....Welcome to game....."<<endl;
	cout<<"choose your luck....if you want to win "<<endl;
	cout<<"Enter 's' for snake "<<endl;
	cout<<"Enter 'w' for water "<<endl;
	cout<<"Enter 'g' for gun "<<endl;
	cin>>you;
	int result =snakeWaterGun(you, comp);
	if(result ==0){
		cout<<"Game draw"<<endl;
	}
	else if(result==1){
		cout<<"You win"<<endl;
	}
	else{
		cout<<"you lose!"<<endl;
	}
	cout<<"you chose "<<you<<"   computer chose "<<comp<<endl;
}
