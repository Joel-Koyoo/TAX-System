#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	
	//declaring all variables
	
	int T_salary;
	int PAYE;
	int NSSF=200;
	int NHIF;
	int x;
	int y;
	int z;
	int sub;
	int w;
	int v;
	int u;
	int A_PAYE=0;
	int net_salary;
	int consta=2400;
	int priv;
	w=sub-24000;
	v=w-16667;
	u=v-16667;
	
	cout<<"Enter the total salary\n";
	cin>>T_salary;
	
	//calculating PAYE
	
	if(T_salary<0){
		cout<<"Invalid process";
	}
	else{

	sub=T_salary-NSSF;
	
	if(T_salary<=24000){
		PAYE=0;
		priv=200;
	}
else{
		x=2400;
			
			if(w<=16000){
			A_PAYE=x+(w*15/100)
			;}
			else if(v<=16000){
				A_PAYE=x+16667*15/100+v*20/100
					;}
					else if(u<=16000){
				A_PAYE=x+(16667*15/100)+(16667*20/100)+(u*25/100)
			;}
				else{
					A_PAYE=x+(16667*15/100)+(16667*20/100)+(16667*25/100)
				;}
				
			PAYE=consta-A_PAYE;
	}
	
//Calculating NHIF
if(T_salary>=0 && T_salary<=5999){
	NHIF=150;
}
else if(T_salary>=6000 && T_salary<=7999){
	NHIF=300;
}
else if(T_salary>=8000 && T_salary<=11999){
	NHIF=400;
}
else if(T_salary>=12000 && T_salary<=14999){
	NHIF=500;
}
else if(T_salary>=15000 && T_salary<=19999){
	NHIF=600;
}
else if(T_salary>=20000 && T_salary<=24999){
	NHIF=750;
}
else if(T_salary>=25000 && T_salary<=29999){
	NHIF=850;
}
else if(T_salary>=30000 && T_salary<=39999){
	NHIF=950;
}
else if(T_salary>=40000 && T_salary<=44999){
	NHIF=1000;
}
else if(T_salary>=45000 && T_salary<=49999){
	NHIF=1100;
}
else if(T_salary>=50000 && T_salary<=59999){
	NHIF=1200;
}
else if(T_salary>=60000 && T_salary<=69999){
	NHIF=1300;
}
else if(T_salary>=70000 && T_salary<=79999){
	NHIF=1400;
}
else if(T_salary>=80000 && T_salary<=89999){
	NHIF=1500;
}
else if(T_salary>=90000 && T_salary<=99999){
	NHIF=1600;
}
else{
	NHIF=1700;
}
	
	
}
net_salary=T_salary-PAYE-NHIF-priv;
cout<<net_salary;
cout<<"\n";
cout<<PAYE;
cout<<"\n";
cout<<NHIF;
cout<<"\n";
cout<<A_PAYE;

}

