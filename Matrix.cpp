#include<iostream>
using namespace std;

class Matrix{
	public:
		int matrix[3][3];
		int matrix2[3][3];
		
	Matrix operator >>(Matrix &o){
		cout<<"Enter the elemets of First Matrix :\n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>o.matrix[i][j];
			}
		}cout<<"\n";
		cout<<"Enter the elemets of Second Matrix :\n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>o.matrix2[i][j];
			}
		}cout<<"\n";
	}
	Matrix operator <<(Matrix &o){
		cout<<"First Matrix : \n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<o.matrix[i][j]<<"\t";
			}cout<<"\n";
		}cout<<"\n";
		cout<<"Second Matrix : \n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<o.matrix2[i][j]<<"\t";
			}cout<<"\n";
		}
	}
	Matrix operator +(Matrix &o){
		int sum[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				sum[i][j]=o.matrix[i][j]+o.matrix2[i][j];
			}
		}
		cout<<"Matrix Addition : \n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<sum[i][j]<<"\t";
			}cout<<"\n";
		}
	}
	Matrix operator -(Matrix &o){
		int diff[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				diff[i][j]=o.matrix[i][j]-o.matrix2[i][j];
			}
		}cout<<"Matrix Subtraction : \n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<diff[i][j]<<"\t";
			}cout<<"\n";
		}
	}
	Matrix operator *(Matrix &o){
			int mult[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
				for(int k=0;k<3;k++){
					mult[i][j]+=o.matrix[i][k]*o.matrix2[k][j];
				}				
			}
		}cout<<"Matrix Multiplication : \n";
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				
					cout<<mult[i][j]<<"\t";				
			}cout<<"\n";
		}
	}
	
};
int main(){
	Matrix m;
	Matrix in;
	in>>m;
	Matrix op;
	op<<m;
	in+m;
	in-m;
	in*m;
}
