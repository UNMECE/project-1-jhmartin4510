#include <iostream>
#include "capacitor.h"
#include <iomanip>

#define dT  0.0000000001
#define STEP 50001
#define R 1000
#define c 0.0000000001 
#define I_const 0.01
#define V_const 100 


int main()
{
	Capacitor c1;
	for(int i = 1; i<STEP; i++)
	{
		c1.time[i] = c1.time[i-1]+dT;
		c1.voltage[i] = c1.voltage[i-1]+((c1.current[i-1])*dT*(1/c1.C));
		c1.current[i] = c1.current[i-1]-(c1.current[i-1]*dT*(1/(R*(c1.C))));
	}
	std::cout<<"Table of values: " <<std::endl;
	std::cout<<"T_stamp\tVoltage\tCurrent" <<std::endl;
	for(int i = 1; i<251; i++)
	{		
		std::cout<<std::fixed <<std::setprecision(3) <<i*200 <<"\t" <<c1.voltage[i*200] <<"V\t" <<c1.current[i*200] <<"A" <<std::endl;
	}
	return 0;	
}
