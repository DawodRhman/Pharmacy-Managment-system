#include<string.h>
#include<bits/stdc++.h>

using namespace std;
void design(void);
void line1(void);
double chk(double checker);
char chk1(char checker);
string cap(string);
string newN;
int opt,len,i,j,x,k,buy,coun;
char sel;






int main(){
system("color 70 ");

   for(int i=1;i<=100;i++)
      { 
system("CLS");
  cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   Loading "<<'\n'<<'\t'<<'\t';
 for(int j=1;j<=i;j++)
  cout<<"|";
  cout<<"\n\n\t\t\t\t\t\t\t    "<<i<<"%";
 if( i > 1 && i < 20)
  cout<<"\n\n\tCreating Temporary files";
 else if( i > 20 && i<40)
  cout<<"\n\n\t\tAccessing Main Memory";
 else if(i >40 && i<48)
  cout<<"\n\n\t\tAccessing Cache";
 else if(i >50 && i<98)
 cout<<"\n\n\t\t\t\tSTRANGE WORLD AEH";  
 else cout<<"\n\n\t Complete.  ";

     }
 
system("pause");
system("CLS"); 


design();
 	cout<<"\n\t\t\t\tHow many items you want to enter? ::";
	len=chk(len);
struct med{
	int serial;
	string name;
	string form;
	string com;
	double price;
	int qty;
}item[len];	
	
	for(i=0;i<len;i++){
		b:	item[i].serial=100+i;
			cout<<"\t\t\t\tSERIAL NO ::"<<item[i].serial<<endl<<endl;
			fflush(stdin);
			cout<<"\t\t\t\tEnter the name of Medicine "<<i+1<<" :";
			getline(cin,item[i].name);	
		item[i].name=cap(item[i].name);	
			if(i>=1) {
			for(k=0; k<i; k++) {
				for(j=0; (item[i].name[j])!='\0'&&(item[k].name[j])!='\0'; j++) {
					if(item[i].name[j]!=item[k].name[j]) {
						break;
					}
				}

				if(item[i].name[j]==item[k].name[j]) {
					cout<<"\t\t\t\tSystem Saw first Name Duplication Renter(y/n)?";
					sel=chk1(sel);
					
					
					if(sel=='y'||sel=='Y'){
					goto b;

				}
					
					
					else{
						continue;
					}
				}
			}
		}
		
		
		
			cout<<"\t\t\t\tEnter the formula of Medicine "<<i+1<<" :";
			getline(cin,item[i].form);
     	item[i].form=cap(item[i].form);
			cout<<"\t\t\t\tEnter the Pharma company Name of Medicine "<<i+1<<" :";
			getline(cin,item[i].com);
		item[i].com=cap(item[i].com);
			cout<<"\t\t\t\tEnter the price of Medicine "<<i+1<<" :";
		item[i].price=chk(	item[i].price);
			cout<<"\t\t\t\tEnter total quantity "<<i+1<<" :";
			item[i].qty = chk(item[i].qty);
		line1();
			}
			
		system("pause");
		system("CLS");


do{
	design();
	
    cout<<"\n\n\t\t\t\t\t\tOPTIONS\n\n";
    cout<<"\n\t\t\t\t| Press 1----------Item List             |";
	cout<<"\n\t\t\t\t| Press 2----------Search AND  BUY ITEMS |";
	cout<<"\n\t\t\t\t| Press 3----------Delete Item           |";
	cout<<"\n\t\t\t\t| Press 4----------Edit List             |";		
	cout<<"\n\n\n\t\t\tEnter your choice :: "; 
	opt=chk(opt);		
system("CLS");

switch(opt){
	
	case 1:

design();
	for(i=0;i<len;i++){

			cout<<"\n\t\t\tSERIAL NO :: "<<item[i].serial<<endl<<endl;
			cout<<"\t\t\tEnter the name of Medicine"               <<":: "<<item[i].name<<endl;		
			cout<<"\t\t\tEnter the formula of Medicine            "<<":: "<<item[i].form<<endl;
			cout<<"\t\t\tEnter the Pharma company Name of Medicine"<<":: "<<item[i].com<<endl;
			cout<<"\t\t\tEnter the price of Medicine              "<<":: "<<item[i].price<<endl;
			cout<<"\t\t\tEnter total quantity                     "<<":: "<<item[i].qty<<endl;
line1();
}


	        break;
	case 2:

	do {    design();
				   
				    cout<<"\n\t\t\t\t\t\tSEARCH ";
				
					cout<<"\n\t\t\t\t\t1-BY NAME\n\t\t\t\t\t2-BY ID\n\t\t\t\t\tENTER :: ";
				  x=chk(x);
            system("pause");
			system("cls");
					
					switch(x) {
						case 1:
				design();
				   coun=1;      
				  design();
								cout<<"\n\t\t\t\tEnter Name of medicine :: ";
								fflush(stdin);
								getline(cin,newN); 
						
								  	newN=cap(newN);			  

								for(int i=0; i<len; i++) {
									for(j=0; (item[i].name[j])!='\0'&&newN[j]!='\0'; j++) {
										if(item[i].name[j]!=newN[j]) {
break;
										
										}
									
									if(item[i].name[j]==newN[j]) {
										cout<<"\t\t\t\tID   ::"<<item[i].serial<<endl;
										cout<<"\t\t\t\tNAME ::"<<item[i].name[j]<<endl<<endl;
						            	cout<<"\t\t\tEnter the formula of Medicine            "<<":: "<<item[i].form<<endl;
		                            	cout<<"\t\t\tEnter the Pharma company Name of Medicine"<<":: "<<item[i].com<<endl;
		                        	    cout<<"\t\t\tEnter the price of Medicine              "<<":: "<<item[i].price<<endl;
		                            	cout<<"\t\t\tEnter total quantity                     "<<":: "<<item[i].qty<<endl;
								  
								  
								  if(item[i].qty<=0){
								cout<<"\n\t\t\t\t SORRY WE RAN OUT\n";
								}
								else{
								
								        cout<<"\t\t\t HOW MANY YOU WANA BUY :: ";
										 buy=chk(buy);
										 	 if(buy==0){
										 	cout<<"\t\t\tNOTHING GIVES NOTHING \n";
										 coun=0;
										 	break;
										 }
										 if(buy>item[i].qty){
										 	cout<<"\t\t\tSORRY WE DONT HAVE THAT MUCH\n";
										 coun=0;
										 	break;
										 }
										 item[i].qty=item[i].qty-buy;
										cout<<"\t\t\tLEFT  total quantity                     "<<":: "<<item[i].qty<<endl;} 
								  
								  
								  
								  	coun=0;
									 	break;
									}
								
									coun=1;
										break;
								}}
								if(coun==1) {
									cout<<"\n\t\t\t\t\tnot found\n";
								}
							break;
					case 2:
				
						design();
						line1();
							cout<<"\n\t\t\t\t\t\tEnter SERIAL NO ::";
							x=chk(x);
					             

		
						
							coun=1;
							for(int i=0; i<len; i++) {	
								if(x==item[i].serial) {
								
										cout<<"\t\t\t\tNAME ::"<<item[i].name[j]<<endl<<endl;
						            	cout<<"\t\t\tEnter the formula of Medicine            "<<":: "<<item[i].form<<endl;
		                            	cout<<"\t\t\tEnter the Pharma company Name of Medicine"<<":: "<<item[i].com<<endl;
		                        	    cout<<"\t\t\tEnter the price of Medicine              "<<":: "<<item[i].price<<endl;
		                            	cout<<"\t\t\tEnter total quantity                     "<<":: "<<item[i].qty<<endl;
		                        if(item[i].qty<=0){
								cout<<"\n\t\t\t\t SORRY WE RAN OUT\n";
								}
								else{
								
								        cout<<"\t\t\t HOW MANY YOU WANA BUY :: ";
										 buy=chk(buy);
										 	 if(buy==0){
										 	cout<<"\t\t\tNOTHING GIVES NOTHING \n";
										 coun=0;
										 	break;
										 }
										 
										 	 if(buy>item[i].qty){
										 	cout<<"\t\t\tSORRY WE DONT HAVE THAT MUCH\n";
										 coun=0;
										 	break;
										 }
										 item[i].qty=item[i].qty-buy;
										cout<<"\t\t\tLEFT  total quantity                     "<<":: "<<item[i].qty<<endl;} 						  
								  	coun=0;
									 
								 break;
								 
								 								}
									} if(coun==1) {
				
									cout<<"\n\t\t\t\t\tNOT FOUND\n";
							break;
								}
						break;		
	default:
	cout<<"\n\t\t\t\tINVALID\n";							
						break;
							}
cout<<"\n\t\t\t\t\twana  try again (y/n)=";
		
					sel=chk1(sel);
					system("CLS");
			if(sel=='n'||sel=='N')
			
						break;
}while(1);
							break;


	case 3:
 do{         design();

					cout<<"\n\t\t\t\t\tSERIAL OF ITEM YOU WANA DELETE ::";
			         	 x=chk(x);

				
					coun=1;
					cout<<len;
					for(int i=0; i<len; i++) {
						if(x==item[i].serial) {
							for(j=i;j<len;j++ ) {
								
							item[j]=item[j+1];
		
				
						
					} 
							
						coun=0;
					}
						
					}if(coun==0){
						len=len-1;
					}
					if(coun==1){
					cout<<"\nt\t\t\t\tINCORECT ID\n";	
					}



cout<<"\n\t\t\t\t\t wana update aonther Record (y/n)=";
					sel=chk1(sel);
				
					if(sel=='n'|sel=='N')
						break;

}while(1);			
			
			
			
			
			
			break;
	case 4:	
	
do{
	



cout<<"\n\t\t\t\t\tSERAIL ITEM You Wana Change ::";
					x=chk(x);
                
				    coun=1;	
				
				
					for(i=0;i<len;i++){
				if(x==item[i].serial) {
				
				cout<<"\t\t\tPREVIOUS NAME ::"<<item[i].name[j]<<endl<<endl;
            	cout<<"\t\t\tPREVIOUS formula of Medicine            "<<":: "<<item[i].form<<endl;
	           	cout<<"\t\t\tPREVIOUS the Pharma company Name of Medicine"<<":: "<<item[i].com<<endl;
		   	    cout<<"\t\t\tPREVIOUS the price of Medicine              "<<":: "<<item[i].price<<endl;
		       	cout<<"\t\t\tPREVIOUS total quantity                     "<<":: "<<item[i].qty<<endl;
		       		fflush(stdin);
			cout<<"\t\t\tNEW name of Medicine "<<i+1<<" :";
			getline(cin,item[i].name);	
		item[i].name=cap(item[i].name);	
			cout<<"\t\t\tNEW the formula of Medicine "<<i+1<<" :";
			getline(cin,item[i].form);
     	item[i].form=cap(item[i].form);
			cout<<"\t\t\tNEW Pharma company Name of Medicine "<<i+1<<" :";
			getline(cin,item[i].com);
		item[i].com=cap(item[i].com);
			cout<<"\t\t\tNEW Enter the price of Medicine "<<i+1<<" :";
		item[i].price=chk(	item[i].price);
			cout<<"\t\t\tNEW total quantity "<<i+1<<" :";
			item[i].qty = chk(item[i].qty);
		line1();
			}
		       	

	 	
	 	
	 	
	item[i].name=cap(item[i].name);
	coun=0;				

}
if(coun==1){
	
cout<<"\t\t\t\tRECORD NOT FOUND";
}




cout<<"\n\t\t\t\t\t wana update aonther Record (y/n)=";
					sel=chk1(sel);
				
					if(sel=='n'|sel=='N')
						break;

}while(1);	
	break;	
 
	
	
	
	default:
		cout<<"\n:::::::::::::::INVALID ENTRY::::::::::::::::\n";
		break;
}


cout<<"\t\t\t\t\twana  go back (y/n) ";
		cin>>sel;
		system("cls");
		if(sel=='n'||sel=='N')
			break;
	} while(1);
	

return 0;	
	
}



double chk(double checker){

a:cin>>checker;
if(checker<0){
cout<<"\t\t\t\tINVALID INPUT AGAIN ::";
goto a;	
}
while(1){

if(cin.fail()){
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  cout<<"\n\t\t\t\t\tArabic Numerals Only ::";
  cin>>checker;

}if(!cin.fail()){

   return(checker);
   break;
}
   
                      } }  
					  

char chk1(char checker){



while(1){

cin>>checker;
if(cin.fail()){
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  cout<<"\t\t\t\t\tbe in limit :) ::";
  b:cin>>checker;

}if(!cin.fail()){

   return(checker);
   break;
}
}
 }  
					  					  
					  
					   

void design(void){
	cout<<"\n########################################################################################################################";
	cout<<"\n************************************************************************************************************************";
	cout<<"\n\t\t\t\t\t\t\tWELCOME TO!";
	cout<<"\n\t\t\t\t\t\tPharmacy Management System";
	cout<<"\n************************************************************************************************************************";
	cout<<"\n########################################################################################################################\n";
	
	
}
	void line1(void){
	cout<<"\n\n\t\t\t___________________________________________________________________________\n";}
	
	
	
	string cap(string a){
	
		for(int j=0;a[j]!='\0'; j++) {

	if(a[j]>='a' && a[j]<='z')
	a[j]=a[j]-32;
								}

	return a;
	
}