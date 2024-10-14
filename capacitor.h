#ifndef _CAPACITOR_H_
#define _CAPACITOR_H_

struct _capacitor
{
	double *time;
	double *voltage;
	double *current;
	double C;
	
	_capacitor(){
	time = new double[50001];
	voltage = new double[50001];
	current = new double[50001];
	C = 0.0000000001;
	time[0] = 0;
	voltage[0] = 0;
	current[0] = 0.01;
	}	
	~_capacitor(){
	delete[] time;
	delete[] voltage;
	delete[] current;
	std::cout<<"Objects deleted." <<std::endl;
	}
};
typedef struct _capacitor Capacitor;

#endif


