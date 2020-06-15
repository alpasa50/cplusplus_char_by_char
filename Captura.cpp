#include <iostream>	 //cin cout
#include <conio.h>	//getch()
#include <string>	//String
#include <sstream>	//stringstream
#include <iomanip> //setprecision()

using namespace std;

void getCharby();

string getString();
string getPass();
string getEdad();
string getNum();

int main(){
	//getCharby();
	
	cout<<"Nombre:";
	string Nombre = getString();
	cout<<endl;
	cout<<Nombre<<endl;
	
	cout<<"Apellido:";
	string Apellido = getString();
	cout<<endl;
	cout<<Apellido<<endl;
	
	cout<<"Edad:";
	stringstream ss(getEdad());
	int Edad;
	ss>>Edad;
	cout<<endl;
	cout<<Edad<<endl;
	
	cout<<"Ahorros:";
	stringstream oss(getNum());
	double numero;
	oss>>numero;
	cout<<endl;
	cout<<fixed<<setprecision(2)<<numero<<endl;
	
	cout<<"Password:";
	string Password = getPass();
	cout<<endl;
	
	cout<<"Confirm Password:";
	string ConfirmPassword = getPass();
	cout<<endl;
	
	//getCharby();
	bool match = Password == ConfirmPassword;

	if(match == 1){
		cout<<"Passwords match"<<endl;
	}else{
		cout<<"Passwords do not match"<<endl;
	}
	
	
	
}

string getString() {
	// \r enter
	// \b back rub
	char name[32];
	char c;
	
	for(int i=0;;){
		c = getch();
		
		if((c>=97 && c <= 122) || (c>= 65 && c<= 90) || (c>=48 && c<= 57)){
			name[i]=c;
			++i;
			cout<<c;
		}
		if(c == 13){
			name[i]='\0';
			break;
		}
		if(c == 8 && i>=1){
			cout<<"\b \b";
			--i;
		}
	}
	return name;
}

string getEdad() {
	// \r enter
	// \b back rub
	char num[32];
	char c;
	
	for(int i=0;;){
		c = getch();
		
		if(c>=48 && c<= 57){
			num[i]=c;
			++i;
			cout<<c;
		}
		if(c == 13){
			num[i]='\0';
			break;
		}
		if(c == 8 && i>=1){
			cout<<"\b \b";
			--i;
		}
	}

	
	return num;
}

string getPass() {
	// \r enter
	// \b back rub
	char pass[32];
	char a;
	
	for(int i=0;;){
		a = getch();
		if((a>=97 && a <= 122) || (a>= 65 && a<= 90) || (a>=48 && a<= 57)){
			pass[i]=a;
			++i;
			cout<<"*";
		}
		if(a == 13){
			pass[i]='\0';
			break;
		}
		if(a == 8 && i>=1){
			cout<<"\b \b";
			--i;
		}
		
	}
	
	return pass;
	
}

string getNum(){
	// \r enter
	// \b back rub
	char nums[32];
	char n;
	
	for(int i=0;;){
		n = getch();
			
		if((n>=48 && n<= 57) || (n==46)){
			nums[i] = n;
			++i;
			cout<<n;
		}
		if(n == 13){
			nums[i]='\0';
			break;
		}
		if(n == 8 && i>=1){
			cout<<"\b \b";
			--i;
		}
		
	}
	
	return nums;
	
}

void getCharby(){
	int ascii;
    char letra;  
	printf("Ingresa un caracter: ");     
	scanf("%c",&letra);  getch();    
	ascii = letra;
	printf("%d\n\n",ascii);
}




