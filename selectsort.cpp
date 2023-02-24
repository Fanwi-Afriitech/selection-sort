#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class student{
	private:
		int score[5];
	public:
	void insert(){
			
			cout<<"enter a number \n";
			
			for(int i=0;i<5;i++)
			{
				cin>>score[i];
			}
		}
	
	void selectionsort(){
	        int least,out,in,temp;
	    for(out=0;out<5;out++){
	    	least= score[out];
	    	
	    	for(in=out; in<5;in++){
	    		if(score[in]<least){
	    			temp=score[in];
	    			score[in]=least;
	    			least=temp;
	    		
				}
			}
			score[out]=least;
		}
	
	}
		
	
		
	void display(){
			for(int i=0;i<5;i++){
				cout<<score[i]<<",";
			}
		}
};
int main() {
student s1;
	s1.insert();
    s1.display();
    s1.selectionsort();
    s1.display();
		
}
 /*int out,in,least,low=0;
	        bool y;
	        for(out=0;out<5;out++){
	        	least=score[low];
	        	for(in=low;in<5;in++){
	        		if(least>score[in]){
	        			y=true;
	        			least=score[in];
	        			score[in]=score[low];
	        			score[low]=least;
					}
				}
				if(y!=true){
					score[low]=least;
				}
				++low; */