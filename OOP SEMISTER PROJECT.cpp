#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class login{
	private:
		string a_name, password= "";
		char c=' ';
		int flag=0;
	public:	
	    void setaname(){
	    	while(flag!=2){
	    	cout << "ENTER ADMIN NAME => ";
	    	cin.ignore();
	    	getline(cin,a_name);
	    		if(a_name == "MUHAMMAD MUJTABA"){
						while(flag!=2){
							cout << "ENTER PASSWORD => ";
//			        		cin >> password;
							while(c!=13){
	    						c=getch();
	    						if (c!=13){
	    							password += c;
	    							cout << "*";
								}
							}
						if(password == "Hello@100"){
							cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
							cout << "\t\t\t\t\t\t\t\t    LOGIN SUCCESSFULLY!" <<endl ;
							cout << "\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
							flag =2;						
							}
					else{
						if(flag==1){
						cout<<"\n";
						cout << "\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
						cout << "\t\t\t\t\t~INCORRECT PASSWORD~" << endl;
						cout << "\t\t\t\t\t~UNFORTUNATELY YOU FAILED TO LOGIN~" <<endl;
						cout << "\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
					}
					else{
						cout<<"\n";
						cout << "\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
						cout << "\t\t\t\t\t~INCORRECT PASSWORD~" << endl;
						cout << "\t\t\t\t\t~BEWARE ONLY TWO TRIALS AND THIS IS YOUR LAST ATTEMPT~" <<endl;
						cout << "\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
					}
						flag++;
						c=' ';
						password= "";
					}
				}
			}
			else{
				cout << "\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
				cout << "\t\t\t\t\t ~INCORRECT ADMIN NAME~" << endl;
				cout << "\t\t\t\t\t~BEWARE ONLY TWO TRIALS~" << endl;
				cout << "\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
				flag++ ;
			}
		  }
		}	
};

class wardinfo{
	protected:
		int city;
		int area;
	public:
	    wardinfo(){}
	    
	    //setters city,area
		void setcity(){
			cout<<"\t\tENTER YOUR CITY AND AREA'S NAME TO SEE IN WHICH WARD YOUR VOTE WILL BE CASTED\n";
			cout <<"\t\t NOTE: IF AREA OR CITY IS NOT IN THE OPTION SELECT THE NEAREST AREA OR CITY \n";
			cout<<"\nCHOOSE YOUR CITY BY SELECTING CORRECT OPTION NUMBER e.g(1,2,3,etc)\n";
			cout<<"\n1. KARACHI \n2. LAHORE \n3. PESHAWAR \n4. ISLAMABAD \n5. HYDERABAD \n6. RAWALPINDI\n";
			cout<<"\nYOUR OPTION:- ";
			cin>>city;
			system("cls");
		}
		void setarea(){
			cout<<"ENTER YOUR AREA BY SELECTING CORRECT OPTION e.g(1,2,3,etc)\n\n ";
			switch(city){
				case 1:
					cout<<"\n1. GULISTAN-E-JAUHUR \n2. GULSHAN-E-JAMAL \n3. DEFENCE \n4. MALIR \n5. KORANGI \n6. LALUKHAIT \n7. NAZIMABAD \n8. SAFORA \n9. SADAR \n10. LYARI\n";
					cout<<"\nYOUR OPTION:- ";
			        cin>>area;
			        break;
			    case 2:
			    	cout<<"\n1. ALLAMA IQBAL TOWN \n2. GARDEN TOWN \n3. CANAL ROAD \n4. THOKAR NIAZ \n5. AWAN TOWN \n6. AZIZABAD \n7. FASIAL BAGH \n8. DHAIR \n9. KOT-MOHIBBU \n10. KOT-BEGUM\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>area;
			    	break;
			    case 3:
			    	cout<<"\n1. CHOWK YADGAR \n2. JAMRUD FORT \n3. killer town \n4. RAZA TOWN \n5. AWAMI MARKAZ \n6. SADDAR \n7. MAHABAT BAGH \n8. DARRA ADAM KHEL \n9. NOWSHERA \n10. KOT-PATHAN\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>area;
			    	break;
			    case 4:
			    	cout<<"\n1. RAIWAND \n2. FATEH JHANG \n3. TAXILA \n4. ZERO POINT \n5. SIX ROAD \n6. SATTELITE TOWN \n7. KAHUTA \n8. SIHALA \n9. KAHUTA \n10. BANI-GALA\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>area;
			    	break;
			    case 5:
			    	cout<<"\n1. LATIFABAD \n2. SHOHRA GOTH \n3. MIRRANI GOTH \n4. BUX-SHORO \n5. GIDU BANDAR \n6. KIRAR KHAN \n7. HUSRI \n8. DADDU \n9. KOTRI \n10. MIRPUR\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>area;
			    	break;
			    case 6:
			    	cout<<"\n1. CHAKRA \n2. AFZAL TOWN \n3. BAHRIA TOWN \n4. LAAL HAVELI \n5. D-CHOWCK \n6. SATTELITE TOWN \n7. CHAKLALA CANTT \n8. D-H-A \n9. CHAKRI \n10. LALAZAR\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>area;
			    	break;
			}
			system("cls");
		}
		
		//checking of ward
		void checking_ward(){
			switch(city){
				case 1:
					switch(area){
						case 1:
							cout<<"YOUR WARD IS 'WARD #01' \n";
							cout<<"PTI MNA:- M.SOOMRO \nPMLN MNA:- AFTAB SHABAN \nPPP MNA:- A.A.ZARDARI  \nMQM MNA:- AMEEN-UL-HAQ\n";  
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #02' \n";
							cout<<"PTI MNA:- ALAMGEER KHAN \nPMLN MNA:- SHAMEER \nPPP MNA:- BILAWAL BHUTTO ZARDARI  \nMQM MNA:- KHALID MAQBOOL\n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #03' \n";
							cout<<"PTI MNA:- IMRAN ISMAIL \nPMLN MNA:- MIFTA ISMAIL \nPPP MNA:- SHELA RAZA  \nMQM MNA:- FAROOQ SATTAR\n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #04' \n";
							cout<<"PTI MNA:- KHURRAN SHER \nPMLN MNA:- ALI AKBAR GUJJAR \nPPP MNA:- KHURSHEED MEMON  \n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #05' \n";
							cout<<"PTI MNA:- MUJTABA \nPMLN MNA:- ALI \nPPP MNA:- NOHAIL  \nMQM MNA:- HAMMAD\n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #06' \n";
							cout<<"PTI MNA:- SALEEM \nPMLN MNA:- AFTAB  \nPPP MNA:- KALEEEM  \n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #07' \n";
							cout<<"PTI MNA:- MUHAMMAD \nPMLN MNA:- SHABAN \nPPP MNA:- JAVED  \nMQM MNA:- JAHANGIR\n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #08' \n";
							cout<<"PTI MNA:- AKRAM \nPMLN MNA:- JAMEEL \nPPP MNA:- KHRRAM  \nMQM MNA:- AMEEN\n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #09' \n";
							cout<<"PTI MNA:- MOMIN \nPMLN MNA:- BILAL \nPPP MNA:- SAQIB  \nMQM MNA:- ADNAN\n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #10' \n";
							cout<<"PTI MNA:- HINA \nPMLN MNA:- SHABANA \nPPP MNA:- MARYAM \n";
							break;
					}
					break;
				case 2:
					switch(area){
						case 1:
							cout<<"YOUR WARD IS 'WARD #11' \n";
							cout<<"PTI MNA:- JAMSHED \nPMLN MNA:- CHEEMA \nPPP MNA:- WASEEM \n";
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #12' \n";
							cout<<"PTI MNA:- ADEEL \nPMLN MNA:- SAAD \nPPP MNA:- JAHANZEB\n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #13' \n";
							cout<<"PTI MNA:- TAUQEER \nPMLN MNA:- TARIQ \nPPP MNA:- MEHMOOD \n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #14' \n";
							cout<<"PTI MNA:- ARSALAN \nPMLN MNA:- UMER \nPPP MNA:- NADEEM \n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #15' \n";
							cout<<"PTI MNA:- IMRAN KHAN \nPMLN MNA:- ADNAN \nPPP MNA:- KAREEM\n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #16' \n";
							cout<<"PTI MNA:- BABAR \nPMLN MNA:- AQIB \nPPP MNA:- CHISHTI \n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #17' \n";
							cout<<"PTI MNA:- NAEEM \nPMLN MNA:- QAMBER \nPPP MNA:- FATIMA \n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #18' \n";
							cout<<"PTI MNA:- SHEHZAD \nPMLN MNA:- AKMAL \nPPP MNA:- KAMRAN \n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #19' \n";
							cout<<"PTI MNA:- WASAY \nPMLN MNA:- CHAUDRY \nPPP MNA:- BUTT \n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #20' \n";
							cout<<"PTI MNA:- FAWAD \nPMLN MNA:- SALEEMA \nPPP MNA:- SHAZIA\n";
							break;
					}
					break;
				case 3:
					switch(area){
						case 1:
							cout<<"YOUR WARD IS 'WARD #21' \n";
							cout<<"PTI MNA:- ALU MUHAMMAD KHAN \nPMLN MNA:- MARYAM AURANZEB \nPPP MNA:- SHANZILA\n";
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #22' \n";
							cout<<"PTI MNA:- FATIR \nPMLN MNA:- ZAHID \nPPP MNA:- RUBINA\n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #23' \n";
							cout<<"PTI MNA:- UMER ISRAR \nPMLN MNA:- OSAMA GUJJAR \nPPP MNA:- AMIR KHOSOS\n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #24' \n";
							cout<<"PTI MNA:- ANMOL FATIMA \nPMLN MNA:- BILAL  \nPPP MNA:- KULJEET\n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #25' \n";
							cout<<"PTI MNA:- FATIMA \nPMLN MNA:- BENAZIR \nPPP MNA:- Z.A BHUTTO\n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #26' \n";
							cout<<"PTI MNA:- RANA \nPMLN MNA:- ALEENA \nPPP MNA:- ZIA\n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #27' \n";
							cout<<"PTI MNA:- AFRIDI \nPMLN MNA:- HAFEEZ \nPPP MNA:- DHANI\n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #28' \n";
							cout<<"PTI MNA:- AMIR \nPMLN MNA:- AHMED \nPPP MNA:- ALI\n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #29' \n";
							cout<<"PTI MNA:- ZUBAIR \nPMLN MNA:- UMER \nPPP MNA:- NAMRA\n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #30' \n";
							cout<<"PTI MNA:- ALTAF \nPMLN MNA:- ZULNOOR \nPPP MNA:- ABDULLAH\n";
							
							break;
					}
					break;
				case 4:
					switch(area){
						case 1:
							cout<<"YOUR WARD IS 'WARD #31' \n";
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #32' \n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #33' \n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #34' \n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #35' \n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #36' \n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #37' \n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #38' \n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #39' \n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #40' \n";
							break;
					}
					break;
				case 5:
					switch(area){
						case 1:
							cout<<"YOUR WARD IS 'WARD #41' \n";
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #42' \n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #43' \n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #44' \n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #45' \n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #46' \n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #47' \n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #48' \n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #49' \n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #50' \n";
							break;
					}
					break;
				case 6:
					switch(area){
						case 1:
							cout<<"YOUR WARD IS 'WARD #51' \n";
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #52' \n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #53' \n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #54' \n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #55' \n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #56' \n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #57' \n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #58' \n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #59' \n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #60' \n";
							break;
					}
					break;
			}
		}
};


class about{
	private:
		int x;
	public:
		void displayabout(){
			while(x!=4){
			cout << "\t\t\t\t\t\t\t!=!WELCOME TO DIGITAL ELECTION COMMISION OF PAKISTAN!=!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t~power by MK-SOLUTIONS~" << endl;
			cout << "\n\n\t ~SELECT THE OPTION :" << endl;
			cout << "\t1.OVERVIEW\n\t2.HOUNOURABLE CDEC\n\t3.HONOURABLE MEMBERS\n\t4.EXIT" << endl;
			cout << "\t\t\t(opt)==>> ";
			cin >> x;
		system("cls"); 
	switch(x){
		case 1:
			cout << "\t\t\t\t\t\t\t\t\t   ~OVERVIEW~" << endl;
			cout << "\t\t\t\t\t\t\t\tCONSTITUTIONAL PROVISON REALTING\n\t\t\t\t\t\t\t\t\t    TO ECP" << endl;
			cout << "\t\t\t\t\t\t\t\t  APPOINTMENT OF CHEIF ELECTION\n\t\t\t\t\t\t\t\t    COMMISSIONER AND ELECTION\n\t\t\t\t\t\t\t\t\t    COMMISION\n" << endl;
			cout << "\t\t213.  (1)  THERE SHALL BE A CHEIF ELECTION COMMISIONER( IN THIS PART REFERRED TO AS THE COMMISONER), WHO SHALL BE APPOINTED BY THE PRESIDENT." << endl;
			cout << "\t\t213.B (1)  NO PERSON SHALL BE APPOINTED TO BE COMMISONER UNLESS HE HAS BEEN A JUDGE OF THE SUPREME COUT OR SENIOR CIVIL SERVANT,NO LESS  68." << endl;
			cout << "\t\t214.  (1)  BEFORE ENTERING UPON OFFICE, THE COMMISONER SHALL MAKE BEFORE THE CHEIF JUSTCE OF PAKISTAN AND MEMBER OF ELECTION COMMISON OF PAK." << endl;
			cout << "\t\t215.  (1)  THE COMMISONER AND A MEMBER SHALL, SUBJECT TO THIS ARTIVLE ,HOLD OFFICE FOR A TERM OF FIVER YEAR FROM DAY ENTERS UPON HIS OFFICE."  << endl;
			cout << "\t\t216.  (1)  THE COMMISONER OF MEMBER SHALL NOT: HOLD ANY OTHE ROFFICE OF PROFIT IN THE SERVICE IF PAKSITAN OR OOCUPY AND OTHER POSITION CARRY." << endl;
			system("pause");
			system("cls");
			break;  
	
	    case 2:
	        cout << "\t\t\t\t\t\t\t\t\t HOU'BLE CHEIF ELECTION\n\t\t\t\t\t\t\t\t\tCOMMISSIONER OF PAKISTAN";
	        cout <<"\n\t\t\t\t\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!";
	        cout << "\n\t\t\t\t\t\t\t\t\t~MR.SIKANDAR SULTAN RAJA~" << endl;
	        cout << "\t\tMR, SIKANDAR SULTAN RAJA BELONGS TO BEHRA, DISTICT SARGODHA. HE COMPLETED HIS EARLY EDUCATION FORM THE MOST PERTIGIOUS INSTITUTION OF THE COUNTRY\n";
	        cout << "\t\tHE DID HIS MATRIC AND FSC FROM CADET COLLEGE HASAN ABDAL AND THEN GRADUATED FROM KING EDWARD MEDICAL COLLEGE IN MEDICINE.HE ALSO GOT DEGREE OF LLB\n";
	        cout << "\t\tHE INDUCTED INTO CIVIL SERVICE IN 1989. HE SERVED ON MANY KEY POSITIONS SUCH AS DEPUTY COMMISIONER,ISLMABAD, DIRECTOR GENERAL EXCISE AND TAXATION\n";
	        system("pause");
			system("cls");
	        break;
	    
		case 3:
			cout << "\t\t\t\t\t\t\t\t\t~HOUNOURABLE MEMBERS~" << endl;
			cout << "\t\t\tA. MR. NISAR AHMED DURRANI" << endl;
			cout << "\t\t\tB. MR SHAH MUHAMMAD JATOI"  << endl;
			cout << "\t\t\tC. MR MUHAMMAD HASNAIN" << endl;
			cout << "\t\t\tD. MR ALI RAZA" << endl;
	        cout << "\t\t\tE. MS SHAZMEEN " << endl;
			cout << "\t\t\tF. MS ANMOL FATIMA" << endl; 
			system("pause");
			system("cls");
			break;
		
		case 4:
		    cout << "\t\t\t~THANKS FOR VISITING~";
			break;	
			  
		}
	}
   }
};

class voter{
	protected:
		string name;
		string id;
	public:
		voter(){
		}
		void setname(){
			cout<<"ENTER YOUR NAME: ";
			cin>>name;
		}
		void setid(){
			cout<<"ENTER YOUR RESPECTIVE VOTER ID: ";
			cin>>id;
		}
};

class local_pak : public voter{
	protected:
		string nic;
	public:
	    void setnic(){
			cout<<"ENTER YOUR CNIC: ";
			cin>>nic;
		}
};

class foreign_pak: public voter{
	protected:
		string passport;
	public:
		void setpassport(){
			cout<<"ENTER YOUR PASSPORT NUMBER: ";
			cin>>passport;
		}
};

int main(){
	wardinfo wi;
	about ob;
	login L;
	local_pak locals;
	foreign_pak foreigner;

	string n;
	int x,a;
    
	while(x!=3){
	cout << "\t\t\t\t\t\t\t!=!WELCOME TO DIGITAL ELECTION COMMISION OF PAKISTAN!=!" << endl;
	cout << "\t\t\t\t\t\t\t\t\t~power by MK-SOLUTIONS~" << endl;
	cout << "\n\n\t ~SELECT THE OPTION :" << endl;
	cout << "\t1. ADMIN\n\t2. USER" << endl;
	cout << "\t\t\t(opt)==>> ";
	cin >> a;
	if(a==1){
	    L.setaname();
	}
	else if(a==2){
	cout << "\n\n\t ~SELECT THE OPTION :" << endl;
	cout << "\t1. ABOUT DEC\n\tQ2. ELECTIONS\n\t4. VOTER INFO\n\t5. MEDIA\n\t6. MISC\n\t7. RETURN TO MAIN MENU" << endl;
	cout << "\t\t\t(opt)==>> ";
	cin >> x;
	system("cls");
    switch(x){
    	case 1:
	        ob.displayabout();
	        break; 
	    case 2:
			wi.setcity();
			wi.setarea();
			wi.checking_ward();
			cout << "";
			cout<<"ARE YOU LOCAL PAKISTANI OR FOREIGNER? ";
			cin>>n;
			if(n=="local"){
				system("cls");
				locals.setname();
				locals.setnic();
				locals.setid();
				system("cls");
			}
			else if(n=="foreigner"){
				system("cls");
				foreigner.setname();
				foreigner.setpassport();
				foreigner.setid();
				system("cls");
			}
			break;
		case 3:
		 	break;	
		}
	}
	else{
		break;
	}
  }
}