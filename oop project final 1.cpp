#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
class admin{
	private:
		string a_name, password;
		char c;
		int flag;
	public:	
		admin():flag(0){
			c=' ';
	    	password="";
		}
	    int  setaname(){
	    	while(flag!=2){
	    	cout << "ENTER ADMIN NAME => ";
	    	cin.ignore();
	    	getline(cin,a_name);
	    		if(a_name == "MUHAMMAD MUJTABA"){
						while(flag!=2){
							cout << "ENTER PASSWORD => ";
							while(c!=13){
	    						c=getch();
	    						if (c!=13){
	    							password += c;
	    							cout << "*";
								}
							}
						if(password == "Hello@100"){
							cout << "\t\t\t~~~~~~~~~~~~~~~~~~~~~~\n";
							cout << "\t\t\t\t\t\t\t\tLOGIN SUCCESSFULLY!" <<endl ;
							cout << "\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~\n";
							flag =2;	
							return 1;					
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
				cout << "\t\t\t\t\t INCORRECT ADMIN NAME" << endl;
				cout << "\t\t\t\t\t~BEWARE ONLY TWO TRIALS~" << endl;
				cout << "\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
				flag++ ;
			}
		  }
		}
		int checkresult(){
			fstream file;
			int pti,pmln,ppp,timer;
				file.open("PTI.txt",ios::in);
				file>>pti;
				file.close();
				file.open("PMLN.txt",ios::in);
				file>>pmln;
				file.close();
				file.open("PPP.txt",ios::in);
				file>>ppp;
				file.close();
				cout<<"\nNUMBER OF VOTES CASTED TO EACH PARTY "<<endl<<endl;
				cout<<"PTI = "<<pti<<endl;
				cout<<"PMLN = "<<pmln<<endl;
				cout<<"PPP = "<<ppp<<endl;
				file.open("TIMER.txt",ios::in);
				file>>timer;
				file.close();
				if(timer<5){
					if(pti>ppp && pti>pmln)
					cout<<"PTI IS WINNING TILL NOW!!!!\n";
					else if(ppp>pti && ppp>pmln)
					cout<<"PPP IS WINNING TILL NOW!!!!\n";
					else if(pmln>pti && pmln>ppp)
					cout<<"PMLN IS WINNING TILL NOW!!!!\n";
				}
				else{
					if(pti>ppp && pti>pmln)
					cout<<"CONGRATULATIONS!!!!!!!! PTI HAS WON THE 2022 ELECTIONS !!!! WITH "<<pti<<" VOTES\n";
					else if(ppp>pti && ppp>pmln)
					cout<<"CONGRATULATIONS!!!!!!!! PPP HAS WON THE 2022 ELECTIONS !!!! WITH "<<ppp<<" VOTES\n";
					else if(pmln>pti && pmln>ppp)
					cout<<"CONGRATULATIONS!!!!!!!! PMLN HAS WON THE 2022 ELECTIONS !!!! WITH "<<pmln<<" VOTES\n";
				}
				return 0;
		}
};

class variable{
	protected:
	int m,n,o,p,id,arr[5];
    string q,name,contact,email,address,postalcode,nic,passport,loc[5],forgn[5];
    bool id_exist=0;
};

class ContactDetails : protected variable{
	public:
		
		void setname(){
			cout<<"ENTER YOUR NAME: ";
			cin>>name;
		}
		void setcontact(){
			cout<<"ENTER YOUR CONTACT NUMBER: ";
			cin>>contact;
		}
		void setmail(){
			cout<<"ENTER YOUR EMAIL ADDRESS: ";
			cin>>email;
		}
		void setaddress(){
			cout<<"ENTER YOUR ADDRESS: ";
			cin>>address;
		}
		void setpostalcode(){
			cout<<"ENTER YOUR POSTAL CODE: ";
			cin>>postalcode;
		}
		string getname(){
			return name;
		}
		string getcontact(){
			return contact;
		}
		string getmail(){
			return email;
		}
		string getaddress(){
			return address;
		}
		string getpostalcode(){
			return postalcode;
		}
};

class voter:public ContactDetails{
	public:
		voter(){
		}
		void forlocal(){
			cout<<"ENTER YOUR CNIC: ";
			cin>>nic;
		}
		void forforeigner(){
			cout<<"ENTER YOUR PASSPORT NUMBER: ";
			cin>>passport;
		}
};

class media_dec: protected variable{

	public:
		void media(){
	   cout << "\n\n\t ~SELECT THE OPTION :" << endl;
	   cout << "\t1. PRESS RELEASE\n\t2. GALLERY\n\t3. TRAINING MATERIAL\n\t4. EXIT" << endl;
	   cout << "\t\t\t(opt)==>> ";
	   cin >> m;
	   switch(m){
	   	case 1:
	   		cout << "\tPRESS RELEASE BY DECP MAY'22"<<endl;
	   		cout << "\t1. NOTIFICATION REGARDING BAN ON POSTING REGARDING IN RESPECT OF 20 CONSTETITUES\n\t2. POSTAL BALAKOT PAPERS PK-7\n\t3. INTRA PARTY ELECTIONS'22\n\t4. POSTAL BALLOT PAPERS NA-240";
	   		cout << "\t\t\t(opt)==>> ";
			cin >> n;
			switch(n){
				case 1:
					cout << "\nELECTION COMMISSION OF PAKISTAN\n";
					cout << "NOTIFICATION\n";
					cout << "ISLAMABAD 26 MAY'22\n";
					cout << "In article 218(3) of Islamic Republic Of pakistan read sub-section 4 of section 5and 181 of election act 181, it is herly by stated that :";
					cout << "\n1.No officer or authority can transfer any officer in district, where shedule for by election has been issued on 25th may 2022.";
					cout << "\n2.No goverment functionary or elective representative including a local goverment functionary shall announce any development scheme.\n";
					break;
				case 2:
					cout <<  "\nELECTION COMMISSION OF PAKISTAN\n";
					cout <<  "PRESS RELEASE\n";
					cout <<  "ISLAMABAD 24 MAY'22\n";
					cout <<  "THE LAST DATE FOR RECEIPT OF POSTAL BALLOT PAPERS FOR BYE ELECTION IN CONSTITUENCY No.PK-7,SWAT-V1 IS SET BY THE ELECTION COMMISSION AS 10th JUNE ,2022";
					cout <<  "\n1.THE FACILTY ,UNDER THE LAW, HAS BEEN EXTENDED TO THE PERSONS IN GOVERNMENT SERVICE, MEMBERS OF ARMED SERVICE, THEIR WIVES AND SUCH OF THEIR CHILDREN AS ARE REGISTERED VOTERS, AND ORDINARILY RESIDE WITH THEM PROVIDED THEY ARE STATIONED AT A PLACE OTHER THAN A PLACE WHERE THEIR CONSTITUENCY IS SITUATED, PERSONS WITH ANY PHYSICAL DISABILITY WHO ARE UNABLE TO TRAVEL AND HOLD AN NIC WITH A LOGO OF PROOF OF THEIR DISABILITY ISSUED BY THE NATIONAL DATABASE AND REGISTRATION AUTHORITY.PERSONS WHO ARE DETAINED IN PRISON OR HELD IN CUSTODY ARE ALSO ENTITLED TO VOTE BY POSTAL BALLOT";
					cout <<  "\n2.THE PERSONS APPOINTED BY THE RETURNING OFFICER,INCLUDING POLICE PERSONNEL, FOR THE PERFORMANCE OF ANY DUTY IN CONNECTION WITH AN ELECTION AT POLLING STATIONS OTHER THAN THE ONE AT WHICH THEY ARE ENTITLED TO CAST THEIR VOTE ARE ADVISED TO APPLY FOR POSTAL BALLOT TO THE RETURNING OFFICER WITHIN THREE DAYS OF THEIR APPOINTMENT";
					cout <<  "\n3.APPLICATIONS FOR POSTAL BALLOT SHOULD BE MADE ON THE PRESCRIBED FORM WITH THE RETURNING OFFICER CONCERNED OF THE CONSTITUENCY. APPLICATION FORMS FOR POSTAL BALLOT CAN BE OBTAINED FROM Mr.MUHAMMAD ARIF(ELECTION OFFICER/RETURNING OFFICER), ADDRESS: OFFICE OF THE REGIONAL ELECTION COMMISSIONER , MALAKAND KHAISTA CORONA COLLEGE SAIDU SHARIF,SWAT. CONTACT NO: 0946-920089. THE APPLICATION FORM MAY ALSO BE DOWNLOADED FROM ECP'S WEBSITE www.ecp.gov.pk";
					cout <<  "\n4.THE VOTERS TO WHOM POSTAL BALLOTS ARE ISSUED WILL NOT BE ENTITLED TO VOTE IN PERSON AT THE POLLING STATIONS";
					cout <<  "\n5.THE APPLICATION SHOULD BE FORWARDED BY THE OFFICE/DEPARTMENT OF THE VOTER CONCERNED TO GUARD AGAINST UNAUTHORIZED PERSON APPLYING FOR POSTAL BALLOT\n";
					break;
				case 3:
					cout << "\nELECTION COMMISSION OF PAKISTAN\n";
					cout << "NOTIFICATION\n";
					cout << "ISLAMABAD 21 MAY'22";
					cout << "\n1.The intra-party election is a fundamental indicator to explore the authenticity of democratization and decentralization of political parties. ";
					cout << "\n2.Intra-party democracy provides a leading role to all registered members to participate directly or indirectly in the process of decision making.";
					cout << "\n3.In Pakistan, political parties and state politics revolve around personalities and some monastic families. Even mainstream political parties of Pakistan avoided intra-party elections and leading leadership comes from the top through direct nomination. In this way all the portfolios within the parties are conformed.";
					cout << "\n4.This paper further explores that what are the challenges faced by a real and authentic intra-party elections in Pakistani political parties and why political parties avoided an intra-party election.";
					cout << "\n5.The study concludes that in practice the grass-roots members of political parties are ignored in all crucial decisions making within the party. \n";
					break;
				case 4:
				    cout << "\nELECTION COMMISSION OF PAKISTAN\n";
					cout << "NOTIFICATION\n";
					cout << "ISLAMABAD 11 MAY'22\n";
				    cout <<  "THE LAST DATE FOR RECEIPT OF POSTAL BALLOT PAPERS FOR BYE ELECTION IN CONSTITUENCY No.NA-240 KORANGI,KARACHI-2 IS SET BY THE ELECTION COMMISSION AS 2nd JUNE ,2022";
					cout <<  "\n1.THE FACILTY ,UNDER THE LAW, HAS BEEN EXTENDED TO THE PERSONS IN GOVERNMENT SERVICE, MEMBERS OF ARMED SERVICE, THEIR WIVES AND SUCH OF THEIR CHILDREN AS ARE REGISTERED VOTERS, AND ORDINARILY RESIDE WITH THEM PROVIDED THEY ARE STATIONED AT A PLACE OTHER THAN A PLACE WHERE THEIR CONSTITUENCY IS SITUATED, PERSONS WITH ANY PHYSICAL DISABILITY WHO ARE UNABLE TO TRAVEL AND HOLD AN NIC WITH A LOGO OF PROOF OF THEIR DISABILITY ISSUED BY THE NATIONAL DATABASE AND REGISTRATION AUTHORITY.PERSONS WHO ARE DETAINED IN PRISON OR HELD IN CUSTODY ARE ALSO ENTITLED TO VOTE BY POSTAL BALLOT";
					cout <<  "\n2.THE PERSONS APPOINTED BY THE RETURNING OFFICER,INCLUDING POLICE PERSONNEL, FOR THE PERFORMANCE OF ANY DUTY IN CONNECTION WITH AN ELECTION AT POLLING STATIONS OTHER THAN THE ONE AT WHICH THEY ARE ENTITLED TO CAST THEIR VOTE ARE ADVISED TO APPLY FOR POSTAL BALLOT TO THE RETURNING OFFICER WITHIN THREE DAYS OF THEIR APPOINTMENT";
					cout <<  "\n3.APPLICATIONS FOR POSTAL BALLOT SHOULD BE MADE ON THE PRESCRIBED FORM WITH THE RETURNING OFFICER CONCERNED OF THE CONSTITUENCY. APPLICATION FORMS FOR POSTAL BALLOT CAN BE OBTAINED FROM Mr.MUHAMMAD ABDUL RAZAK(DISTRICT ELECTION COMMISSIONER), ADDRESS: OFFICE OF THE DISTRICT ELECTION  COMMISSIONER , KORANGI KARACHI 2. CONTACT NO: 0946-920089. THE APPLICATION FORM MAY ALSO BE DOWNLOADED FROM ECP'S WEBSITE www.ecp.gov.pk";
					cout <<  "\n4.THE VOTERS TO WHOM POSTAL BALLOTS ARE ISSUED WILL NOT BE ENTITLED TO VOTE IN PERSON AT THE POLLING STATIONS";
					cout <<  "\n5.THE APPLICATION SHOULD BE FORWARDED BY THE OFFICE/DEPARTMENT OF THE VOTER CONCERNED TO GUARD AGAINST UNAUTHORIZED PERSON APPLYING FOR POSTAL BALLOT\n";
					break;
			}
			break;
			case 2:
					cout << "\nGALLERY IMAGES\n";
	   		cout << "\t1. GENDER GAP\n\t2. NATIONAL VOTERS DAY 2020\n\t3. MEETING WITH UN DELEGATION\n\t4. ELECTED MEMBERS OF ECP";
	   		cout << "\n\t\t\t(opt)==>> ";
			cin >> o;
			switch(o){
				case 1:
					cout << "\n1. Location:	ECP Secretariat Islambad";
					cout << "\n2. Date: 30/07/2021";
					break;
				case 2:
					cout << "\n1. Location:	ECP Secretariat Islamabad";
					cout << "\n2. Date: 07/12/2020";
					break;
				case 3:
					cout << "\n1. Location:	ECP Secretariat Islamabad";
					cout << "\n2. Date: 13/03/2020";
					break;
				case 4:
					cout << "\n1. Location:	ECP Secretariat Islamabad";
					cout << "\n2. Date: 27/01/2020";
					break;	
			}
			break;
			case 3:
					cout << "\nTRAINING MATERIAL\n";
	   		cout << "\t1. Training Material Local Government Elections KP\n\t2. Training Material Cantonment\n\t3. Training Material and Video Messages for General Elections 2018";
	   		cout << "\n\t\t\t(opt)==>> ";
			cin >> p;
			switch(p){
				case 1:
					cout << "\nHandbook For Presiding Officers";
					cout << "\nLeaflet for guidance of APOs and Polling Officers";
					cout << "\nVideo messages relating to Local Government Elections";
					cout << "\nPictorial images for the guidance of Voters";
					break;
				case 2:
				    cout << "\nHandbook For District Returning Officers";
					cout << "\nHandbook for Returning officers";
					cout << "\nHandbook for Presiding Officers and Sr. assistant Presiding Officers";
					cout << "\nLeaflet for the guidance of Polling Officer";
					break;
				case 3:
					cout << "\nGeneral Elections 2018 -ECP TV Advertisement Urdu with English subtitles ";
					cout << "\nVoting Procedure Video with Audio Visual and Sign Language ";
					cout << "\nTraining Video for Polling Staff ";
					cout << "\nProcedure to Cast Vote";
					break;
				case 4:
				    break;	
				}
			break;	
			}
		 }
		};

class misc : public ContactDetails{
	public:
		    void cont_decp(){
			cout << "\n\n\t ~SELECT THE OPTION :" << endl;
	  	 	cout << "\t1. REGISTER COMPLAIN\n\t2. TENDERS\n\t3. CONTACT US\n\t4. EXIT" << endl;
	   		cout << "\t\t\t(opt)==>> ";
	   		cin >> m;
	   		
	   		switch(m){
	   			case 1:
	   				cout << "FOR COMPLAIN REGISTRATION PLEASE FILL THE FOLLOWING CREDENTIALS :" << endl;
	   				setname();
	   				setcontact();
	   				setaddress();
	   				setmail();
	   				cout << "PLEASE ENTER YOUR COMPLAIN";
	   				cin >> q;
	   				cout << "THANKS FOR BELEIVING IN US, WE WILL TRY OUR BEST TO SOLVE THIS ISSUE!";
	   			break;
	   			
	   			case 2:
	   				cout << "FOR TENDERS PLEASE FILL THE FOLLOWING CREDENTIALS :" << endl;
				   	setname();
	   				setcontact();
	   				setaddress();
	   				setmail();
                    setpostalcode();
				   	cout << "TENDER OF DECP'22 IS ALREADY GIVEN TO MK INDUSTRIES, WE HAVE NOTED YOUR DETAILS FOR FURTHER TENDERS!";
				  break; 
				  
				  case 3:
				    cout << "CONTACT DETAILS :" << endl;
					cout << "DECP-SECRETARIAT ISLAMABAD :\t OFFICE-TELEPHONE : (+92)(51)(9205611) / (9205300)" << endl;
					cout << "PEC OFFICE PUNJAB :\t OFFICE-TELEPHONE : (+92)(51)(9234511) / (9205311)" << endl;
					cout << "PEC OFFICE KPK :\t OFFICE-TELEPHONE : (+92)(51)(9234511) / (9205311)" << endl;
					cout << "PEC OFFICE SINDH :\t OFFICE-TELEPHONE : (+92)(51)(9234511) / (9205311)" << endl;
					cout << "PEC OFFICE BALOCHISTAN :\t OFFICE-TELEPHONE : (+92)(51)(9234511) / (9205311)" << endl;
					break;
			   }
			   
		}
};

class wardinfo : protected variable{
	public:
	    wardinfo(){}
		void setcity(){
			cout<<"\t\tENTER YOUR CITY AND AREA'S NAME TO SEE IN WHICH WARD YOUR VOTE WILL BE CASTED\n";
			cout <<"\t\t NOTE: IF AREA OR CITY IS NOT IN THE OPTION SELECT THE NEAREST AREA OR CITY \n";
			cout<<"\nCHOOSE YOUR CITY BY SELECTING CORRECT OPTION NUMBER e.g(1,2,3,etc)\n";
			cout<<"\n1. KARACHI \n2. LAHORE \n3. PESHAWAR \n4. ISLAMABAD \n5. HYDERABAD \n6. RAWALPINDI\n";
			cout<<"\nYOUR OPTION:- ";
			cin>>m;
			system("cls");
		}
		void setarea(){
			cout<<"ENTER YOUR AREA BY SELECTING CORRECT OPTION e.g(1,2,3,etc)\n\n ";
			switch(m){
				case 1:
					cout<<"\n1. GULISTAN-E-JAUHUR \n2. GULSHAN-E-JAMAL \n3. DEFENCE \n4. MALIR \n5. KORANGI \n6. LALUKHAIT \n7. NAZIMABAD \n8. SAFORA \n9. SADAR \n10. LYARI\n";
					cout<<"\nYOUR OPTION:- ";
			        cin>>n;
			        break;
			    case 2:
			    	cout<<"\n1. ALLAMA IQBAL TOWN \n2. GARDEN TOWN \n3. CANAL ROAD \n4. THOKAR NIAZ \n5. AWAN TOWN \n6. AZIZABAD \n7. FASIAL BAGH \n8. DHAIR \n9. KOT-MOHIBBU \n10. KOT-BEGUM\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>n;
			    	break;
			    case 3:
			    	cout<<"\n1. CHOWK YADGAR \n2. JAMRUD FORT \n3. killer town \n4. RAZA TOWN \n5. AWAMI MARKAZ \n6. SADDAR \n7. MAHABAT BAGH \n8. DARRA ADAM KHEL \n9. NOWSHERA \n10. KOT-PATHAN\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>n;
			    	break;
			    case 4:
			    	cout<<"\n1. RAIWAND \n2. FATEH JHANG \n3. TAXILA \n4. ZERO POINT \n5. SIX ROAD \n6. SATTELITE TOWN \n7. KAHUTA \n8. SIHALA \n9. KAHUTA \n10. BANI-GALA\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>n;
			    	break;
			    case 5:
			    	cout<<"\n1. LATIFABAD \n2. SHOHRA GOTH \n3. MIRRANI GOTH \n4. BUX-SHORO \n5. GIDU BANDAR \n6. KIRAR KHAN \n7. HUSRI \n8. DADDU \n9. KOTRI \n10. MIRPUR\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>n;
			    	break;
			    case 6:
			    	cout<<"\n1. CHAKRA \n2. AFZAL TOWN \n3. BAHRIA TOWN \n4. LAAL HAVELI \n5. D-CHOWCK \n6. SATTELITE TOWN \n7. CHAKLALA CANTT \n8. D-H-A \n9. CHAKRI \n10. LALAZAR\n";
			    	cout<<"\nYOUR OPTION:- ";
			    	cin>>n;
			    	break;
			}
			system("cls");
		}
		
		//checking of ward
		void checking_ward(){
			switch(m){
				case 1:
					switch(n){
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
					switch(n){
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
					switch(n){
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
					switch(n){
						case 1:
							cout<<"YOUR WARD IS 'WARD #31' \n";
								cout<<"PTI MNA:-SADIQ \nPMLN MNA:-ALTAMASH  \nPPP MNA:- GURINDER\n";
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #32' \n";
								cout<<"PTI MNA:-ABRAR \nPMLN MNA:-HARBAJAN  \nPPP MNA:-AKASH \n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #33' \n";
								cout<<"PTI MNA:-FAZIL \nPMLN MNA:-ROHIT  \nPPP MNA:-AMANULLAH \n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #34' \n";
								cout<<"PTI MNA:-HAFSA \nPMLN MNA:-MAAZ  \nPPP MNA:-ZAAFIR \n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #35' \n";
								cout<<"PTI MNA:-FAYAZ \nPMLN MNA:-HAMNA  \nPPP MNA:-YUMNA \n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #36' \n";
								cout<<"PTI MNA:-HAJRA \nPMLN MNA:-AREESHA  \nPPP MNA:-BHAWNA \n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #37' \n";
								cout<<"PTI MNA:-MUSLIM \nPMLN MNA:-NANJIANI  \nPPP MNA:-ALBERT \n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #38' \n";
								cout<<"PTI MNA:-MAKISA \nPMLN MNA:-KARAN  \nPPP MNA:-MOHSIL \n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #39' \n";
								cout<<"PTI MNA:-SANDIA \nPMLN MNA:-MURK  \nPPP MNA:-ALMAR \n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #40' \n";
								cout<<"PTI MNA:-KANERIA \nPMLN MNA:-HUSSAIN  \nPPP MNA:-BAHADUR \n";
							break;
					}
					break;
				case 5:
					switch(n){
						case 1:
							cout<<"YOUR WARD IS 'WARD #41' \n";
								cout<<"PTI MNA:-HITESH \nPMLN MNA:-HABIB  \nPPP MNA:-LABIB \n";
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #42' \n";
								cout<<"PTI MNA:-KHABIB \nPMLN MNA:-SARMAD  \nPPP MNA:-SAHIL \n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #43' \n";
								cout<<"PTI MNA:-SADAQAT \nPMLN MNA:-INTESHAB  \nPPP MNA:-SHAZ \n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #44' \n";
								cout<<"PTI MNA:-SUNNY \nPMLN MNA:-INTEQAB \nPPP MNA:-RASHEED \n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #45' \n";
								cout<<"PTI MNA:-SALEH \nPMLN MNA:-YAQOOB  \nPPP MNA:-MUSTAJAB \n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #46' \n";
								cout<<"PTI MNA:-BARKAT \nPMLN MNA:-REHMAT  \nPPP MNA:-BISMA \n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #47' \n";
								cout<<"PTI MNA:-RAYAN \nPMLN MNA:-RAFAY  \nPPP MNA:-MISBAH \n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #48' \n";
								cout<<"PTI MNA:-BASIM \nPMLN MNA:-ATIYA  \nPPP MNA:-KABIR \n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #49' \n";
								cout<<"PTI MNA:-ADEEN \nPMLN MNA:-HASIB  \nPPP MNA:-ABDUL DAR \n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #50' \n";
								cout<<"PTI MNA:-BASIT \nPMLN MNA:-SALMA \nPPP MNA:-HAMMAS \n";
							break;
					}
					break;
				case 6:
					switch(n){
						case 1:
							cout<<"YOUR WARD IS 'WARD #51' \n";
								cout<<"PTI MNA:-AREESH \nPMLN MNA:-AZEEZ  \nPPP MNA:-TAHIRA \n";
							break;
						case 2:
							cout<<"YOUR WARD IS 'WARD #52' \n";
								cout<<"PTI MNA:-ATIFA \nPMLN MNA:-RAHIMA  \nPPP MNA:-SUMRMA \n";
							break;
						case 3:
							cout<<"YOUR WARD IS 'WARD #53' \n";
								cout<<"PTI MNA:-SHARMEENA \nPMLN MNA:-BALMA  \nPPP MNA:-SHAFQAT \n";
							break;
						case 4:
							cout<<"YOUR WARD IS 'WARD #54' \n";
								cout<<"PTI MNA:-HASHEEM \nPMLN MNA:-TUAHA  \nPPP MNA:-SHEHNAZ \n";
							break;
						case 5:
							cout<<"YOUR WARD IS 'WARD #55' \n";
								cout<<"PTI MNA:-ABDUL GHAFFOOR \nPMLN MNA:-SIRAJ  \nPPP MNA:-ABDUL QADDOS \n";
							break;
						case 6:
							cout<<"YOUR WARD IS 'WARD #56' \n";
								cout<<"PTI MNA:-MUMTAZ \nPMLN MNA:-NABIL  \nPPP MNA:-KHUBSOORAT \n";
							break;
						case 7:
							cout<<"YOUR WARD IS 'WARD #57' \n";
								cout<<"PTI MNA:-NESHA \nPMLN MNA:-ARMEENA  \nPPP MNA:-FAZIL \n";
							break;
						case 8:
							cout<<"YOUR WARD IS 'WARD #58' \n";
								cout<<"PTI MNA:-FAARIS \nPMLN MNA:-HASHMAT  \nPPP MNA:-SHERRY \n";
							break;
						case 9:
							cout<<"YOUR WARD IS 'WARD #59' \n";
								cout<<"PTI MNA:-KAMIL \nPMLN MNA:-RIZ  \nPPP MNA:-HASNAIN \n";
							break;
						case 10:
							cout<<"YOUR WARD IS 'WARD #60' \n";
								cout<<"PTI MNA:-JANNAT \nPMLN MNA:-WAHAB  \nPPP MNA:-FUZAIL \n";
							break;
					}
					break;
			}
		}
};

class about : protected variable{
		public:
		void displayabout(){
			while(o!=4){
			cout << "\t\t\t\t\t\t\t!=!WELCOME TO DIGITAL ELECTION COMMISION OF PAKISTAN!=!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t~power by MK-SOLUTIONS~" << endl;
			cout << "\n\n\t ~SELECT THE OPTION :" << endl;
			cout << "\t1.OVERVIEW\n\t2.HOUNOURABLE CDEC\n\t3.HONOURABLE MEMBERS\n\t4.EXIT" << endl;
			cout << "\t\t\t(opt)==>> ";
			cin >> o;
		system("cls"); 
	switch(o){
		case 1:
			cout << "\t\t\t\t\t\t\t\t\t   OVERVIEW" << endl;
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
		    cout << "\n\t\t\t~THANKS FOR VISITING~\n";
			break;	
			  
		}
	}
   }
};

class votecast:public voter{	
	public:
		int filing(){
			fstream file;
			m=0;
			while(m!=1){
			cout<<"CHOOSE TYPE OF PAKISANI: \n1. LOCAL\n2. FOREIGN\n";
			cin>>o;
			switch(o){
				case 1:
					forlocal();
					file.open("lOCAL.txt",ios::in);
					for(int i=0;i<5;i++)
					file>>loc[i];
					file.close();
					for(int i=0;i<5;i++){
						if(nic==loc[i]){
							loc[i]="0";
							id_exist=1;
						}
					}
					file.open("LOCAL.txt",ios::out);
					for(int i=0;i<5;i++){
						file<<loc[i]<<endl;
					}
					file.close();
					if(id_exist==0){
						cout<<"INVALID CNIC NUMBER OR IT HAS BEEN USED ALREADY! \n";
						return 0;
					}
					m=1;
					break;
				case 2:
					forforeigner();
					file.open("FOREIGN.txt",ios::in);
					for(int i=0;i<5;i++)
					file>>forgn[i];
					file.close();
					for(int i=0;i<5;i++){
						if(passport==forgn[i]){
							forgn[i]="0";
							id_exist=1;
						}
					}
					file.open("FOREIGN.txt",ios::out);
					for(int i=0;i<5;i++){
						file<<forgn[i]<<endl;
					}
					file.close();
					if(id_exist==0){
						cout<<"INVALID PASSPORT NUMBER OR IT HAS BEEN USED ALREADY! \n";
						return 0;
					}
					m=1;
					break;
				default:
					cout<<"\nCHOOSE THE RIGHT OPTION!\n";
				}
			}
			id_exist=0;
			file.open("ID.txt",ios::in);
			setname();
			cout<<"ENTER YOUR ID: ";
			cin>>id;
			for(p=0;p<5;p++){
				file>>arr[p];
			}
			file.close();
			for(p=0;p<5;p++){
				if(id==arr[p]){
					arr[p]=0;
					id_exist=1;
				}
			}
			file.open("ID.txt",ios::out);
			for(p=0;p<5;p++){
				file<<arr[p]<<endl;
			}
			file.close();
			if(id_exist==0){
				cout<<"INVALID ID OR IT HAS BEEN USED ALREADY! \n";
				return 0;
			}
			int party,n,timer;
			while(n!=1){
				cout<<"\nCHOOSE A PARTY TO CAST YOU VOTE (1/2/3) \n\n";
				cout<<"1-PTI"<<endl;
				cout<<"2-PMLN"<<endl;
			cout<<"3-PPP"<<endl;
			cin>>party;
			if(party>0 && party<4){
				n=1;
			}
			else
				n=0;
			}
			int count;
			if(party==1){
				file.open("PTI.txt",ios::in);
				file>>count;
				count++;
				file.close();
				file.open("PTI.txt",ios::out);
				file<<count<<endl;
				file.close();
				file.open("TIMER.txt",ios::in);
				file>>timer;
				timer++;
				file.close();
				file.open("TIMER.txt",ios::out);
				file<<timer<<endl;
				file.close();
			}
			else if(party==2){
				file.open("PMLN.txt",ios::in);
				file>>count;
				count++;
				file.close();
				file.open("PMLN.txt",ios::out);
				file<<count<<endl;
				file.close();
				file.open("TIMER.txt",ios::in);
				file>>timer;
				timer++;
				file.close();
				file.open("TIMER.txt",ios::out);
				file<<timer<<endl;
				file.close();
			}
			else if(party==3){
				file.open("PPP.txt",ios::in);
				file>>count;
				count++;
				file.close();
				file.open("PPP.txt",ios::out);
				file<<count<<endl;
				file.close();
				file.open("TIMER.txt",ios::in);
				file>>timer;
				timer++;
				file.close();
				file.open("TIMER.txt",ios::out);
				file<<timer<<endl;
				file.close();
			}
			cout<<"YOUR VOTE HAS BEEN CASTED SUCCESSFULLY!!"<<endl;
			cout<<"\nTHANK YOU FOR CASTING YOUR VOTE!!"<<endl;
			return 0;
		}
};

class intro :  public admin,public about, public wardinfo, public media_dec, public misc, public votecast{
	private:
		int m,n;
	public:	
	void introduction(){
		while(m!=3){
			system("cls");
			cout << "\n\t\t\t\t\t\t\t!=!WELCOME TO DIGITAL ELECTION COMMISION OF PAKISTAN!=!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t~power by MK-SOLUTIONS~" << endl;
			cout << "\n\n\t ~SELECT THE OPTION :" << endl;
			cout << "\t1. ADMIN\n\t2. USER\n\t3. EXIT" << endl;
			cout << "\t\t\t(opt)==>> ";
			cin >> m;
			switch(m){
				case 1:
					int temp;
					temp=setaname();
					if(temp==1){
						char res;
						cout<<"\nDo you want to see the results (y/n)\n";
						cin>>res;
						if(res=='y' || res=='Y')
						checkresult();
						else
						break;
					}
					system("pause");
					break;
				case 2:
					while(n!=6){
					system("cls");
					cout << "\n\n\t ~SELECT THE OPTION :" << endl;
					cout << "\t1. ABOUT DEC\n\t2. CAST VOTE\n\t3. WARD INFO\n\t4. MEDIA\n\t5. MISC\n\t6. EXIT" << endl;
					cout << "\t\t\t(opt)==>> ";
					cin >> n;
					system("cls");
			  		switch(n){
    					case 1:
	        				displayabout();
	        				system("pause");
	        				break; 
	    				case 2:
	    					int x;
	    					cout<<"ENTER YOUR AGE: ";
	    					cin>>x;
	    					if(x>18||x==18){
								filing();
							}
							else
							cout<<"\nYOU ARE NOT ELLIGIBLE TO CAST VOTE!\n";
							system("pause");
							break;
						case 3:
						    setcity();
							setarea();
							checking_ward();
							system("pause");
							break;
						case 4:
					    	media();
							system("pause");		
							break;
						case 5:
					    	cont_decp();
					    	system("pause");
							break;
						case 6:
					    	break;		
					}}
					break;
				}
			}
       }	
};


int main(){
	intro ob1;
 	ob1.introduction();
}

