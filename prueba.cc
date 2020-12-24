#include<iostream>

using namespace std;

int main(){
	//			   0  1  2  3
	string input[] = {"abac"};
	int size = 5;
	string letter;
	
	letter = input[0];
	string letterNew;
	
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(letter[i] == letter[j]){
				cout << letter[i] << " " << letter[j] << endl;
			}else{
				//cout << letter[i] << endl;
			}
		}
	}
}
