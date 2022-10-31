//check palindrome using recursion:
#include<iostream>
using namespace std;
bool checkPalindrome(string str,int i,int j){
	if(i>j)
		return true;
	if(str[i]!=str[j])
		return false;
	return checkPalindrome(str,i+1,j-1);
		
}
int main(){
	string name = "abcba";
	cout<<endl;
	bool isPalindrome = checkPalindrome(name,0,name.length()-1);
	if(isPalindrome){
		cout<<"it is palindrome"<<endl;
	}else{
		cout<<"it is not palindrom"<<endl;
	}
	return 0;
}
