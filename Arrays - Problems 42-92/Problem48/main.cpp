#include<iostream>
using namespace std;
const int SIZE=999;

int main(void){
	//Declaration of all variables to be used
	int arr[SIZE];
	int num[SIZE];
	int numOccur[SIZE];
	int actSize, x=0, search, y=0;
	//Creation of new array
	cout << "Please enter array size: ";
	cin >> actSize;
	for(int i=0; i<actSize; i++){
		cout << "Please enter element " << i << ": ";
		cin >> arr[i];
		numOccur[i]=0;
		num[i]=0;
	}
	//Using 2 arrays to find number and how often they occur
	for(int j=0; j<actSize; j++){
		if(j==0){ //Creation of the arrays num and numOccur with num being arr[0] and numOccur starting out as 1
			num[x]=arr[j];
			numOccur[x]++;
		}else{ //Compares arr[j] to num[x] or the current number in array num
			if(arr[j]==num[x]){ //if arr[j] is equal to num[x] then incremenet numOccur[x] by 1
				numOccur[x]++;
			}else{ //if arr[j] is not equal to num[x] then increment x, set num[x] to be equal to arr[j] and increment numOccur[x] by 1
				x++;
				num[x]=arr[j];
				numOccur[x]++;
			}
		}
	}
	//Inputs number being searched for
	cout << "Please enter number to search for: ";
	cin >> search;
	//While being used as if statement but in a loop
	while(num[y]!=search){ //while num[y] is not equal to search, increment y;
		y++;
	}
	cout << numOccur[y] << endl; //Outputs number of times the number occured because element y of numOccur has a relation with num by being the amount of times num has occured
}
