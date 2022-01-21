#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(unsigned int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(vector<int> k){
	cout << "[";
	for(unsigned int i = 0; i < k.size(); i++){
		cout << k[i];
		if(i+1 == k.size()) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> m,vector<int> n){
	int sum = 0;
	for(unsigned int i = 0; i < m.size(); i++) sum += m[i]*n[i];	
	return sum;
}
