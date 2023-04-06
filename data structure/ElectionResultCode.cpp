#include<iostream>
using namespace std;
int main()
{
int party,bjp=0,shivsena=0,congress=0;	
                      abc:
cout<<"Online Voting System:";
cout<<"\nPress 1 To Vote bjp:";
cout<<"\nPress 2 To Vote Shivsena:";
cout<<"\nPress 3 To Vote congress:";
cin>>party;
switch(party)
{
	case 1:
		cout<<"\nYou Give Your To Vote bjp:";
		bjp++;
		break;
		
		case 2:
			cout<<"\nYou Give Your Vote To shivsena:";
			shivsena++;
			break;
			
			case 3:
				cout<<"\nYou Give Your To congress:";
				congress++;
				break;
				default:
					cout<<"\nYou Press Wrong Key:";
					goto abc;
					
} 
cout<<"\nTo Know Result Of This Election  Then Press R:";
cout<<"Otherwise Enter To Any Key:";
char ch;
cin>>ch;
if(ch='R')
{
	xyz:
	cout<<"\nEnter administrative Username=";
	string uname;
	cin>>uname;
	cout<<"\nEnter administrative password=";
	int pass;
	cin>>pass;
	if(uname=="Admin" && pass==1234)
	{
		cout<<"\nVotes of bjp in this election="<<bjp;
		cout<<"\nVotes of shivsena in this election="<<shivsena;
		cout<<"\nVotes of congress in this election="<<congress;
		
		if(bjp>shivsena && shivsena>=congress)
		cout<<"\nbjp is winner of  this election:";
		else if(shivsena>bjp && bjp>=congress)
		cout<<"\nshivsena is winner of this election:";
		else if(congress>bjp && bjp>=shivsena)
		cout<<"\ncongress is winner of this election:";
		else
		cout<<"\nVotes are tied in this election:";
	}
	else
	{
		cout<<"\nWarning!........Your Username And Passsword Is Incorrect...Retype Your Username And Password!!!!......";
		goto xyz;
	}
}
else 
goto abc; 
return 0;	
}
