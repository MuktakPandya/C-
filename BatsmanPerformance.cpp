#include<iostream>
using namespace std;
class Cricketer{
	public:
		int i,j, runs[5];
		
		
};
class Batsman: public Cricketer{
	public: 
		int total_runs=0, best_performance, temp;
		float average_runs;
		void input_data(){
			cout<<"Enter Runs in Match: "<<endl;
			for(i=0;i<5;i++){
			cin>>runs[i];
			total_runs=total_runs+runs[i];
		}
			for(i=0;i<5;i++){
				
				for(j=i+1;j<5;j++){
					
					if(runs[j]>runs[i]){
						
						temp=runs[i];
						runs[i]=runs[j];
						runs[j]=temp;
					}	
				}
			best_performance=runs[j];
	}
			
}
		void calculate_average_runs(){
			average_runs=total_runs/5;
			cout<<"Average runs are: "<<endl;
		}
		void display_data(){
			cout<<"Total runs: "<<total_runs<<endl;
			cout<<"Average runs: "<<average_runs<<endl;
			cout<<"Best performance: "<<best_performance<<endl;
		}
};
int main(){
	Batsman b1;
	b1.input_data();
	b1.calculate_average_runs();
	b1.display_data();
}
