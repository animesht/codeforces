#include <iostream>
using namespace std;
class Stats {
public:
	Stats();
	void insert(int value);
	double getMedian();
	double getMean();
	int sum;
	int ctr;
	int a[1000];
	bool b[1000];
};

Stats::Stats() {
	memset(b, false, 1000);
	memset(a, 0, 1000);
}

void Stats::insert(int value) {
	sum+=value;
	a[value]++;
	ctr++;
	b[value] = true;
}

double Stats::getMedian() {
	int n = 0;
	int i;
	for (i=0; i<1000; i++) {
		if(b[i]) {
			n+=a[i];
			if(n>=ctr/2) 
				break;
		}
	}
	if (ctr%2) return (double) i;
	else if (a[i]>1) return (double) i;
	else return (double) (2*i+1)/2;
}

double Stats::getMean() {
	return (double) sum/ctr;
}

int main () {
	int a;
	Stats q;
	cin>>a;
	int t;
	for(int i=0; i<a; i++) {
		cin>>t;
		q.insert(t);
	}

	cout<<q.getMean()<<endl;
	cout<<q.getMedian()<<endl;
}




