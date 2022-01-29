#include <iostream>

using namespace std;

 int main(){

 	int i, j;
	int count;
	int areaM;
	bool found = false;
 					
	int m[4][5] =    {{0, 0, 0, 0, 1},
				      {1, 0, 0, 0, 1},
				      {1, 0, 0, 0, 1},
				      {1, 0, 0, 0, 1}};
				                   
	 for(i=0;i<4;i++){
	 for(j=0;j<5;j++){
	 	
	 	if(m[i][j] == 1){
		 	count++;
		}if(count == 20){
		
		 	areaM = count;
		 	found = true;
		 	
		}else 
	 	if(m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 1 && m[i][j+3] == 1
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1 && m[i+1][j+2] == 1 && m[i+1][j+3] == 1
		&& m[i+2][j] == 1 && m[i+2][j+1] == 1 && m[i+2][j+2] == 1 && m[i+2][j+3] == 1
		&& m[i+3][j] == 1 && m[i+3][j+1] == 1 && m[i+3][j+2] == 1 && m[i+3][j+3] == 1
		&& found == false
		)
		 {
		
				areaM = 16;
				found = true;
		
		}
		else
		if(m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 1 && m[i][j+3] == 1 && m[i][j+4] == 1
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1 && m[i+1][j+2] == 1 && m[i+1][j+3] == 1 && m[i+1][j+4] == 1
		&& m[i+2][j] == 1 && m[i+2][j+1] == 1 && m[i+2][j+2] == 1 && m[i+2][j+3] == 1 && m[i+2][j+4] == 1
		&& found == false
		   ){
		   	
		   		areaM = 15;
		   		found = true;
		   		
		   }
	 	else
	 	if(m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 1 && m[i][j+3] == 1
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1 && m[i+1][j+2] == 1 && m[i+1][j+3] == 1
		&& m[i+2][j] == 1 && m[i+2][j+1] == 1 && m[i+2][j+2] == 1 && m[i+2][j+3] == 1
		&& found == false)
		{
			
			areaM = 12;
			found = true;
			
		}
		else
	 	if(m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 1
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1 && m[i+1][j+2] == 1
		&& m[i+2][j] == 1 && m[i+2][j+1] == 1 && m[i+2][j+2] == 1
		&& m[i+3][j] == 1 && m[i+3][j+1] == 1 && m[i+3][j+2] == 1
		&& found == false
	){
		
			areaM = 12;
			found = true;
				
		}else if(m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 1 && m[i][j+3] == 1 && m[i][j+4] == 1
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1 && m[i+1][j+2] == 1 && m[i+1][j+3] == 1 && m[i+1][j+4] == 1
		&& found == false
		&& j != 1 && j!= 2 && j != 3 && j!= 4
		){
			
			areaM = 10;
			found = true;
			
		}else
		if(m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 1 
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1 && m[i+1][j+2] == 1
		&& m[i+2][j] == 1 && m[i+2][j+1] == 1 && m[i+2][j+2] == 1
		&& found == false
		&& j != 3 && j!= 4){
			
		   areaM = 9;
		   found = true;
		   
		 }
		
		else 
	 	if(m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 1 && m[i][j+3] == 1
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1 && m[i+1][j+2] == 1 && m[i+1][j+3] == 1
		&& found == false
		&& j!= 2 && j != 3 && j!= 4){
			
		   areaM = 8;
		   found = true;
		   
		}
		else 
	 	if(m[i][j] == 1 && m[i+1][j] == 1 && m[i+2][j] == 1 && m[i+3][j] == 1
		&& m[i][j+1] == 1 && m[i+1][j+1] == 1 && m[i+2][j+1] == 1 && m[i+3][j+1] == 1
		&& found == false){
			areaM = 8;
		   found = true;
		}
		if(m[i][j] == 1 && m[i][j+1] == 1 && m[i][j+2] == 1 
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1 && m[i+1][j+2] == 1
		&& found == false
		&& j != 3 && j!= 4){
			
		   areaM = 6;
		   found = true;
		   
		 }
		 
		else
	 	if(m[i][j] == 1 && m[i+1][j] == 1 && m[i+2][j] == 1
		&& m[i][j+1] == 1 && m[i+1][j+1] == 1 && m[i+2][j+1] == 1
		&& found == false
		&& j!= 4
		){
				
			areaM = 6;
			found = true;		
			
			  }
		else	  
		if(m[i][j] == 1 && m[i][j+1] == 1
		&& m[i+1][j] == 1 && m[i+1][j+1] == 1
		&& found == false
		&& j!= 4){
			
			areaM = 4;
			found = true;
			
		}
	 }
}
		if(found == true){
		cout << areaM;
		}
		else{
		cout << "There are no amount of numbers needed to form a rectangle in the multidimensional array.";	
		}
			
 	return 0;
 }
