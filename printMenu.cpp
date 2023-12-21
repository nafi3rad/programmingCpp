#include <iostream>
#include <string>
#include <vector>
using namespace std;
//function for menu
void print_menu();
//function for add
void add_data(vector<int>&);
//function for mean
void mean_of_data(vector<int>&);
//function for max
void max_of_data(vector<int>);
//function for print
void print(const vector<int>&);
//function for 
vector <int> arr;

int main(){
	char user_input{};
	do{
		print_menu();
		cin >> user_input;
		user_input=toupper(user_input);
		if(user_input=='P')
			print(arr);
		else if(user_input=='A')
			add_data(arr);
		else if(user_input=='Q')
			cout<<"thank you for interacting, see you again!"<<endl;
		else if(user_input=='L')
			max_of_data(arr);
		else if(user_input=='M')
			mean_of_data(arr);
		else
			cout<<"onacceptable input"<<endl;
	}while(user_input!='Q');
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
	cout<<"M: show the mean of data"<<endl;
	cout<<"Q: quit the program"<<endl;
}
void print(const vector<int> &arr){
	int size=arr.size();
	if (arr.empty())
		cout<<"[], the list is empty"<<endl;
	else{
		cout<<"[";
		for (int i{0};i<size;i++)
		cout<<" "<<arr[i];
		cout<<" ]"<<endl;
	}
}
void max_of_data(vector<int> arr){
	if (arr.empty())
		cout<<"no Array, please add numbers first"<<endl;
	else{
	int max_value=arr[0];
	for(auto i:arr){
		if(i>max_value)
		max_value=i;
	}
	cout<<"the largest value is: "<<max_value<<endl;
	}
}
void mean_of_data(vector<int> &arr){
	if (arr.empty())
		cout<<"no Array, please add numbers first"<<endl;
	else{
	int total_value{};
	for(auto i:arr){
		total_value+=i;
	}
	
	cout<<"the mean value is: "<<static_cast<double> (total_value)/arr.size()<<endl;
	}
}