#include <iostream>

using namespace std;

int main() {
   
   int i, j, c, l, ini, inij, count, lasti, lastj;
   bool inicio = false;
   bool final = false;
   int m[4][5] ={{1,1,1,0,0},
                 {1,0,1,0,0},
                 {0,0,0,1,0},
                 {1,0,0,0,1}};
    int dimention[100];
    //inicio do primeiro quadrado dimention[0] dimention[1]
                 
    for(i = 0; i<4; i++){
        for(j = 0; j<5; j++){
            //std::cout << m[i][j] << " ";
           
           if(m[i+1][j] == 0 && m[i-1][j] == 0){
		 	m[i][j] = 0;
		 }
		 if(m[i][j+1] == 0 && m[i][j-1] == 0){
		 	m[i][j] = 0;
		 }
		 if(m[i-1][j] == 0 && m[i][j-1] == 0 && m[i+1][j+1] == 0
		 || m[i-1][j] == 0 && i == 2 && j == 0  && m[i+1][j+1] == 0){
		 	m[i][j] = 0;
		 }
		 if(m[i-1][j] == 0 && i == 3){
		 	m[i][j] = 0;
		 }
           
           
            //capturei o inicio do vetor
            if(m[i][j] == 1 && inicio == false){
                ini = i;
                inij = j;
                dimention[0] = ini;
                dimention[1] = inij;
                inicio = true;
            }
            if(m[i][j] == 0 && final == false){
            	lasti = i;
            	lastj = j-1;
            	
            //	cout << lasti << lastj;
            	final = true;
            	//break;
			}
			
			
			
			cout << m[i][j] << " ";
            
            
        }
        cout << "\n";
    }
   
   
    
   
   
/*   
    cout << "[" << dimention[0] << "]" << "["<< dimention[1] << "]";
   
    cout << "Ultimo i " << lasti << "\nUltimo j "  << lastj;
*/

	//cout << lasti << lastj;


    return 0;
}
