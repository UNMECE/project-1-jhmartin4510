#ifndef _CAPACITOR_H_
#define _CAPACITOR_H_

struct _capacitor
{
	double *time;
	double *voltage;
	double *current;
	double C;
	
	_capacitor(){
/*dynamically allocating an array doubles for time, voltage, and current*/
	time = new double[50001];	
	voltage = new double[50001];
	current = new double[50001];
	C = 0.0000000001;	//initializing C to capacitor value
	time[0] = 0;		//initialziing beginning of time array to 0
	voltage[0] = 0;		//initializing beginning of voltage array to 0
	current[0] = 0.01;	//initializing beginnign of current arrya to 0.01
	}	
/*destructor for a capacitor object. Frees the memory allocated for time, voltage, and current*/
	~_capacitor(){
	delete[] time;
	delete[] voltage;
	delete[] current;
	std::cout<<"Objects deleted." <<std::endl;
	}
};
typedef struct _capacitor Capacitor;

#endif


