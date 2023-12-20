#include <iostream>
#include <string>
#include <vector>
using namespace std;
//function for menu
void print_menu();
//function for add
void add_data(vector<int>&);
//function for mean
//function for max

//function for min
//function for print
void print(const vector<int>&);
//function for 
vector <int> arr;

int main(){
	char user_input;
	do{
		print_menu();
		cin >> user_input;
		if(user_input=='m'||user_input=='M')
			print_menu();
		else if(user_input=='p'||user_input=='P')
			print(arr);
		else if(user_input=='a'||user_input=='A')
			add_data(arr);
		else if(user_input=='q'||user_input=='Q')
			cout<<"thank you for interacting, see you again!"<<endl;
		else
			cout<<"onacceptable input"<<endl;
	}while(user_input!='q'&& user_input!='Q');
	return 0;
}
void add_data(vector<int> &arr){
	int number_to_add{};
	cout<<"plese write the number you want to add to the array"<<endl;
	cin>>number_to_add;
	arr.push_back(number_to_add);
	print(arr);
}

void print_menu(){
	cout<<"Choose one of the following options"<<endl;
	cout<<"A: add a data"<<endl;
	cout<<"P: print the data"<<endl;
	cout<<"L: show the largest data"<<endl;
	cout<<"S: show the smallest data"<<endl;
	cout<<"Q: quit the program"<<endl;
}
void print(const vector<int> &arr){
	int size=arr.size();
	if (size<1)
		cout<<"[], the list is empty"<<endl;
	else{
		cout<<"[";
		for (int i{0};i<size;i++)
		cout<<" "<<arr[i];
		cout<<" ]"<<endl;
	}
}
