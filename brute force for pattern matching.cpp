//brutte force pattern matching algorithm
#include<iostream>
#include<cstring>

using namespace std;

int bf(string str1,string str2){
	int i;
	int ls= str1.length();
	int lp=str2.length();
	int max = (ls-lp+1);
	for( i=0;i< max;i++){
		bool flag =true;
		for(int j=0;j<lp && flag==true;j++){
			if(str2[j]!= str1[j+i])
				flag=false;
				break;
		}
		if(flag==true){
			return  i;
		}
	}
		
		return -1;
}

int main(){
	  string str1,str2;
	  cout<<"Enter main string: ";
	  cin>>str1;
	  cout<<endl<<"enter pattern string: ";
	  cin>>str2;
	  int result= bf(str1,str2);
	  if(result){
	  	cout<<"\npattern found for index "<<result<<" to index "<<(result+str2.length())<<"."<<endl;	
	  }else cout<<"pattern not found."<<endl;
	  
	  return 0;
	  
}

